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

KSYMTAB_FUNC(dm_per_bio_data, "");
SYMBOL_FLAGS(dm_per_bio_data, 0x01);
KSYMTAB_FUNC(dm_bio_from_per_bio_data, "");
SYMBOL_FLAGS(dm_bio_from_per_bio_data, 0x01);
KSYMTAB_FUNC(dm_bio_get_target_bio_nr, "");
SYMBOL_FLAGS(dm_bio_get_target_bio_nr, 0x01);
KSYMTAB_FUNC(dm_get_reserved_bio_based_ios, "");
SYMBOL_FLAGS(dm_get_reserved_bio_based_ios, 0x01);
KSYMTAB_FUNC(dm_start_time_ns_from_clone, "");
SYMBOL_FLAGS(dm_start_time_ns_from_clone, 0x01);
KSYMTAB_FUNC(dm_set_target_max_io_len, "");
SYMBOL_FLAGS(dm_set_target_max_io_len, 0x01);
KSYMTAB_FUNC(dm_accept_partial_bio, "");
SYMBOL_FLAGS(dm_accept_partial_bio, 0x01);
KSYMTAB_FUNC(dm_submit_bio_remap, "");
SYMBOL_FLAGS(dm_submit_bio_remap, 0x01);
KSYMTAB_FUNC(dm_get_md, "");
SYMBOL_FLAGS(dm_get_md, 0x01);
KSYMTAB_FUNC(dm_hold, "");
SYMBOL_FLAGS(dm_hold, 0x01);
KSYMTAB_FUNC(dm_device_name, "");
SYMBOL_FLAGS(dm_device_name, 0x01);
KSYMTAB_FUNC(dm_put, "");
SYMBOL_FLAGS(dm_put, 0x01);
KSYMTAB_FUNC(dm_internal_suspend_noflush, "");
SYMBOL_FLAGS(dm_internal_suspend_noflush, 0x01);
KSYMTAB_FUNC(dm_internal_resume, "");
SYMBOL_FLAGS(dm_internal_resume, 0x01);
KSYMTAB_FUNC(dm_internal_suspend_fast, "");
SYMBOL_FLAGS(dm_internal_suspend_fast, 0x01);
KSYMTAB_FUNC(dm_internal_resume_fast, "");
SYMBOL_FLAGS(dm_internal_resume_fast, 0x01);
KSYMTAB_FUNC(dm_disk, "");
SYMBOL_FLAGS(dm_disk, 0x01);
KSYMTAB_FUNC(dm_suspended, "");
SYMBOL_FLAGS(dm_suspended, 0x01);
KSYMTAB_FUNC(dm_post_suspending, "");
SYMBOL_FLAGS(dm_post_suspending, 0x01);
KSYMTAB_FUNC(dm_noflush_suspending, "");
SYMBOL_FLAGS(dm_noflush_suspending, 0x01);
KSYMTAB_FUNC(dm_devt_from_path, "");
SYMBOL_FLAGS(dm_devt_from_path, 0x00);
KSYMTAB_FUNC(dm_get_device, "");
SYMBOL_FLAGS(dm_get_device, 0x00);
KSYMTAB_FUNC(dm_put_device, "");
SYMBOL_FLAGS(dm_put_device, 0x00);
KSYMTAB_FUNC(dm_read_arg, "");
SYMBOL_FLAGS(dm_read_arg, 0x00);
KSYMTAB_FUNC(dm_read_arg_group, "");
SYMBOL_FLAGS(dm_read_arg_group, 0x00);
KSYMTAB_FUNC(dm_shift_arg, "");
SYMBOL_FLAGS(dm_shift_arg, 0x00);
KSYMTAB_FUNC(dm_consume_args, "");
SYMBOL_FLAGS(dm_consume_args, 0x00);
KSYMTAB_FUNC(dm_table_set_type, "");
SYMBOL_FLAGS(dm_table_set_type, 0x01);
KSYMTAB_FUNC(dm_table_event, "");
SYMBOL_FLAGS(dm_table_event, 0x00);
KSYMTAB_FUNC(dm_table_get_size, "");
SYMBOL_FLAGS(dm_table_get_size, 0x00);
KSYMTAB_FUNC(dm_table_get_mode, "");
SYMBOL_FLAGS(dm_table_get_mode, 0x00);
KSYMTAB_FUNC(dm_table_get_md, "");
SYMBOL_FLAGS(dm_table_get_md, 0x00);
KSYMTAB_FUNC(dm_table_device_name, "");
SYMBOL_FLAGS(dm_table_device_name, 0x01);
KSYMTAB_FUNC(dm_table_run_md_queue_async, "");
SYMBOL_FLAGS(dm_table_run_md_queue_async, 0x00);
KSYMTAB_FUNC(dm_register_target, "");
SYMBOL_FLAGS(dm_register_target, 0x00);
KSYMTAB_FUNC(dm_unregister_target, "");
SYMBOL_FLAGS(dm_unregister_target, 0x00);
KSYMTAB_FUNC(dm_copy_name_and_uuid, "");
SYMBOL_FLAGS(dm_copy_name_and_uuid, 0x01);
KSYMTAB_FUNC(dm_io_client_create, "");
SYMBOL_FLAGS(dm_io_client_create, 0x00);
KSYMTAB_FUNC(dm_io_client_destroy, "");
SYMBOL_FLAGS(dm_io_client_destroy, 0x00);
KSYMTAB_FUNC(dm_io, "");
SYMBOL_FLAGS(dm_io, 0x00);
KSYMTAB_FUNC(dm_kcopyd_copy, "");
SYMBOL_FLAGS(dm_kcopyd_copy, 0x00);
KSYMTAB_FUNC(dm_kcopyd_zero, "");
SYMBOL_FLAGS(dm_kcopyd_zero, 0x00);
KSYMTAB_FUNC(dm_kcopyd_prepare_callback, "");
SYMBOL_FLAGS(dm_kcopyd_prepare_callback, 0x00);
KSYMTAB_FUNC(dm_kcopyd_do_callback, "");
SYMBOL_FLAGS(dm_kcopyd_do_callback, 0x00);
KSYMTAB_FUNC(dm_kcopyd_client_create, "");
SYMBOL_FLAGS(dm_kcopyd_client_create, 0x00);
KSYMTAB_FUNC(dm_kcopyd_client_destroy, "");
SYMBOL_FLAGS(dm_kcopyd_client_destroy, 0x00);
KSYMTAB_FUNC(dm_kcopyd_client_flush, "");
SYMBOL_FLAGS(dm_kcopyd_client_flush, 0x00);
KSYMTAB_FUNC(dm_mq_kick_requeue_list, "");
SYMBOL_FLAGS(dm_mq_kick_requeue_list, 0x00);

MODULE_INFO(depends, "");

