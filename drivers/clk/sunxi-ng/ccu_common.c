// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright 2016 Maxime Ripard
 *
 * Maxime Ripard <maxime.ripard@free-electrons.com>
 */

#include <linux/clk.h>
#include <linux/clk-provider.h>
#include <linux/device.h>
#include <linux/iopoll.h>
#include <linux/module.h>
#include <linux/slab.h>
#include <linux/syscore_ops.h>

#include "ccu_common.h"
#include "ccu_gate.h"
#include "ccu_reset.h"
#include "ccu_nm.h"

struct sunxi_ccu {
	const struct sunxi_ccu_desc	*desc;
	spinlock_t			lock;
	struct ccu_reset		reset;
};

void ccu_helper_wait_for_lock(struct ccu_common *common, u32 lock)
{
	void __iomem *addr;
	u32 reg;

	if (!lock)
		return;

	if (common->features & CCU_FEATURE_LOCK_REG)
		addr = common->base + common->lock_reg;
	else
		addr = common->base + common->reg;

	WARN_ON(readl_relaxed_poll_timeout(addr, reg, reg & lock, 100, 70000));
}
EXPORT_SYMBOL_NS_GPL(ccu_helper_wait_for_lock, "SUNXI_CCU");

bool ccu_is_better_rate(struct ccu_common *common,
			unsigned long target_rate,
			unsigned long current_rate,
			unsigned long best_rate)
{
	unsigned long min_rate, max_rate;

	clk_hw_get_rate_range(&common->hw, &min_rate, &max_rate);

	if (current_rate > max_rate)
		return false;

	if (current_rate < min_rate)
		return false;

	if (common->features & CCU_FEATURE_CLOSEST_RATE)
		return abs(current_rate - target_rate) < abs(best_rate - target_rate);

	return current_rate <= target_rate && current_rate > best_rate;
}
EXPORT_SYMBOL_NS_GPL(ccu_is_better_rate, "SUNXI_CCU");

/*
 * This clock notifier is called when the frequency of a PLL clock is
 * changed. In common PLL designs, changes to the dividers take effect
 * almost immediately, while changes to the multipliers (implemented
 * as dividers in the feedback loop) take a few cycles to work into
 * the feedback loop for the PLL to stabilize.
 *
 * Sometimes when the PLL clock rate is changed, the decrease in the
 * divider is too much for the decrease in the multiplier to catch up.
 * The PLL clock rate will spike, and in some cases, might lock up
 * completely.
 *
 * This notifier callback will gate and then ungate the clock,
 * effectively resetting it, so it proceeds to work. Care must be
 * taken to reparent consumers to other temporary clocks during the
 * rate change, and that this notifier callback must be the first
 * to be registered.
 */
static int ccu_pll_notifier_cb(struct notifier_block *nb,
			       unsigned long event, void *data)
{
	struct ccu_pll_nb *pll = to_ccu_pll_nb(nb);
	int ret = 0;

	if (event != POST_RATE_CHANGE)
		goto out;

	ccu_gate_helper_disable(pll->common, pll->enable);

	ret = ccu_gate_helper_enable(pll->common, pll->enable);
	if (ret)
		goto out;

	ccu_helper_wait_for_lock(pll->common, pll->lock);

out:
	return notifier_from_errno(ret);
}

int ccu_pll_notifier_register(struct ccu_pll_nb *pll_nb)
{
	pll_nb->clk_nb.notifier_call = ccu_pll_notifier_cb;

	return clk_notifier_register(pll_nb->common->hw.clk,
				     &pll_nb->clk_nb);
}
EXPORT_SYMBOL_NS_GPL(ccu_pll_notifier_register, "SUNXI_CCU");

