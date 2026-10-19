// SPDX-License-Identifier: GPL-2.0-or-later
/*
 * Copyright (C) 2017 Chen-Yu Tsai <wens@csie.org>
 */

#include <linux/clk-provider.h>
#include <linux/io.h>
#include <linux/spinlock.h>
#include <linux/sunxi-log.h>
#include <linux/string.h>
#include <linux/slab.h>

#include "ccu_sdm.h"

bool ccu_sdm_helper_is_enabled(struct ccu_common *common,
			       struct ccu_sdm_internal *sdm)
{
	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return false;

	if (sdm->enable && !(readl(common->base + common->reg) & sdm->enable))
		return false;

	return !!(readl(common->base + sdm->tuning_reg) & sdm->tuning_enable);
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_is_enabled, "SUNXI_CCU");

void ccu_sdm_helper_enable(struct ccu_common *common,
			   struct ccu_sdm_internal *sdm,
			   unsigned long rate)
{
	unsigned long flags;
	unsigned int i;
	u32 reg;

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return;

	/* Set the pattern */
	for (i = 0; i < sdm->table_size; i++)
		if (sdm->table[i].rate == rate)
			writel(sdm->table[i].pattern,
			       common->base + sdm->tuning_reg);

	/* Make sure SDM is enabled */
	spin_lock_irqsave(common->lock, flags);
	reg = readl(common->base + sdm->tuning_reg);
	writel(reg | sdm->tuning_enable, common->base + sdm->tuning_reg);
	spin_unlock_irqrestore(common->lock, flags);

	spin_lock_irqsave(common->lock, flags);
	reg = readl(common->base + common->reg);
	writel(reg | sdm->enable, common->base + common->reg);
	spin_unlock_irqrestore(common->lock, flags);
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_enable, "SUNXI_CCU");

void ccu_sdm_helper_disable(struct ccu_common *common,
			    struct ccu_sdm_internal *sdm)
{
	unsigned long flags;
	u32 reg;

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return;

	spin_lock_irqsave(common->lock, flags);
	reg = readl(common->base + common->reg);
	writel(reg & ~sdm->enable, common->base + common->reg);
	spin_unlock_irqrestore(common->lock, flags);

	spin_lock_irqsave(common->lock, flags);
	reg = readl(common->base + sdm->tuning_reg);
	writel(reg & ~sdm->tuning_enable, common->base + sdm->tuning_reg);
	spin_unlock_irqrestore(common->lock, flags);
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_disable, "SUNXI_CCU");

/*
 * Sigma delta modulation provides a way to do fractional-N frequency
 * synthesis, in essence allowing the PLL to output any frequency
 * within its operational range. On earlier SoCs such as the A10/A20,
 * some PLLs support this. On later SoCs, all PLLs support this.
 *
 * The datasheets do not explain what the "wave top" and "wave bottom"
 * parameters mean or do, nor how to calculate the effective output
 * frequency. The only examples (and real world usage) are for the audio
 * PLL to generate 24.576 and 22.5792 MHz clock rates used by the audio
 * peripherals. The author lacks the underlying domain knowledge to
 * pursue this.
 *
 * The goal and function of the following code is to support the two
 * clock rates used by the audio subsystem, allowing for proper audio
 * playback and capture without any pitch or speed changes.
 */
bool ccu_sdm_helper_has_rate(struct ccu_common *common,
			     struct ccu_sdm_internal *sdm,
			     unsigned long rate)
{
	unsigned int i;

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return false;

	for (i = 0; i < sdm->table_size; i++)
		if (sdm->table[i].rate == rate)
			return true;

	return false;
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_has_rate, "SUNXI_CCU");

unsigned long ccu_sdm_helper_read_rate(struct ccu_common *common,
				       struct ccu_sdm_internal *sdm,
				       u32 m, u32 n)
{
	unsigned int i;
	u32 reg;

	pr_debug("%s: Read sigma-delta modulation setting\n",
		 clk_hw_get_name(&common->hw));

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return 0;

	pr_debug("%s: clock is sigma-delta modulated\n",
		 clk_hw_get_name(&common->hw));

	reg = readl(common->base + sdm->tuning_reg);

	pr_debug("%s: pattern reg is 0x%x",
		 clk_hw_get_name(&common->hw), reg);

	for (i = 0; i < sdm->table_size; i++)
		if (sdm->table[i].pattern == reg &&
		    sdm->table[i].m == m && sdm->table[i].n == n)
			return sdm->table[i].rate;

	/* We can't calculate the effective clock rate, so just fail. */
	return 0;
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_read_rate, "SUNXI_CCU");

int ccu_sdm_helper_get_factors(struct ccu_common *common,
			       struct ccu_sdm_internal *sdm,
			       unsigned long rate,
			       unsigned long *m, unsigned long *n)
{
	unsigned int i;

	if (!(common->features & CCU_FEATURE_SIGMA_DELTA_MOD))
		return -EINVAL;

	for (i = 0; i < sdm->table_size; i++)
		if (sdm->table[i].rate == rate) {
			*m = sdm->table[i].m;
			*n = sdm->table[i].n;
			return 0;
		}

	/* nothing found */
	return -EINVAL;
}
EXPORT_SYMBOL_NS_GPL(ccu_sdm_helper_get_factors, "SUNXI_CCU");

