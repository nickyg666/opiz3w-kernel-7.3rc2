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

KSYMTAB_FUNC(usb_serial_claim_interface, "");
SYMBOL_FLAGS(usb_serial_claim_interface, 0x01);
KSYMTAB_FUNC(usb_serial_port_softint, "");
SYMBOL_FLAGS(usb_serial_port_softint, 0x01);
KSYMTAB_FUNC(usb_serial_suspend, "");
SYMBOL_FLAGS(usb_serial_suspend, 0x00);
KSYMTAB_FUNC(usb_serial_resume, "");
SYMBOL_FLAGS(usb_serial_resume, 0x00);
KSYMTAB_FUNC(__usb_serial_register_drivers, "");
SYMBOL_FLAGS(__usb_serial_register_drivers, 0x01);
KSYMTAB_FUNC(usb_serial_deregister_drivers, "");
SYMBOL_FLAGS(usb_serial_deregister_drivers, 0x01);
KSYMTAB_FUNC(usb_serial_generic_open, "");
SYMBOL_FLAGS(usb_serial_generic_open, 0x01);
KSYMTAB_FUNC(usb_serial_generic_close, "");
SYMBOL_FLAGS(usb_serial_generic_close, 0x01);
KSYMTAB_FUNC(usb_serial_generic_write_start, "");
SYMBOL_FLAGS(usb_serial_generic_write_start, 0x01);
KSYMTAB_FUNC(usb_serial_generic_write, "");
SYMBOL_FLAGS(usb_serial_generic_write, 0x01);
KSYMTAB_FUNC(usb_serial_generic_chars_in_buffer, "");
SYMBOL_FLAGS(usb_serial_generic_chars_in_buffer, 0x01);
KSYMTAB_FUNC(usb_serial_generic_wait_until_sent, "");
SYMBOL_FLAGS(usb_serial_generic_wait_until_sent, 0x01);
KSYMTAB_FUNC(usb_serial_generic_submit_read_urbs, "");
SYMBOL_FLAGS(usb_serial_generic_submit_read_urbs, 0x01);
KSYMTAB_FUNC(usb_serial_generic_process_read_urb, "");
SYMBOL_FLAGS(usb_serial_generic_process_read_urb, 0x01);
KSYMTAB_FUNC(usb_serial_generic_read_bulk_callback, "");
SYMBOL_FLAGS(usb_serial_generic_read_bulk_callback, 0x01);
KSYMTAB_FUNC(usb_serial_generic_write_bulk_callback, "");
SYMBOL_FLAGS(usb_serial_generic_write_bulk_callback, 0x01);
KSYMTAB_FUNC(usb_serial_generic_throttle, "");
SYMBOL_FLAGS(usb_serial_generic_throttle, 0x01);
KSYMTAB_FUNC(usb_serial_generic_unthrottle, "");
SYMBOL_FLAGS(usb_serial_generic_unthrottle, 0x01);
KSYMTAB_FUNC(usb_serial_generic_tiocmiwait, "");
SYMBOL_FLAGS(usb_serial_generic_tiocmiwait, 0x01);
KSYMTAB_FUNC(usb_serial_generic_get_icount, "");
SYMBOL_FLAGS(usb_serial_generic_get_icount, 0x01);
KSYMTAB_FUNC(usb_serial_handle_dcd_change, "");
SYMBOL_FLAGS(usb_serial_handle_dcd_change, 0x01);
KSYMTAB_FUNC(usb_serial_generic_resume, "");
SYMBOL_FLAGS(usb_serial_generic_resume, 0x01);

MODULE_INFO(depends, "");