static int sunxi_ccu_probe(struct sunxi_ccu *ccu, struct device *dev,
			   struct device_node *node, void __iomem *reg,
			   const struct sunxi_ccu_desc *desc)
{
	struct ccu_reset *reset;
	int i, j, ret;

	ccu->desc = desc;

	spin_lock_init(&ccu->lock);

	for (i = 0; i < desc->num_ccu_clks; i++) {
		struct ccu_common *cclk = desc->ccu_clks[i];

		if (!cclk)
			continue;

		cclk->base = reg;
		cclk->lock = &ccu->lock;
	}

	for (j = 0; j < desc->hw_clks->num ; j++) {
		struct clk_hw *hw = desc->hw_clks->hws[j];
		const char *name;

		if (!hw)
			continue;

		name = hw->init->name;
		if (dev)
			ret = clk_hw_register(dev, hw);
		else
			ret = of_clk_hw_register(node, hw);
		if (ret) {
			pr_err("Couldn't register clock %d - %s\n", j, name);
			goto err_clk_unreg;
		}
	}

	for (i = 0; i < desc->num_ccu_clks; i++) {
		struct ccu_common *cclk = desc->ccu_clks[i];

		if (!cclk)
			continue;

		if (cclk->max_rate)
			clk_hw_set_rate_range(&cclk->hw, cclk->min_rate,
					      cclk->max_rate);
		else
			WARN(cclk->min_rate,
			     "No max_rate, ignoring min_rate of clock %d - %s\n",
			     i, clk_hw_get_name(&cclk->hw));
	}

	ret = of_clk_add_hw_provider(node, of_clk_hw_onecell_get,
				     desc->hw_clks);
	if (ret)
		goto err_clk_unreg;

	reset = &ccu->reset;
	reset->rcdev.of_node = node;
	reset->rcdev.ops = &ccu_reset_ops;
	reset->rcdev.owner = dev ? dev->driver->owner : THIS_MODULE;
	reset->rcdev.nr_resets = desc->num_resets;
	reset->base = reg;
	reset->lock = &ccu->lock;
	reset->reset_map = desc->resets;

	ret = reset_controller_register(&reset->rcdev);
	if (ret)
		goto err_del_provider;

	return 0;

err_del_provider:
	of_clk_del_provider(node);
err_clk_unreg:
	while (--j >= 0) {
		struct clk_hw *hw = desc->hw_clks->hws[j];

		if (!hw)
			continue;
		clk_hw_unregister(hw);
	}
	return ret;
}

static void devm_sunxi_ccu_release(struct device *dev, void *res)
{
	struct sunxi_ccu *ccu = res;
	const struct sunxi_ccu_desc *desc = ccu->desc;
	int i;

	reset_controller_unregister(&ccu->reset.rcdev);
	of_clk_del_provider(dev->of_node);

	for (i = 0; i < desc->hw_clks->num; i++) {
		struct clk_hw *hw = desc->hw_clks->hws[i];

		if (!hw)
			continue;
		clk_hw_unregister(hw);
	}
}

int devm_sunxi_ccu_probe(struct device *dev, void __iomem *reg,
			 const struct sunxi_ccu_desc *desc)
{
	struct sunxi_ccu *ccu;
	int ret;

	ccu = devres_alloc(devm_sunxi_ccu_release, sizeof(*ccu), GFP_KERNEL);
	if (!ccu)
		return -ENOMEM;

	ret = sunxi_ccu_probe(ccu, dev, dev->of_node, reg, desc);
	if (ret) {
		devres_free(ccu);
		return ret;
	}

	devres_add(dev, ccu);

	return 0;
}
EXPORT_SYMBOL_NS_GPL(devm_sunxi_ccu_probe, "SUNXI_CCU");

void of_sunxi_ccu_probe(struct device_node *node, void __iomem *reg,
			const struct sunxi_ccu_desc *desc)
{
	struct sunxi_ccu *ccu;
	int ret;

	ccu = kzalloc_obj(*ccu);
	if (!ccu)
		return;

	ret = sunxi_ccu_probe(ccu, NULL, node, reg, desc);
	if (ret) {
		pr_err("%pOF: probing clocks failed: %d\n", node, ret);
		kfree(ccu);
	}
}

MODULE_DESCRIPTION("Common clock support for Allwinner SoCs");
MODULE_LICENSE("GPL");

/* ===== ported from BSP ccu_common.c (PM_SLEEP reg cache + register helpers) ===== */
#ifdef CONFIG_PM_SLEEP

static LIST_HEAD(ccu_reg_cache_list);
static DEFINE_MUTEX(ccu_reg_cache_lock);

struct sunxi_clock_reg_cache {
	struct list_head node;
	void __iomem *reg_base;
	struct ccu_reg_dump *rdump;
	unsigned int rd_num;
	const struct ccu_reg_dump *rsuspend;
	unsigned int rsuspend_num;
};

static void ccu_save(void __iomem *base, struct ccu_reg_dump *rd,
		    unsigned int num_regs)
{
	for (; num_regs > 0; --num_regs, ++rd)
		rd->value = readl(base + rd->offset);
}

static void ccu_restore_with_value(void __iomem *base,
			const struct ccu_reg_dump *rd,
			unsigned int num_regs)
{
	unsigned int reg, restore_reg;

	for (; num_regs > 0; --num_regs, ++rd) {
		reg = readl(base + rd->offset);
		restore_reg = rd->value | reg;
		writel(restore_reg, base + rd->offset);
	}
}

static void ccu_restore(void __iomem *base,
			const struct ccu_reg_dump *rd,
			unsigned int num_regs)
{
	for (; num_regs > 0; --num_regs, ++rd)
		writel(rd->value, base + rd->offset);
}

