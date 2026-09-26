/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Shim providing sunxi_mmc_rescan_card() for the mainline sunxi-mmc driver.
 * The vendor aic8800 SDIO wifi stack calls this to re-enumerate the SDIO card
 * after powering the wifi chip. The vendor implementation iterated a private
 * host array; here we find the mmc_host via the "sdcN" device_type node.
 */
#include <linux/mmc/host.h>
#include <linux/mmc/card.h>
#include <linux/mmc/sdio.h>
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
	/*
	 * 2026-09-26: guard against a rescan against a host that has an ALREADY
	 * ENUMERATED **and bound** SDIO device. aic8800's power-on path
	 * (aicbsp_platform_power_on) calls this after the chip has already been
	 * matched and bound, which ran the SDIO remove path on a live device:
	 * the first IPC command never got a reply, cmd_mgr latched
	 * RWNX_CMD_MGR_STATE_CRASHED, and every later command returned -EPIPE.
	 * Symptom: "bus down", endless "cmd queue crashed", zero BSS on scan.
	 *
	 * The check must be "is a driver already bound to this card", NOT merely
	 * "is a card present". At boot the SDIO card is enumerated long before
	 * the aic8800 modules load (mmc0: new UHS-I SDR104 SDIO card), so a
	 * host->card test alone would also suppress the rescan that the
	 * power-off -> power-on cycle legitimately needs.
	 *
	 */
	if (host->card) {
		struct mmc_card *card = host->card;
		int probed = atomic_read(&card->sdio_funcs_probed);

		/*
		 * sdio_funcs_probed is incremented in mmc/core/sdio_bus.c when a
		 * driver binds to an SDIO function and decremented on unbind, so it
		 * counts exactly the live bound devices - which is the condition
		 * that makes a rescan destructive. Checking it needs no access to
		 * the private struct sdio_func.
		 */
		if (probed > 0) {
			pr_info("%s: %s has %d SDIO func(s) bound, skipping rescan\n",
				__func__, type_name, probed);
			return;
		}
		pr_info("%s: %s card present, no driver bound, rescanning\n",
			__func__, type_name);
	}
	mmc_detect_change(host, 0);
}
EXPORT_SYMBOL_GPL(sunxi_mmc_rescan_card);
