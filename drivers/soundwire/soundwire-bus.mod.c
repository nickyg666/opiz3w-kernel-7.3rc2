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

KSYMTAB_DATA(sdw_bus_type, "");
SYMBOL_FLAGS(sdw_bus_type, 0x01);
KSYMTAB_FUNC(__sdw_register_driver, "");
SYMBOL_FLAGS(__sdw_register_driver, 0x01);
KSYMTAB_FUNC(sdw_unregister_driver, "");
SYMBOL_FLAGS(sdw_unregister_driver, 0x01);
KSYMTAB_FUNC(sdw_bus_master_add, "");
SYMBOL_FLAGS(sdw_bus_master_add, 0x00);
KSYMTAB_FUNC(sdw_bus_master_delete, "");
SYMBOL_FLAGS(sdw_bus_master_delete, 0x00);
KSYMTAB_FUNC(sdw_show_ping_status, "");
SYMBOL_FLAGS(sdw_show_ping_status, 0x00);
KSYMTAB_FUNC(sdw_nread_no_pm, "");
SYMBOL_FLAGS(sdw_nread_no_pm, 0x00);
KSYMTAB_FUNC(sdw_nwrite_no_pm, "");
SYMBOL_FLAGS(sdw_nwrite_no_pm, 0x00);
KSYMTAB_FUNC(sdw_write_no_pm, "");
SYMBOL_FLAGS(sdw_write_no_pm, 0x00);
KSYMTAB_FUNC(sdw_bread_no_pm_unlocked, "");
SYMBOL_FLAGS(sdw_bread_no_pm_unlocked, 0x00);
KSYMTAB_FUNC(sdw_bwrite_no_pm_unlocked, "");
SYMBOL_FLAGS(sdw_bwrite_no_pm_unlocked, 0x00);
KSYMTAB_FUNC(sdw_read_no_pm, "");
SYMBOL_FLAGS(sdw_read_no_pm, 0x00);
KSYMTAB_FUNC(sdw_update_no_pm, "");
SYMBOL_FLAGS(sdw_update_no_pm, 0x00);
KSYMTAB_FUNC(sdw_update, "");
SYMBOL_FLAGS(sdw_update, 0x00);
KSYMTAB_FUNC(sdw_nread, "");
SYMBOL_FLAGS(sdw_nread, 0x00);
KSYMTAB_FUNC(sdw_nwrite, "");
SYMBOL_FLAGS(sdw_nwrite, 0x00);
KSYMTAB_FUNC(sdw_read, "");
SYMBOL_FLAGS(sdw_read, 0x00);
KSYMTAB_FUNC(sdw_write, "");
SYMBOL_FLAGS(sdw_write, 0x00);
KSYMTAB_FUNC(sdw_compare_devid, "");
SYMBOL_FLAGS(sdw_compare_devid, 0x00);
KSYMTAB_FUNC(sdw_extract_slave_id, "");
SYMBOL_FLAGS(sdw_extract_slave_id, 0x00);
KSYMTAB_FUNC(is_clock_scaling_supported_by_slave, "");
SYMBOL_FLAGS(is_clock_scaling_supported_by_slave, 0x00);
KSYMTAB_FUNC(sdw_bus_prep_clk_stop, "");
SYMBOL_FLAGS(sdw_bus_prep_clk_stop, 0x00);
KSYMTAB_FUNC(sdw_bus_clk_stop, "");
SYMBOL_FLAGS(sdw_bus_clk_stop, 0x00);
KSYMTAB_FUNC(sdw_bus_exit_clk_stop, "");
SYMBOL_FLAGS(sdw_bus_exit_clk_stop, 0x00);
KSYMTAB_FUNC(sdw_slave_get_scale_index, "");
SYMBOL_FLAGS(sdw_slave_get_scale_index, 0x00);
KSYMTAB_FUNC(sdw_slave_get_current_bank, "");
SYMBOL_FLAGS(sdw_slave_get_current_bank, 0x01);
KSYMTAB_FUNC(sdw_handle_slave_status, "");
SYMBOL_FLAGS(sdw_handle_slave_status, 0x00);
KSYMTAB_FUNC(sdw_clear_slave_status, "");
SYMBOL_FLAGS(sdw_clear_slave_status, 0x00);
KSYMTAB_FUNC(sdw_bpt_send_async, "");
SYMBOL_FLAGS(sdw_bpt_send_async, 0x00);
KSYMTAB_FUNC(sdw_bpt_wait, "");
SYMBOL_FLAGS(sdw_bpt_wait, 0x00);
KSYMTAB_FUNC(sdw_bpt_send_sync, "");
SYMBOL_FLAGS(sdw_bpt_send_sync, 0x00);
KSYMTAB_DATA(sdw_slave_type, "");
SYMBOL_FLAGS(sdw_slave_type, 0x01);
KSYMTAB_FUNC(sdw_slave_add, "");
SYMBOL_FLAGS(sdw_slave_add, 0x00);
KSYMTAB_FUNC(of_sdw_find_device_by_node, "");
SYMBOL_FLAGS(of_sdw_find_device_by_node, 0x01);
KSYMTAB_FUNC(sdw_master_read_prop, "");
SYMBOL_FLAGS(sdw_master_read_prop, 0x00);
KSYMTAB_FUNC(sdw_slave_read_lane_mapping, "");
SYMBOL_FLAGS(sdw_slave_read_lane_mapping, 0x00);
KSYMTAB_FUNC(sdw_slave_read_prop, "");
SYMBOL_FLAGS(sdw_slave_read_prop, 0x00);
KSYMTAB_DATA(sdw_rows, "");
SYMBOL_FLAGS(sdw_rows, 0x00);
KSYMTAB_DATA(sdw_cols, "");
SYMBOL_FLAGS(sdw_cols, 0x00);
KSYMTAB_FUNC(sdw_find_col_index, "");
SYMBOL_FLAGS(sdw_find_col_index, 0x00);
KSYMTAB_FUNC(sdw_find_row_index, "");
SYMBOL_FLAGS(sdw_find_row_index, 0x00);
KSYMTAB_FUNC(sdw_prepare_stream, "");
SYMBOL_FLAGS(sdw_prepare_stream, 0x00);
KSYMTAB_FUNC(sdw_enable_stream, "");
SYMBOL_FLAGS(sdw_enable_stream, 0x00);
KSYMTAB_FUNC(sdw_disable_stream, "");
SYMBOL_FLAGS(sdw_disable_stream, 0x00);
KSYMTAB_FUNC(sdw_deprepare_stream, "");
SYMBOL_FLAGS(sdw_deprepare_stream, 0x00);
KSYMTAB_FUNC(sdw_alloc_stream, "");
SYMBOL_FLAGS(sdw_alloc_stream, 0x00);
KSYMTAB_FUNC(sdw_startup_stream, "");
SYMBOL_FLAGS(sdw_startup_stream, 0x00);
KSYMTAB_FUNC(sdw_shutdown_stream, "");
SYMBOL_FLAGS(sdw_shutdown_stream, 0x00);
KSYMTAB_FUNC(sdw_release_stream, "");
SYMBOL_FLAGS(sdw_release_stream, 0x00);
KSYMTAB_FUNC(sdw_stream_add_master, "");
SYMBOL_FLAGS(sdw_stream_add_master, 0x00);
KSYMTAB_FUNC(sdw_stream_remove_master, "");
SYMBOL_FLAGS(sdw_stream_remove_master, 0x00);
KSYMTAB_FUNC(sdw_stream_add_slave, "");
SYMBOL_FLAGS(sdw_stream_add_slave, 0x00);
KSYMTAB_FUNC(sdw_stream_remove_slave, "");
SYMBOL_FLAGS(sdw_stream_remove_slave, 0x00);

MODULE_INFO(depends, "");

