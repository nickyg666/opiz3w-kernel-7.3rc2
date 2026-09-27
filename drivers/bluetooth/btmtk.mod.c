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

KSYMTAB_FUNC(btmtk_fw_get_filename, "");
SYMBOL_FLAGS(btmtk_fw_get_filename, 0x01);
KSYMTAB_FUNC(btmtk_setup_firmware_79xx, "");
SYMBOL_FLAGS(btmtk_setup_firmware_79xx, 0x01);
KSYMTAB_FUNC(btmtk_setup_firmware, "");
SYMBOL_FLAGS(btmtk_setup_firmware, 0x01);
KSYMTAB_FUNC(btmtk_set_bdaddr, "");
SYMBOL_FLAGS(btmtk_set_bdaddr, 0x01);
KSYMTAB_FUNC(btmtk_reset_sync, "");
SYMBOL_FLAGS(btmtk_reset_sync, 0x01);
KSYMTAB_FUNC(btmtk_register_coredump, "");
SYMBOL_FLAGS(btmtk_register_coredump, 0x01);
KSYMTAB_FUNC(btmtk_process_coredump, "");
SYMBOL_FLAGS(btmtk_process_coredump, 0x01);
KSYMTAB_FUNC(btmtk_usb_subsys_reset, "");
SYMBOL_FLAGS(btmtk_usb_subsys_reset, 0x01);
KSYMTAB_FUNC(btmtk_usb_recv_acl, "");
SYMBOL_FLAGS(btmtk_usb_recv_acl, 0x01);
KSYMTAB_FUNC(alloc_mtk_intr_urb, "");
SYMBOL_FLAGS(alloc_mtk_intr_urb, 0x01);
KSYMTAB_FUNC(btmtk_usb_resume, "");
SYMBOL_FLAGS(btmtk_usb_resume, 0x01);
KSYMTAB_FUNC(btmtk_usb_suspend, "");
SYMBOL_FLAGS(btmtk_usb_suspend, 0x01);
KSYMTAB_FUNC(btmtk_usb_setup, "");
SYMBOL_FLAGS(btmtk_usb_setup, 0x01);
KSYMTAB_FUNC(btmtk_usb_shutdown, "");
SYMBOL_FLAGS(btmtk_usb_shutdown, 0x01);
KSYMTAB_FUNC(btmtk_recv_event, "");
SYMBOL_FLAGS(btmtk_recv_event, 0x01);

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "FD6B6A6E1BBA0728D7C99E5");
