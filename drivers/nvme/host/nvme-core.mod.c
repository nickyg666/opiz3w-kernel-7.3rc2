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

KSYMTAB_DATA(admin_timeout, "");
SYMBOL_FLAGS(admin_timeout, 0x01);
KSYMTAB_DATA(nvme_io_timeout, "");
SYMBOL_FLAGS(nvme_io_timeout, 0x01);
KSYMTAB_DATA(nvme_wq, "");
SYMBOL_FLAGS(nvme_wq, 0x01);
KSYMTAB_DATA(nvme_reset_wq, "");
SYMBOL_FLAGS(nvme_reset_wq, 0x01);
KSYMTAB_DATA(nvme_delete_wq, "");
SYMBOL_FLAGS(nvme_delete_wq, 0x01);
KSYMTAB_FUNC(nvme_try_sched_reset, "");
SYMBOL_FLAGS(nvme_try_sched_reset, 0x01);
KSYMTAB_FUNC(nvme_reset_ctrl, "");
SYMBOL_FLAGS(nvme_reset_ctrl, 0x01);
KSYMTAB_FUNC(nvme_delete_ctrl, "");
SYMBOL_FLAGS(nvme_delete_ctrl, 0x01);
KSYMTAB_FUNC(nvme_complete_rq, "");
SYMBOL_FLAGS(nvme_complete_rq, 0x01);
KSYMTAB_FUNC(nvme_complete_batch_req, "");
SYMBOL_FLAGS(nvme_complete_batch_req, 0x01);
KSYMTAB_FUNC(nvme_host_path_error, "");
SYMBOL_FLAGS(nvme_host_path_error, 0x01);
KSYMTAB_FUNC(nvme_cancel_request, "");
SYMBOL_FLAGS(nvme_cancel_request, 0x01);
KSYMTAB_FUNC(nvme_cancel_tagset, "");
SYMBOL_FLAGS(nvme_cancel_tagset, 0x01);
KSYMTAB_FUNC(nvme_cancel_admin_tagset, "");
SYMBOL_FLAGS(nvme_cancel_admin_tagset, 0x01);
KSYMTAB_FUNC(nvme_change_ctrl_state, "");
SYMBOL_FLAGS(nvme_change_ctrl_state, 0x01);
KSYMTAB_FUNC(nvme_wait_reset, "");
SYMBOL_FLAGS(nvme_wait_reset, 0x01);
KSYMTAB_FUNC(nvme_put_ns, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_put_ns, 0x01);
KSYMTAB_FUNC(nvme_init_request, "");
SYMBOL_FLAGS(nvme_init_request, 0x01);
KSYMTAB_FUNC(nvme_fail_nonready_command, "");
SYMBOL_FLAGS(nvme_fail_nonready_command, 0x01);
KSYMTAB_FUNC(__nvme_check_ready, "");
SYMBOL_FLAGS(__nvme_check_ready, 0x01);
KSYMTAB_FUNC(nvme_cleanup_cmd, "");
SYMBOL_FLAGS(nvme_cleanup_cmd, 0x01);
KSYMTAB_FUNC(nvme_setup_cmd, "");
SYMBOL_FLAGS(nvme_setup_cmd, 0x01);
KSYMTAB_FUNC(nvme_execute_rq, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_execute_rq, 0x01);
KSYMTAB_FUNC(__nvme_submit_sync_cmd, "");
SYMBOL_FLAGS(__nvme_submit_sync_cmd, 0x01);
KSYMTAB_FUNC(nvme_submit_sync_cmd, "");
SYMBOL_FLAGS(nvme_submit_sync_cmd, 0x01);
KSYMTAB_FUNC(nvme_command_effects, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_command_effects, 0x01);
KSYMTAB_FUNC(nvme_passthru_start, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_passthru_start, 0x01);
KSYMTAB_FUNC(nvme_passthru_end, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_passthru_end, 0x01);
KSYMTAB_FUNC(nvme_stop_keep_alive, "");
SYMBOL_FLAGS(nvme_stop_keep_alive, 0x01);
KSYMTAB_FUNC(nvme_set_features, "");
SYMBOL_FLAGS(nvme_set_features, 0x01);
KSYMTAB_FUNC(nvme_get_features, "");
SYMBOL_FLAGS(nvme_get_features, 0x01);
KSYMTAB_FUNC(nvme_set_queue_count, "");
SYMBOL_FLAGS(nvme_set_queue_count, 0x01);
KSYMTAB_FUNC(nvme_disable_ctrl, "");
SYMBOL_FLAGS(nvme_disable_ctrl, 0x01);
KSYMTAB_FUNC(nvme_enable_ctrl, "");
SYMBOL_FLAGS(nvme_enable_ctrl, 0x01);
KSYMTAB_FUNC(nvme_init_ctrl_finish, "");
SYMBOL_FLAGS(nvme_init_ctrl_finish, 0x01);
KSYMTAB_FUNC(nvme_find_get_ns, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_find_get_ns, 0x01);
KSYMTAB_FUNC(nvme_remove_namespaces, "");
SYMBOL_FLAGS(nvme_remove_namespaces, 0x01);
KSYMTAB_FUNC(nvme_complete_async_event, "");
SYMBOL_FLAGS(nvme_complete_async_event, 0x01);
KSYMTAB_FUNC(nvme_alloc_admin_tag_set, "");
SYMBOL_FLAGS(nvme_alloc_admin_tag_set, 0x01);
KSYMTAB_FUNC(nvme_remove_admin_tag_set, "");
SYMBOL_FLAGS(nvme_remove_admin_tag_set, 0x01);
KSYMTAB_FUNC(nvme_alloc_io_tag_set, "");
SYMBOL_FLAGS(nvme_alloc_io_tag_set, 0x01);
KSYMTAB_FUNC(nvme_remove_io_tag_set, "");
SYMBOL_FLAGS(nvme_remove_io_tag_set, 0x01);
KSYMTAB_FUNC(nvme_stop_ctrl, "");
SYMBOL_FLAGS(nvme_stop_ctrl, 0x01);
KSYMTAB_FUNC(nvme_start_ctrl, "");
SYMBOL_FLAGS(nvme_start_ctrl, 0x01);
KSYMTAB_FUNC(nvme_uninit_ctrl, "");
SYMBOL_FLAGS(nvme_uninit_ctrl, 0x01);
KSYMTAB_FUNC(nvme_init_ctrl, "");
SYMBOL_FLAGS(nvme_init_ctrl, 0x01);
KSYMTAB_FUNC(nvme_add_ctrl, "");
SYMBOL_FLAGS(nvme_add_ctrl, 0x01);
KSYMTAB_FUNC(nvme_mark_namespaces_dead, "");
SYMBOL_FLAGS(nvme_mark_namespaces_dead, 0x01);
KSYMTAB_FUNC(nvme_unfreeze, "");
SYMBOL_FLAGS(nvme_unfreeze, 0x01);
KSYMTAB_FUNC(nvme_wait_freeze_timeout, "");
SYMBOL_FLAGS(nvme_wait_freeze_timeout, 0x01);
KSYMTAB_FUNC(nvme_wait_freeze, "");
SYMBOL_FLAGS(nvme_wait_freeze, 0x01);
KSYMTAB_FUNC(nvme_start_freeze, "");
SYMBOL_FLAGS(nvme_start_freeze, 0x01);
KSYMTAB_FUNC(nvme_quiesce_io_queues, "");
SYMBOL_FLAGS(nvme_quiesce_io_queues, 0x01);
KSYMTAB_FUNC(nvme_unquiesce_io_queues, "");
SYMBOL_FLAGS(nvme_unquiesce_io_queues, 0x01);
KSYMTAB_FUNC(nvme_quiesce_admin_queue, "");
SYMBOL_FLAGS(nvme_quiesce_admin_queue, 0x01);
KSYMTAB_FUNC(nvme_unquiesce_admin_queue, "");
SYMBOL_FLAGS(nvme_unquiesce_admin_queue, 0x01);
KSYMTAB_FUNC(nvme_sync_io_queues, "");
SYMBOL_FLAGS(nvme_sync_io_queues, 0x01);
KSYMTAB_FUNC(nvme_sync_queues, "");
SYMBOL_FLAGS(nvme_sync_queues, 0x01);
KSYMTAB_FUNC(nvme_ctrl_from_file, "NVME_TARGET_PASSTHRU");
SYMBOL_FLAGS(nvme_ctrl_from_file, 0x01);
KSYMTAB_DATA(nvme_dev_attrs_group, "");
SYMBOL_FLAGS(nvme_dev_attrs_group, 0x01);
KSYMTAB_DATA(nvme_dev_diag_attrs_group, "");
SYMBOL_FLAGS(nvme_dev_diag_attrs_group, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "1BD5852C4844A1C6E48798B");
