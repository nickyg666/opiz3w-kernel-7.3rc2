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

KSYMTAB_FUNC(greybus_disabled, "");
SYMBOL_FLAGS(greybus_disabled, 0x01);
KSYMTAB_FUNC(greybus_register_driver, "");
SYMBOL_FLAGS(greybus_register_driver, 0x01);
KSYMTAB_FUNC(greybus_deregister_driver, "");
SYMBOL_FLAGS(greybus_deregister_driver, 0x01);
KSYMTAB_FUNC(gb_debugfs_get, "");
SYMBOL_FLAGS(gb_debugfs_get, 0x01);
KSYMTAB_FUNC(gb_hd_output, "");
SYMBOL_FLAGS(gb_hd_output, 0x01);
KSYMTAB_FUNC(gb_hd_cport_reserve, "");
SYMBOL_FLAGS(gb_hd_cport_reserve, 0x01);
KSYMTAB_FUNC(gb_hd_cport_release_reserved, "");
SYMBOL_FLAGS(gb_hd_cport_release_reserved, 0x01);
KSYMTAB_FUNC(gb_hd_create, "");
SYMBOL_FLAGS(gb_hd_create, 0x01);
KSYMTAB_FUNC(gb_hd_add, "");
SYMBOL_FLAGS(gb_hd_add, 0x01);
KSYMTAB_FUNC(gb_hd_del, "");
SYMBOL_FLAGS(gb_hd_del, 0x01);
KSYMTAB_FUNC(gb_hd_shutdown, "");
SYMBOL_FLAGS(gb_hd_shutdown, 0x01);
KSYMTAB_FUNC(gb_hd_put, "");
SYMBOL_FLAGS(gb_hd_put, 0x01);
KSYMTAB_FUNC(gb_interface_request_mode_switch, "");
SYMBOL_FLAGS(gb_interface_request_mode_switch, 0x01);
KSYMTAB_FUNC(greybus_data_rcvd, "");
SYMBOL_FLAGS(greybus_data_rcvd, 0x01);
KSYMTAB_FUNC(gb_connection_create, "");
SYMBOL_FLAGS(gb_connection_create, 0x01);
KSYMTAB_FUNC(gb_connection_create_flags, "");
SYMBOL_FLAGS(gb_connection_create_flags, 0x01);
KSYMTAB_FUNC(gb_connection_create_offloaded, "");
SYMBOL_FLAGS(gb_connection_create_offloaded, 0x01);
KSYMTAB_FUNC(gb_connection_enable, "");
SYMBOL_FLAGS(gb_connection_enable, 0x01);
KSYMTAB_FUNC(gb_connection_enable_tx, "");
SYMBOL_FLAGS(gb_connection_enable_tx, 0x01);
KSYMTAB_FUNC(gb_connection_disable_rx, "");
SYMBOL_FLAGS(gb_connection_disable_rx, 0x01);
KSYMTAB_FUNC(gb_connection_disable, "");
SYMBOL_FLAGS(gb_connection_disable, 0x01);
KSYMTAB_FUNC(gb_connection_disable_forced, "");
SYMBOL_FLAGS(gb_connection_disable_forced, 0x01);
KSYMTAB_FUNC(gb_connection_destroy, "");
SYMBOL_FLAGS(gb_connection_destroy, 0x01);
KSYMTAB_FUNC(gb_connection_latency_tag_enable, "");
SYMBOL_FLAGS(gb_connection_latency_tag_enable, 0x01);
KSYMTAB_FUNC(gb_connection_latency_tag_disable, "");
SYMBOL_FLAGS(gb_connection_latency_tag_disable, 0x01);
KSYMTAB_FUNC(gb_svc_intf_set_power_mode, "");
SYMBOL_FLAGS(gb_svc_intf_set_power_mode, 0x01);
KSYMTAB_FUNC(gb_operation_result, "");
SYMBOL_FLAGS(gb_operation_result, 0x01);
KSYMTAB_FUNC(gb_operation_response_alloc, "");
SYMBOL_FLAGS(gb_operation_response_alloc, 0x01);
KSYMTAB_FUNC(gb_operation_create_flags, "");
SYMBOL_FLAGS(gb_operation_create_flags, 0x01);
KSYMTAB_FUNC(gb_operation_get_payload_size_max, "");
SYMBOL_FLAGS(gb_operation_get_payload_size_max, 0x01);
KSYMTAB_FUNC(gb_operation_get, "");
SYMBOL_FLAGS(gb_operation_get, 0x01);
KSYMTAB_FUNC(gb_operation_put, "");
SYMBOL_FLAGS(gb_operation_put, 0x01);
KSYMTAB_FUNC(gb_operation_request_send, "");
SYMBOL_FLAGS(gb_operation_request_send, 0x01);
KSYMTAB_FUNC(gb_operation_request_send_sync_timeout, "");
SYMBOL_FLAGS(gb_operation_request_send_sync_timeout, 0x01);
KSYMTAB_FUNC(greybus_message_sent, "");
SYMBOL_FLAGS(greybus_message_sent, 0x01);
KSYMTAB_FUNC(gb_operation_cancel, "");
SYMBOL_FLAGS(gb_operation_cancel, 0x01);
KSYMTAB_FUNC(gb_operation_sync_timeout, "");
SYMBOL_FLAGS(gb_operation_sync_timeout, 0x01);
KSYMTAB_FUNC(gb_operation_unidirectional_timeout, "");
SYMBOL_FLAGS(gb_operation_unidirectional_timeout, 0x01);

MODULE_INFO(depends, "");

