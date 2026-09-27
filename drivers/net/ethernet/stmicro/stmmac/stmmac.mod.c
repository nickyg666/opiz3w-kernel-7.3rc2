#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(stmmac_set_clk_tx_rate, "");
SYMBOL_FLAGS(stmmac_set_clk_tx_rate, 0x01);
KSYMTAB_FUNC(stmmac_axi_blen_to_mask, "");
SYMBOL_FLAGS(stmmac_axi_blen_to_mask, 0x01);
KSYMTAB_FUNC(stmmac_get_phy_intf_sel, "");
SYMBOL_FLAGS(stmmac_get_phy_intf_sel, 0x01);
KSYMTAB_FUNC(stmmac_plat_dat_alloc, "");
SYMBOL_FLAGS(stmmac_plat_dat_alloc, 0x01);
KSYMTAB_FUNC(stmmac_dvr_probe, "");
SYMBOL_FLAGS(stmmac_dvr_probe, 0x01);
KSYMTAB_FUNC(stmmac_dvr_remove, "");
SYMBOL_FLAGS(stmmac_dvr_remove, 0x01);
KSYMTAB_FUNC(stmmac_suspend, "");
SYMBOL_FLAGS(stmmac_suspend, 0x01);
KSYMTAB_FUNC(stmmac_resume, "");
SYMBOL_FLAGS(stmmac_resume, 0x01);
KSYMTAB_DATA(stmmac_simple_pm_ops, "");
SYMBOL_FLAGS(stmmac_simple_pm_ops, 0x01);
KSYMTAB_FUNC(stmmac_mdio_lock, "");
SYMBOL_FLAGS(stmmac_mdio_lock, 0x01);
KSYMTAB_FUNC(stmmac_mdio_unlock, "");
SYMBOL_FLAGS(stmmac_mdio_unlock, 0x01);
KSYMTAB_FUNC(stmmac_set_mac_addr, "");
SYMBOL_FLAGS(stmmac_set_mac_addr, 0x01);
KSYMTAB_FUNC(stmmac_get_mac_addr, "");
SYMBOL_FLAGS(stmmac_get_mac_addr, 0x01);
KSYMTAB_DATA(dwmac1000_dma_ops, "");
SYMBOL_FLAGS(dwmac1000_dma_ops, 0x01);

MODULE_INFO(depends, "pcs_xpcs,phylink");

