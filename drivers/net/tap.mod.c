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

KSYMTAB_FUNC(tap_del_queues, "");
SYMBOL_FLAGS(tap_del_queues, 0x01);
KSYMTAB_FUNC(tap_handle_frame, "");
SYMBOL_FLAGS(tap_handle_frame, 0x01);
KSYMTAB_FUNC(tap_get_minor, "");
SYMBOL_FLAGS(tap_get_minor, 0x01);
KSYMTAB_FUNC(tap_free_minor, "");
SYMBOL_FLAGS(tap_free_minor, 0x01);
KSYMTAB_FUNC(tap_get_socket, "");
SYMBOL_FLAGS(tap_get_socket, 0x01);
KSYMTAB_FUNC(tap_get_ptr_ring, "");
SYMBOL_FLAGS(tap_get_ptr_ring, 0x01);
KSYMTAB_FUNC(tap_queue_resize, "");
SYMBOL_FLAGS(tap_queue_resize, 0x01);
KSYMTAB_FUNC(tap_create_cdev, "");
SYMBOL_FLAGS(tap_create_cdev, 0x01);
KSYMTAB_FUNC(tap_destroy_cdev, "");
SYMBOL_FLAGS(tap_destroy_cdev, 0x01);

MODULE_INFO(depends, "");