/* ===== ported from BSP ccu_sdm.c (SDM info parse) ===== */
#define SUNXI_CCU_SDM_VERSION        "1.0.1"

struct clk_sdm_info *sdm_info;
static int len;

int sunxi_parse_sdm_info(struct device_node *node)
{
	int i = 0;
	struct device_node *child_node = NULL;
	struct device_node *sdm_node = NULL;

	sdm_node = of_get_child_by_name(node, "sdm_info");
	if (!sdm_node)
		return -ENODEV;

	len = of_get_child_count(sdm_node);
	if (!len)
		return -EINVAL;

	if (sdm_info) {
		sunxi_err(NULL, "sdm_info has been allocated!");
		return -EBUSY;
	}
	sdm_info = kcalloc(len, sizeof(*sdm_info), GFP_KERNEL);
	if (!sdm_info) {
		len = 0;
		return -ENOMEM;
	}

	for_each_child_of_node(sdm_node, child_node) {
		if (of_property_read_u32(child_node, "sdm-enable", &sdm_info[i].sdm_enable)) {
			sunxi_err(NULL, "%s fail to parse sdm-enable, please check dts config!\n", child_node->name);
			continue;
		}
		if (sdm_info[i].sdm_enable != DTS_SDM_ON)
			continue;
		if (sdm_info[i].sdm_enable != DTS_SDM_OFF &&
				sdm_info[i].sdm_enable != DTS_SDM_ON) {
				sunxi_err(NULL, "clk: %s enable: %d\n",
					child_node->name, sdm_info[i].sdm_enable);
			continue;
		}

		if (of_property_read_u32(child_node, "sdm-factor", &sdm_info[i].sdm_factor)) {
			sunxi_err(NULL, "%s fail to parse sdm-factor, please check dts config!\n", child_node->name);
			continue;
		}
		/* the unit of factor is 1/1000 */
		if (sdm_info[i].sdm_factor > 99) {
			sunxi_err(NULL, "clk: %s invaild factor: %d, should be within 99\n",
					child_node->name, sdm_info[i].sdm_factor);
			continue;
		}

		if (of_property_read_u32(child_node, "freq-mode", &sdm_info[i].freq_mode)) {
			sdm_info[i].freq_mode = TR_2;
		} else {
			if (sdm_info[i].freq_mode < 0 || sdm_info[i].freq_mode > 3) {
				sunxi_err(NULL, "clk: %s invaild freq_mod: %d, should be within 0~3, use default TR_2\n",
						child_node->name, sdm_info[i].freq_mode);
				sdm_info[i].freq_mode = TR_2;
			}
		}

		if (of_property_read_u32(child_node, "sdm-freq", &sdm_info[i].sdm_freq)) {
			sdm_info[i].sdm_freq = FREQ_31_5;
		} else {
			if (sdm_info[i].sdm_freq < 0 || sdm_info[i].sdm_freq > 3) {
				sunxi_err(NULL, "clk: %s invaild sdm_freq : %d, should be within 0~3, use default FREQ_31_5\n", child_node->name, sdm_info[i].sdm_freq);
				sdm_info[i].sdm_freq = FREQ_31_5;
			}
		}

		if (of_property_read_u32(child_node, "sdm-direction", &sdm_info[i].sdm_direction)) {
			sdm_info[i].sdm_direction = SDM_DIR_NONE;
		} else {
			if (sdm_info[i].sdm_direction < 0 || sdm_info[i].sdm_direction > 1) {
				sunxi_err(NULL, "clk: %s invaild sdm_direction : %d, should be within 0~1\n", child_node->name, sdm_info[i].sdm_direction);
				sdm_info[i].sdm_direction = SDM_DIR_NONE;
			}
		}

		sdm_info[i].clk_name = child_node->name;

		sunxi_info(NULL, "%s: The %s has enabled Spread Spectrum in DTS\n", __func__, child_node->name);
		sunxi_info(NULL, "%s: sdm-enable: %d sdm-factor: %d freq-mode: %d sdm-freq: %d sdm-direction: %d\n", __func__, sdm_info[i].sdm_enable, sdm_info[i].sdm_factor, sdm_info[i].freq_mode, sdm_info[i].sdm_freq, sdm_info[i].sdm_direction);
		i++;
	}
	len = i;
	return 0;
}
EXPORT_SYMBOL_GPL(sunxi_parse_sdm_info);

struct clk_sdm_info *sunxi_clk_get_sdm_info(const char *clk_name)
{
	int i;
	struct clk_sdm_info *sdm = NULL;

	if (!sdm_info)
		return NULL;

	for (i = 0; i < len; i++) {
		if (!strcmp(clk_name, sdm_info[i].clk_name)) {
			sdm = &sdm_info[i];
			break;
		}
	}
	return sdm;
}
EXPORT_SYMBOL_GPL(sunxi_clk_get_sdm_info);
