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

KSYMTAB_FUNC(vchiq_get_service_userdata, "");
SYMBOL_FLAGS(vchiq_get_service_userdata, 0x00);
KSYMTAB_FUNC(vchiq_msg_queue_push, "");
SYMBOL_FLAGS(vchiq_msg_queue_push, 0x00);
KSYMTAB_FUNC(vchiq_msg_hold, "");
SYMBOL_FLAGS(vchiq_msg_hold, 0x00);
KSYMTAB_FUNC(vchiq_close_service, "");
SYMBOL_FLAGS(vchiq_close_service, 0x00);
KSYMTAB_FUNC(vchiq_queue_kernel_message, "");
SYMBOL_FLAGS(vchiq_queue_kernel_message, 0x00);
KSYMTAB_FUNC(vchiq_release_message, "");
SYMBOL_FLAGS(vchiq_release_message, 0x00);
KSYMTAB_FUNC(vchiq_get_peer_version, "");
SYMBOL_FLAGS(vchiq_get_peer_version, 0x00);
KSYMTAB_FUNC(vchiq_add_connected_callback, "");
SYMBOL_FLAGS(vchiq_add_connected_callback, 0x00);
KSYMTAB_FUNC(vchiq_initialise, "");
SYMBOL_FLAGS(vchiq_initialise, 0x00);
KSYMTAB_FUNC(vchiq_shutdown, "");
SYMBOL_FLAGS(vchiq_shutdown, 0x00);
KSYMTAB_FUNC(vchiq_connect, "");
SYMBOL_FLAGS(vchiq_connect, 0x00);
KSYMTAB_FUNC(vchiq_open_service, "");
SYMBOL_FLAGS(vchiq_open_service, 0x00);
KSYMTAB_FUNC(vchiq_bulk_transmit, "");
SYMBOL_FLAGS(vchiq_bulk_transmit, 0x00);
KSYMTAB_FUNC(vchiq_bulk_receive, "");
SYMBOL_FLAGS(vchiq_bulk_receive, 0x00);
KSYMTAB_FUNC(vchiq_use_service, "");
SYMBOL_FLAGS(vchiq_use_service, 0x00);
KSYMTAB_FUNC(vchiq_release_service, "");
SYMBOL_FLAGS(vchiq_release_service, 0x00);
KSYMTAB_FUNC(vchiq_driver_register, "");
SYMBOL_FLAGS(vchiq_driver_register, 0x01);
KSYMTAB_FUNC(vchiq_driver_unregister, "");
SYMBOL_FLAGS(vchiq_driver_unregister, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-vchiqC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiq");
MODULE_ALIAS("of:N*T*Cbrcm,bcm2836-vchiqC*");
