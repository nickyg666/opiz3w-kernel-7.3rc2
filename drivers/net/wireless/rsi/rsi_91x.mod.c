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

KSYMTAB_DATA(rsi_zone_enabled, "");
SYMBOL_FLAGS(rsi_zone_enabled, 0x01);
KSYMTAB_FUNC(rsi_dbg, "");
SYMBOL_FLAGS(rsi_dbg, 0x01);
KSYMTAB_FUNC(rsi_read_pkt, "");
SYMBOL_FLAGS(rsi_read_pkt, 0x01);
KSYMTAB_FUNC(rsi_91x_init, "");
SYMBOL_FLAGS(rsi_91x_init, 0x01);
KSYMTAB_FUNC(rsi_91x_deinit, "");
SYMBOL_FLAGS(rsi_91x_deinit, 0x01);
KSYMTAB_FUNC(rsi_mac80211_detach, "");
SYMBOL_FLAGS(rsi_mac80211_detach, 0x01);
KSYMTAB_FUNC(rsi_mac80211_rfkill_exit, "");
SYMBOL_FLAGS(rsi_mac80211_rfkill_exit, 0x01);
KSYMTAB_FUNC(rsi_config_wowlan, "");
SYMBOL_FLAGS(rsi_config_wowlan, 0x00);
KSYMTAB_FUNC(rsi_hal_device_init, "");
SYMBOL_FLAGS(rsi_hal_device_init, 0x01);
KSYMTAB_FUNC(rsi_init_dbgfs, "");
SYMBOL_FLAGS(rsi_init_dbgfs, 0x01);
KSYMTAB_FUNC(rsi_remove_dbgfs, "");
SYMBOL_FLAGS(rsi_remove_dbgfs, 0x01);

MODULE_INFO(depends, "btrsi");


MODULE_INFO(srcversion, "DE16C878D69A2639ABA7F10");
