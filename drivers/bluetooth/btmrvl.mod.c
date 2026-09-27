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

KSYMTAB_FUNC(btmrvl_interrupt, "");
SYMBOL_FLAGS(btmrvl_interrupt, 0x01);
KSYMTAB_FUNC(btmrvl_check_evtpkt, "");
SYMBOL_FLAGS(btmrvl_check_evtpkt, 0x01);
KSYMTAB_FUNC(btmrvl_process_event, "");
SYMBOL_FLAGS(btmrvl_process_event, 0x01);
KSYMTAB_FUNC(btmrvl_send_module_cfg_cmd, "");
SYMBOL_FLAGS(btmrvl_send_module_cfg_cmd, 0x01);
KSYMTAB_FUNC(btmrvl_pscan_window_reporting, "");
SYMBOL_FLAGS(btmrvl_pscan_window_reporting, 0x01);
KSYMTAB_FUNC(btmrvl_send_hscfg_cmd, "");
SYMBOL_FLAGS(btmrvl_send_hscfg_cmd, 0x01);
KSYMTAB_FUNC(btmrvl_enable_ps, "");
SYMBOL_FLAGS(btmrvl_enable_ps, 0x01);
KSYMTAB_FUNC(btmrvl_enable_hs, "");
SYMBOL_FLAGS(btmrvl_enable_hs, 0x01);
KSYMTAB_FUNC(btmrvl_register_hdev, "");
SYMBOL_FLAGS(btmrvl_register_hdev, 0x01);
KSYMTAB_FUNC(btmrvl_add_card, "");
SYMBOL_FLAGS(btmrvl_add_card, 0x01);
KSYMTAB_FUNC(btmrvl_remove_card, "");
SYMBOL_FLAGS(btmrvl_remove_card, 0x01);

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5F5C6F23CB257A9C613CE01");