static struct ccu_reg_dump *ccu_alloc_reg_dump(struct ccu_common **rdump,
					       unsigned long nr_rdump)
{
	struct ccu_reg_dump *rd;
	unsigned int i;

	rd = kcalloc(nr_rdump, sizeof(*rd), GFP_KERNEL);
	if (!rd)
		return NULL;

	for (i = 0; i < nr_rdump; ++i) {
		struct ccu_common *ccu_clks = rdump[i];

		rd[i].offset = ccu_clks->reg;
	}

	return rd;
}

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(6, 19, 0))
static int ccu_suspend(void *unused)
#else
static int ccu_suspend(void)
#endif
{
	struct sunxi_clock_reg_cache *reg_cache;

	list_for_each_entry(reg_cache, &ccu_reg_cache_list, node)
		ccu_save(reg_cache->reg_base, reg_cache->rdump,
			 reg_cache->rd_num);
	return 0;
}

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(6, 19, 0))
static void ccu_resume(void *unused)
#else
static void ccu_resume(void)
#endif
{
	struct sunxi_clock_reg_cache *reg_cache;

	list_for_each_entry(reg_cache, &ccu_reg_cache_list, node) {
		ccu_restore(reg_cache->reg_base, reg_cache->rdump,
				reg_cache->rd_num);
		ccu_restore_with_value(reg_cache->reg_base, reg_cache->rsuspend,
			reg_cache->rsuspend_num);
	}
}

#if (LINUX_VERSION_CODE >= KERNEL_VERSION(6, 19, 0))
static struct syscore sunxi_clk_syscore = {
	.ops = &(struct syscore_ops){
		.suspend = ccu_suspend,
		.resume = ccu_resume,
	},
	.data = NULL,
};
#else
static struct syscore_ops sunxi_clk_syscore_ops = {
	.suspend = ccu_suspend,
	.resume = ccu_resume,
};
#endif
#endif

void sunxi_ccu_sleep_init(void __iomem *reg_base,
			  struct ccu_common **rdump,
			  unsigned long nr_rdump,
			  const struct ccu_reg_dump *rsuspend,
			  unsigned long nr_rsuspend)
{
#ifdef CONFIG_PM_SLEEP
	struct sunxi_clock_reg_cache *reg_cache;

	reg_cache = kzalloc(sizeof(*reg_cache),
			GFP_KERNEL);
	if (!reg_cache)
		panic("could not allocate register reg_cache.\n");
	reg_cache->rdump = ccu_alloc_reg_dump(rdump, nr_rdump);

	if (!reg_cache->rdump)
		panic("could not allocate register dump storage.\n");

	mutex_lock(&ccu_reg_cache_lock);
	if (list_empty(&ccu_reg_cache_list))
#if (LINUX_VERSION_CODE >= KERNEL_VERSION(6, 19, 0))
		register_syscore(&sunxi_clk_syscore);
#else
		register_syscore_ops(&sunxi_clk_syscore_ops);
#endif

	reg_cache->reg_base = reg_base;
	reg_cache->rd_num = nr_rdump;
	reg_cache->rsuspend = rsuspend;
	reg_cache->rsuspend_num = nr_rsuspend;
	list_add_tail(&reg_cache->node, &ccu_reg_cache_list);
	mutex_unlock(&ccu_reg_cache_lock);
#endif
}
EXPORT_SYMBOL_GPL(sunxi_ccu_sleep_init);

void set_reg(char __iomem *addr, u32 val, u8 bw, u8 bs)
{
	u32 mask = (1UL << bw) - 1UL;
	u32 tmp = 0;

	tmp = readl(addr);
	tmp &= ~(mask << bs);

	writel(tmp | ((val & mask) << bs), addr);
}
EXPORT_SYMBOL_GPL(set_reg);

void set_reg_key(char __iomem *addr,
		 u32 key, u8 kbw, u8 kbs,
		 u32 val, u8 bw, u8 bs)
{
	u32 mask = (1UL << bw) - 1UL;
	u32 kmask = (1UL << kbw) - 1UL;
	u32 tmp = 0;

	tmp = readl(addr);
	tmp &= ~(mask << bs);

	writel(tmp | ((val & mask) << bs) | ((key & kmask) << kbs), addr);
}
EXPORT_SYMBOL_GPL(set_reg_key);

int ccu_is_sdm_enabled(struct clk *clk)
{
	struct clk_hw *cur_hw;
	struct clk_hw *parent_hw;
	cur_hw = __clk_get_hw(clk);

	while (cur_hw && strcmp((clk_hw_get_name(cur_hw)), "dcxo24M")) {
		parent_hw = cur_hw;
		cur_hw = clk_hw_get_parent(cur_hw);
	}

	if (!parent_hw) {
		sunxi_err(NULL, "Do not pass the argument 'dcxo' to the function\n");
		return -1;
	}
	sunxi_err(NULL, "please make sure the top clk %s is nm type! %s:%d\n", clk_hw_get_name(parent_hw), __func__, __LINE__);

	return ccu_nm_is_sdm_enabled(parent_hw);
}
EXPORT_SYMBOL_GPL(ccu_is_sdm_enabled);
