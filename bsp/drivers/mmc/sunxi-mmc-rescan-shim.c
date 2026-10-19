/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Shim providing sunxi_mmc_rescan_card() for the mainline sunxi-mmc driver.
 * The vendor aic8800 SDIO wifi stack calls this to re-enumerate the SDIO card
 * after powering the wifi chip. The vendor implementation iterated a private
 * host array; here we find the mmc_host via the "sdcN" device_type node.
 */
#include <linux/mmc/host.h>
#include <linux/platform_device.h>
#include <linux/of.h>
#include <linux/of_platform.h>
#include <linux/export.h>

void sunxi_mmc_rescan_card(unsigned id)
{
	struct device_node *np;
	struct platform_device *pdev;
	struct mmc_host *host;
	char type_name[20];

	sprintf(type_name, "sdc%d", id);
	np = of_find_node_by_type(NULL, type_name);
	if (!np) {
		pr_err("%s: can't find node %s\n", __func__, type_name);
		return;
	}
	pdev = of_find_device_by_node(np);
	of_node_put(np);
	if (!pdev) {
		pr_err("%s: no platform device for %s\n", __func__, type_name);
		return;
	}
	host = platform_get_drvdata(pdev);
	put_device(&pdev->dev);
	if (!host) {
		pr_err("%s: no mmc_host drvdata for %s\n", __func__, type_name);
		return;
	}
	mmc_detect_change(host, 0);
}
EXPORT_SYMBOL_GPL(sunxi_mmc_rescan_card);
