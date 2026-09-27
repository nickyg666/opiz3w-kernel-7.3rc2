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

KSYMTAB_FUNC(bgx_get_map, "");
SYMBOL_FLAGS(bgx_get_map, 0x00);
KSYMTAB_FUNC(bgx_get_lmac_count, "");
SYMBOL_FLAGS(bgx_get_lmac_count, 0x00);
KSYMTAB_FUNC(bgx_get_lmac_link_state, "");
SYMBOL_FLAGS(bgx_get_lmac_link_state, 0x00);
KSYMTAB_FUNC(bgx_get_lmac_mac, "");
SYMBOL_FLAGS(bgx_get_lmac_mac, 0x00);
KSYMTAB_FUNC(bgx_set_lmac_mac, "");
SYMBOL_FLAGS(bgx_set_lmac_mac, 0x00);
KSYMTAB_FUNC(bgx_set_dmac_cam_filter, "");
SYMBOL_FLAGS(bgx_set_dmac_cam_filter, 0x00);
KSYMTAB_FUNC(bgx_set_xcast_mode, "");
SYMBOL_FLAGS(bgx_set_xcast_mode, 0x00);
KSYMTAB_FUNC(bgx_reset_xcast_mode, "");
SYMBOL_FLAGS(bgx_reset_xcast_mode, 0x00);
KSYMTAB_FUNC(bgx_lmac_rx_tx_enable, "");
SYMBOL_FLAGS(bgx_lmac_rx_tx_enable, 0x00);
KSYMTAB_FUNC(bgx_config_timestamping, "");
SYMBOL_FLAGS(bgx_config_timestamping, 0x00);
KSYMTAB_FUNC(bgx_lmac_get_pfc, "");
SYMBOL_FLAGS(bgx_lmac_get_pfc, 0x00);
KSYMTAB_FUNC(bgx_lmac_set_pfc, "");
SYMBOL_FLAGS(bgx_lmac_set_pfc, 0x00);
KSYMTAB_FUNC(bgx_get_rx_stats, "");
SYMBOL_FLAGS(bgx_get_rx_stats, 0x00);
KSYMTAB_FUNC(bgx_get_tx_stats, "");
SYMBOL_FLAGS(bgx_get_tx_stats, 0x00);
KSYMTAB_FUNC(bgx_lmac_internal_loopback, "");
SYMBOL_FLAGS(bgx_lmac_internal_loopback, 0x00);

MODULE_INFO(depends, "thunder_xcv");

MODULE_ALIAS("pci:v0000177Dd0000A026sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000177Dd0000A054sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "5E57CB5714681824D2D5327");
