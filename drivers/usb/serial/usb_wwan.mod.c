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

KSYMTAB_FUNC(usb_wwan_dtr_rts, "");
SYMBOL_FLAGS(usb_wwan_dtr_rts, 0x00);
KSYMTAB_FUNC(usb_wwan_tiocmget, "");
SYMBOL_FLAGS(usb_wwan_tiocmget, 0x00);
KSYMTAB_FUNC(usb_wwan_tiocmset, "");
SYMBOL_FLAGS(usb_wwan_tiocmset, 0x00);
KSYMTAB_FUNC(usb_wwan_write, "");
SYMBOL_FLAGS(usb_wwan_write, 0x00);
KSYMTAB_FUNC(usb_wwan_write_room, "");
SYMBOL_FLAGS(usb_wwan_write_room, 0x00);
KSYMTAB_FUNC(usb_wwan_chars_in_buffer, "");
SYMBOL_FLAGS(usb_wwan_chars_in_buffer, 0x00);
KSYMTAB_FUNC(usb_wwan_open, "");
SYMBOL_FLAGS(usb_wwan_open, 0x00);
KSYMTAB_FUNC(usb_wwan_close, "");
SYMBOL_FLAGS(usb_wwan_close, 0x00);
KSYMTAB_FUNC(usb_wwan_port_probe, "");
SYMBOL_FLAGS(usb_wwan_port_probe, 0x01);
KSYMTAB_FUNC(usb_wwan_port_remove, "");
SYMBOL_FLAGS(usb_wwan_port_remove, 0x00);
KSYMTAB_FUNC(usb_wwan_suspend, "");
SYMBOL_FLAGS(usb_wwan_suspend, 0x00);
KSYMTAB_FUNC(usb_wwan_resume, "");
SYMBOL_FLAGS(usb_wwan_resume, 0x00);

MODULE_INFO(depends, "usbserial");

