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

KSYMTAB_FUNC(wlcore_set_key, "");
SYMBOL_FLAGS(wlcore_set_key, 0x01);
KSYMTAB_FUNC(wlcore_alloc_hw, "");
SYMBOL_FLAGS(wlcore_alloc_hw, 0x01);
KSYMTAB_FUNC(wlcore_free_hw, "");
SYMBOL_FLAGS(wlcore_free_hw, 0x01);
KSYMTAB_FUNC(wlcore_probe, "");
SYMBOL_FLAGS(wlcore_probe, 0x01);
KSYMTAB_FUNC(wlcore_remove, "");
SYMBOL_FLAGS(wlcore_remove, 0x01);
KSYMTAB_DATA(wl12xx_debug_level, "");
SYMBOL_FLAGS(wl12xx_debug_level, 0x01);
KSYMTAB_FUNC(wl1271_cmd_send, "");
SYMBOL_FLAGS(wl1271_cmd_send, 0x01);
KSYMTAB_FUNC(wlcore_cmd_wait_for_event_or_timeout, "");
SYMBOL_FLAGS(wlcore_cmd_wait_for_event_or_timeout, 0x01);
KSYMTAB_FUNC(wlcore_get_native_channel_type, "");
SYMBOL_FLAGS(wlcore_get_native_channel_type, 0x01);
KSYMTAB_FUNC(wl1271_cmd_test, "");
SYMBOL_FLAGS(wl1271_cmd_test, 0x01);
KSYMTAB_FUNC(wl1271_cmd_configure, "");
SYMBOL_FLAGS(wl1271_cmd_configure, 0x01);
KSYMTAB_FUNC(wl1271_cmd_data_path, "");
SYMBOL_FLAGS(wl1271_cmd_data_path, 0x01);
KSYMTAB_FUNC(wl12xx_cmd_build_probe_req, "");
SYMBOL_FLAGS(wl12xx_cmd_build_probe_req, 0x01);
KSYMTAB_FUNC(wlcore_cmd_generic_cfg, "");
SYMBOL_FLAGS(wlcore_cmd_generic_cfg, 0x01);
KSYMTAB_FUNC(wlcore_disable_interrupts, "");
SYMBOL_FLAGS(wlcore_disable_interrupts, 0x01);
KSYMTAB_FUNC(wlcore_disable_interrupts_nosync, "");
SYMBOL_FLAGS(wlcore_disable_interrupts_nosync, 0x01);
KSYMTAB_FUNC(wlcore_enable_interrupts, "");
SYMBOL_FLAGS(wlcore_enable_interrupts, 0x01);
KSYMTAB_FUNC(wlcore_synchronize_interrupts, "");
SYMBOL_FLAGS(wlcore_synchronize_interrupts, 0x01);
KSYMTAB_FUNC(wlcore_translate_addr, "");
SYMBOL_FLAGS(wlcore_translate_addr, 0x01);
KSYMTAB_FUNC(wlcore_set_partition, "");
SYMBOL_FLAGS(wlcore_set_partition, 0x01);
KSYMTAB_FUNC(wlcore_event_fw_logger, "");
SYMBOL_FLAGS(wlcore_event_fw_logger, 0x01);
KSYMTAB_FUNC(wlcore_event_rssi_trigger, "");
SYMBOL_FLAGS(wlcore_event_rssi_trigger, 0x01);
KSYMTAB_FUNC(wlcore_event_soft_gemini_sense, "");
SYMBOL_FLAGS(wlcore_event_soft_gemini_sense, 0x01);
KSYMTAB_FUNC(wlcore_event_sched_scan_completed, "");
SYMBOL_FLAGS(wlcore_event_sched_scan_completed, 0x01);
KSYMTAB_FUNC(wlcore_event_ba_rx_constraint, "");
SYMBOL_FLAGS(wlcore_event_ba_rx_constraint, 0x01);
KSYMTAB_FUNC(wlcore_event_channel_switch, "");
SYMBOL_FLAGS(wlcore_event_channel_switch, 0x01);
KSYMTAB_FUNC(wlcore_event_dummy_packet, "");
SYMBOL_FLAGS(wlcore_event_dummy_packet, 0x01);
KSYMTAB_FUNC(wlcore_event_max_tx_failure, "");
SYMBOL_FLAGS(wlcore_event_max_tx_failure, 0x01);
KSYMTAB_FUNC(wlcore_event_inactive_sta, "");
SYMBOL_FLAGS(wlcore_event_inactive_sta, 0x01);
KSYMTAB_FUNC(wlcore_event_roc_complete, "");
SYMBOL_FLAGS(wlcore_event_roc_complete, 0x01);
KSYMTAB_FUNC(wlcore_event_beacon_loss, "");
SYMBOL_FLAGS(wlcore_event_beacon_loss, 0x01);
KSYMTAB_FUNC(wl1271_free_tx_id, "");
SYMBOL_FLAGS(wl1271_free_tx_id, 0x00);
KSYMTAB_FUNC(wl12xx_is_dummy_packet, "");
SYMBOL_FLAGS(wl12xx_is_dummy_packet, 0x00);
KSYMTAB_FUNC(wlcore_calc_packet_alignment, "");
SYMBOL_FLAGS(wlcore_calc_packet_alignment, 0x00);
KSYMTAB_FUNC(wlcore_tx_complete, "");
SYMBOL_FLAGS(wlcore_tx_complete, 0x00);
KSYMTAB_FUNC(wl1271_tx_flush, "");
SYMBOL_FLAGS(wl1271_tx_flush, 0x01);
KSYMTAB_FUNC(wl1271_tx_min_rate_get, "");
SYMBOL_FLAGS(wl1271_tx_min_rate_get, 0x01);
KSYMTAB_FUNC(wl1271_acx_sleep_auth, "");
SYMBOL_FLAGS(wl1271_acx_sleep_auth, 0x01);
KSYMTAB_FUNC(wl12xx_acx_mem_cfg, "");
SYMBOL_FLAGS(wl12xx_acx_mem_cfg, 0x01);
KSYMTAB_FUNC(wl1271_acx_init_mem_config, "");
SYMBOL_FLAGS(wl1271_acx_init_mem_config, 0x01);
KSYMTAB_FUNC(wl1271_acx_pm_config, "");
SYMBOL_FLAGS(wl1271_acx_pm_config, 0x01);
KSYMTAB_FUNC(wl1271_acx_set_ht_capabilities, "");
SYMBOL_FLAGS(wl1271_acx_set_ht_capabilities, 0x01);
KSYMTAB_FUNC(wlcore_boot_upload_firmware, "");
SYMBOL_FLAGS(wlcore_boot_upload_firmware, 0x01);
KSYMTAB_FUNC(wlcore_boot_upload_nvs, "");
SYMBOL_FLAGS(wlcore_boot_upload_nvs, 0x01);
KSYMTAB_FUNC(wlcore_boot_run_firmware, "");
SYMBOL_FLAGS(wlcore_boot_run_firmware, 0x01);
KSYMTAB_FUNC(wl1271_format_buffer, "");
SYMBOL_FLAGS(wl1271_format_buffer, 0x01);
KSYMTAB_FUNC(wl1271_debugfs_update_stats, "");
SYMBOL_FLAGS(wl1271_debugfs_update_stats, 0x01);
KSYMTAB_FUNC(wlcore_set_scan_chan_params, "");
SYMBOL_FLAGS(wlcore_set_scan_chan_params, 0x01);
KSYMTAB_FUNC(wlcore_scan_sched_scan_ssid_list, "");
SYMBOL_FLAGS(wlcore_scan_sched_scan_ssid_list, 0x01);
KSYMTAB_FUNC(wlcore_scan_sched_scan_results, "");
SYMBOL_FLAGS(wlcore_scan_sched_scan_results, 0x01);

MODULE_INFO(depends, "");

