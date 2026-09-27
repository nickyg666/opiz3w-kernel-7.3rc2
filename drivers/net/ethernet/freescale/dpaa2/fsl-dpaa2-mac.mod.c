#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(dpaa2_mac_start, "");
SYMBOL_FLAGS(dpaa2_mac_start, 0x01);
KSYMTAB_FUNC(dpaa2_mac_stop, "");
SYMBOL_FLAGS(dpaa2_mac_stop, 0x01);
KSYMTAB_FUNC(dpaa2_mac_connect, "");
SYMBOL_FLAGS(dpaa2_mac_connect, 0x01);
KSYMTAB_FUNC(dpaa2_mac_disconnect, "");
SYMBOL_FLAGS(dpaa2_mac_disconnect, 0x01);
KSYMTAB_FUNC(dpaa2_mac_open, "");
SYMBOL_FLAGS(dpaa2_mac_open, 0x01);
KSYMTAB_FUNC(dpaa2_mac_close, "");
SYMBOL_FLAGS(dpaa2_mac_close, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_rmon_stats, "");
SYMBOL_FLAGS(dpaa2_mac_get_rmon_stats, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_pause_stats, "");
SYMBOL_FLAGS(dpaa2_mac_get_pause_stats, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_ctrl_stats, "");
SYMBOL_FLAGS(dpaa2_mac_get_ctrl_stats, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_eth_mac_stats, "");
SYMBOL_FLAGS(dpaa2_mac_get_eth_mac_stats, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_sset_count, "");
SYMBOL_FLAGS(dpaa2_mac_get_sset_count, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_strings, "");
SYMBOL_FLAGS(dpaa2_mac_get_strings, 0x01);
KSYMTAB_FUNC(dpaa2_mac_get_ethtool_stats, "");
SYMBOL_FLAGS(dpaa2_mac_get_ethtool_stats, 0x01);

MODULE_INFO(depends, "pcs-lynx,phylink");

