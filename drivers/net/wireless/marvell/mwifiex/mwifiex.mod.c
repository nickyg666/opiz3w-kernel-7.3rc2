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

KSYMTAB_FUNC(mwifiex_queue_main_work, "");
SYMBOL_FLAGS(mwifiex_queue_main_work, 0x01);
KSYMTAB_FUNC(mwifiex_main_process, "");
SYMBOL_FLAGS(mwifiex_main_process, 0x01);
KSYMTAB_FUNC(mwifiex_multi_chan_resync, "");
SYMBOL_FLAGS(mwifiex_multi_chan_resync, 0x01);
KSYMTAB_FUNC(mwifiex_upload_device_dump, "");
SYMBOL_FLAGS(mwifiex_upload_device_dump, 0x01);
KSYMTAB_FUNC(mwifiex_drv_info_dump, "");
SYMBOL_FLAGS(mwifiex_drv_info_dump, 0x01);
KSYMTAB_FUNC(mwifiex_prepare_fw_dump_info, "");
SYMBOL_FLAGS(mwifiex_prepare_fw_dump_info, 0x01);
KSYMTAB_FUNC(mwifiex_shutdown_sw, "");
SYMBOL_FLAGS(mwifiex_shutdown_sw, 0x01);
KSYMTAB_FUNC(mwifiex_reinit_sw, "");
SYMBOL_FLAGS(mwifiex_reinit_sw, 0x01);
KSYMTAB_FUNC(mwifiex_add_card, "");
SYMBOL_FLAGS(mwifiex_add_card, 0x01);
KSYMTAB_FUNC(mwifiex_remove_card, "");
SYMBOL_FLAGS(mwifiex_remove_card, 0x01);
KSYMTAB_FUNC(_mwifiex_dbg, "");
SYMBOL_FLAGS(_mwifiex_dbg, 0x01);
KSYMTAB_FUNC(mwifiex_dnld_fw, "");
SYMBOL_FLAGS(mwifiex_dnld_fw, 0x01);
KSYMTAB_FUNC(mwifiex_process_hs_config, "");
SYMBOL_FLAGS(mwifiex_process_hs_config, 0x01);
KSYMTAB_FUNC(mwifiex_process_sleep_confirm_resp, "");
SYMBOL_FLAGS(mwifiex_process_sleep_confirm_resp, 0x01);
KSYMTAB_FUNC(mwifiex_init_shutdown_fw, "");
SYMBOL_FLAGS(mwifiex_init_shutdown_fw, 0x01);
KSYMTAB_FUNC(mwifiex_alloc_dma_align_buf, "");
SYMBOL_FLAGS(mwifiex_alloc_dma_align_buf, 0x01);
KSYMTAB_FUNC(mwifiex_fw_dump_event, "");
SYMBOL_FLAGS(mwifiex_fw_dump_event, 0x01);
KSYMTAB_FUNC(mwifiex_handle_rx_packet, "");
SYMBOL_FLAGS(mwifiex_handle_rx_packet, 0x01);
KSYMTAB_FUNC(mwifiex_write_data_complete, "");
SYMBOL_FLAGS(mwifiex_write_data_complete, 0x01);
KSYMTAB_FUNC(mwifiex_deauthenticate_all, "");
SYMBOL_FLAGS(mwifiex_deauthenticate_all, 0x01);
KSYMTAB_FUNC(mwifiex_cancel_hs, "");
SYMBOL_FLAGS(mwifiex_cancel_hs, 0x01);
KSYMTAB_FUNC(mwifiex_enable_hs, "");
SYMBOL_FLAGS(mwifiex_enable_hs, 0x01);
KSYMTAB_FUNC(mwifiex_disable_auto_ds, "");
SYMBOL_FLAGS(mwifiex_disable_auto_ds, 0x01);
KSYMTAB_FUNC(mwifiex_add_virtual_intf, "");
SYMBOL_FLAGS(mwifiex_add_virtual_intf, 0x01);
KSYMTAB_FUNC(mwifiex_del_virtual_intf, "");
SYMBOL_FLAGS(mwifiex_del_virtual_intf, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "27F5C108CE7C9533C7B07D5");
