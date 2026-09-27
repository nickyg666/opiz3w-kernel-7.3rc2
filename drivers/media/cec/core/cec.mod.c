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

KSYMTAB_FUNC(cec_allocate_adapter, "");
SYMBOL_FLAGS(cec_allocate_adapter, 0x01);
KSYMTAB_FUNC(cec_register_adapter, "");
SYMBOL_FLAGS(cec_register_adapter, 0x01);
KSYMTAB_FUNC(cec_unregister_adapter, "");
SYMBOL_FLAGS(cec_unregister_adapter, 0x01);
KSYMTAB_FUNC(cec_delete_adapter, "");
SYMBOL_FLAGS(cec_delete_adapter, 0x01);
KSYMTAB_FUNC(cec_get_edid_phys_addr, "");
SYMBOL_FLAGS(cec_get_edid_phys_addr, 0x01);
KSYMTAB_FUNC(cec_fill_conn_info_from_drm, "");
SYMBOL_FLAGS(cec_fill_conn_info_from_drm, 0x01);
KSYMTAB_FUNC(cec_queue_pin_cec_event, "");
SYMBOL_FLAGS(cec_queue_pin_cec_event, 0x01);
KSYMTAB_FUNC(cec_queue_pin_hpd_event, "");
SYMBOL_FLAGS(cec_queue_pin_hpd_event, 0x01);
KSYMTAB_FUNC(cec_queue_pin_5v_event, "");
SYMBOL_FLAGS(cec_queue_pin_5v_event, 0x01);
KSYMTAB_FUNC(cec_transmit_done_ts, "");
SYMBOL_FLAGS(cec_transmit_done_ts, 0x01);
KSYMTAB_FUNC(cec_transmit_attempt_done_ts, "");
SYMBOL_FLAGS(cec_transmit_attempt_done_ts, 0x01);
KSYMTAB_FUNC(cec_transmit_msg, "");
SYMBOL_FLAGS(cec_transmit_msg, 0x01);
KSYMTAB_FUNC(cec_received_msg_ts, "");
SYMBOL_FLAGS(cec_received_msg_ts, 0x01);
KSYMTAB_FUNC(cec_s_phys_addr, "");
SYMBOL_FLAGS(cec_s_phys_addr, 0x01);
KSYMTAB_FUNC(cec_s_phys_addr_from_edid, "");
SYMBOL_FLAGS(cec_s_phys_addr_from_edid, 0x01);
KSYMTAB_FUNC(cec_s_conn_info, "");
SYMBOL_FLAGS(cec_s_conn_info, 0x01);
KSYMTAB_FUNC(cec_s_log_addrs, "");
SYMBOL_FLAGS(cec_s_log_addrs, 0x01);
KSYMTAB_FUNC(cec_notifier_conn_register, "");
SYMBOL_FLAGS(cec_notifier_conn_register, 0x01);
KSYMTAB_FUNC(cec_notifier_conn_unregister, "");
SYMBOL_FLAGS(cec_notifier_conn_unregister, 0x01);
KSYMTAB_FUNC(cec_notifier_cec_adap_register, "");
SYMBOL_FLAGS(cec_notifier_cec_adap_register, 0x01);
KSYMTAB_FUNC(cec_notifier_cec_adap_unregister, "");
SYMBOL_FLAGS(cec_notifier_cec_adap_unregister, 0x01);
KSYMTAB_FUNC(cec_notifier_set_phys_addr, "");
SYMBOL_FLAGS(cec_notifier_set_phys_addr, 0x01);
KSYMTAB_FUNC(cec_notifier_set_phys_addr_from_edid, "");
SYMBOL_FLAGS(cec_notifier_set_phys_addr_from_edid, 0x01);
KSYMTAB_FUNC(cec_notifier_parse_hdmi_phandle, "");
SYMBOL_FLAGS(cec_notifier_parse_hdmi_phandle, 0x01);

MODULE_INFO(depends, "");

