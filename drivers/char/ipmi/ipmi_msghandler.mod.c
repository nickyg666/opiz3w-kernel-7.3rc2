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

KSYMTAB_FUNC(ipmi_addr_src_to_str, "");
SYMBOL_FLAGS(ipmi_addr_src_to_str, 0x00);
KSYMTAB_FUNC(ipmi_smi_watcher_register, "");
SYMBOL_FLAGS(ipmi_smi_watcher_register, 0x00);
KSYMTAB_FUNC(ipmi_smi_watcher_unregister, "");
SYMBOL_FLAGS(ipmi_smi_watcher_unregister, 0x00);
KSYMTAB_FUNC(ipmi_validate_addr, "");
SYMBOL_FLAGS(ipmi_validate_addr, 0x00);
KSYMTAB_FUNC(ipmi_addr_length, "");
SYMBOL_FLAGS(ipmi_addr_length, 0x00);
KSYMTAB_FUNC(ipmi_create_user, "");
SYMBOL_FLAGS(ipmi_create_user, 0x00);
KSYMTAB_FUNC(ipmi_get_smi_info, "");
SYMBOL_FLAGS(ipmi_get_smi_info, 0x00);
KSYMTAB_FUNC(ipmi_destroy_user, "");
SYMBOL_FLAGS(ipmi_destroy_user, 0x00);
KSYMTAB_FUNC(ipmi_get_version, "");
SYMBOL_FLAGS(ipmi_get_version, 0x00);
KSYMTAB_FUNC(ipmi_set_my_address, "");
SYMBOL_FLAGS(ipmi_set_my_address, 0x00);
KSYMTAB_FUNC(ipmi_get_my_address, "");
SYMBOL_FLAGS(ipmi_get_my_address, 0x00);
KSYMTAB_FUNC(ipmi_set_my_LUN, "");
SYMBOL_FLAGS(ipmi_set_my_LUN, 0x00);
KSYMTAB_FUNC(ipmi_get_my_LUN, "");
SYMBOL_FLAGS(ipmi_get_my_LUN, 0x00);
KSYMTAB_FUNC(ipmi_get_maintenance_mode, "");
SYMBOL_FLAGS(ipmi_get_maintenance_mode, 0x00);
KSYMTAB_FUNC(ipmi_set_maintenance_mode, "");
SYMBOL_FLAGS(ipmi_set_maintenance_mode, 0x00);
KSYMTAB_FUNC(ipmi_set_gets_events, "");
SYMBOL_FLAGS(ipmi_set_gets_events, 0x00);
KSYMTAB_FUNC(ipmi_register_for_cmd, "");
SYMBOL_FLAGS(ipmi_register_for_cmd, 0x00);
KSYMTAB_FUNC(ipmi_unregister_for_cmd, "");
SYMBOL_FLAGS(ipmi_unregister_for_cmd, 0x00);
KSYMTAB_FUNC(ipmb_checksum, "");
SYMBOL_FLAGS(ipmb_checksum, 0x00);
KSYMTAB_FUNC(ipmi_request_settime, "");
SYMBOL_FLAGS(ipmi_request_settime, 0x00);
KSYMTAB_FUNC(ipmi_request_supply_msgs, "");
SYMBOL_FLAGS(ipmi_request_supply_msgs, 0x00);
KSYMTAB_FUNC(ipmi_poll_interface, "");
SYMBOL_FLAGS(ipmi_poll_interface, 0x00);
KSYMTAB_FUNC(ipmi_add_smi, "");
SYMBOL_FLAGS(ipmi_add_smi, 0x00);
KSYMTAB_FUNC(ipmi_unregister_smi, "");
SYMBOL_FLAGS(ipmi_unregister_smi, 0x00);
KSYMTAB_FUNC(ipmi_smi_msg_received, "");
SYMBOL_FLAGS(ipmi_smi_msg_received, 0x00);
KSYMTAB_FUNC(ipmi_smi_watchdog_pretimeout, "");
SYMBOL_FLAGS(ipmi_smi_watchdog_pretimeout, 0x00);
KSYMTAB_FUNC(ipmi_alloc_smi_msg, "");
SYMBOL_FLAGS(ipmi_alloc_smi_msg, 0x00);
KSYMTAB_FUNC(ipmi_free_recv_msg, "");
SYMBOL_FLAGS(ipmi_free_recv_msg, 0x00);
KSYMTAB_FUNC(ipmi_panic_request_and_wait, "");
SYMBOL_FLAGS(ipmi_panic_request_and_wait, 0x00);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "776090786A5BD4501E70CB3");
