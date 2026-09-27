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

KSYMTAB_FUNC(btrtl_set_driver_name, "");
SYMBOL_FLAGS(btrtl_set_driver_name, 0x01);
KSYMTAB_FUNC(btrtl_free, "");
SYMBOL_FLAGS(btrtl_free, 0x01);
KSYMTAB_FUNC(btrtl_initialize, "");
SYMBOL_FLAGS(btrtl_initialize, 0x01);
KSYMTAB_FUNC(btrtl_download_firmware, "");
SYMBOL_FLAGS(btrtl_download_firmware, 0x01);
KSYMTAB_FUNC(btrtl_set_quirks, "");
SYMBOL_FLAGS(btrtl_set_quirks, 0x01);
KSYMTAB_FUNC(btrtl_setup_realtek, "");
SYMBOL_FLAGS(btrtl_setup_realtek, 0x01);
KSYMTAB_FUNC(btrtl_shutdown_realtek, "");
SYMBOL_FLAGS(btrtl_shutdown_realtek, 0x01);
KSYMTAB_FUNC(btrtl_get_uart_settings, "");
SYMBOL_FLAGS(btrtl_get_uart_settings, 0x01);

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "FBF3D1C74CB2A9014000EF8");
