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

KSYMTAB_FUNC(md_new_event, "");
SYMBOL_FLAGS(md_new_event, 0x01);
KSYMTAB_FUNC(md_handle_request, "");
SYMBOL_FLAGS(md_handle_request, 0x00);
KSYMTAB_FUNC(mddev_suspend, "");
SYMBOL_FLAGS(mddev_suspend, 0x01);
KSYMTAB_FUNC(mddev_resume, "");
SYMBOL_FLAGS(mddev_resume, 0x01);
KSYMTAB_FUNC(md_flush_request, "");
SYMBOL_FLAGS(md_flush_request, 0x00);
KSYMTAB_FUNC(mddev_init, "");
SYMBOL_FLAGS(mddev_init, 0x01);
KSYMTAB_FUNC(mddev_destroy, "");
SYMBOL_FLAGS(mddev_destroy, 0x01);
KSYMTAB_FUNC(mddev_unlock, "");
SYMBOL_FLAGS(mddev_unlock, 0x01);
KSYMTAB_FUNC(md_find_rdev_nr_rcu, "");
SYMBOL_FLAGS(md_find_rdev_nr_rcu, 0x01);
KSYMTAB_FUNC(md_find_rdev_rcu, "");
SYMBOL_FLAGS(md_find_rdev_rcu, 0x01);
KSYMTAB_FUNC(md_rdev_clear, "");
SYMBOL_FLAGS(md_rdev_clear, 0x01);
KSYMTAB_FUNC(sync_page_io, "");
SYMBOL_FLAGS(sync_page_io, 0x01);
KSYMTAB_FUNC(md_check_no_bitmap, "");
SYMBOL_FLAGS(md_check_no_bitmap, 0x00);
KSYMTAB_FUNC(md_integrity_register, "");
SYMBOL_FLAGS(md_integrity_register, 0x00);
KSYMTAB_FUNC(md_update_sb, "");
SYMBOL_FLAGS(md_update_sb, 0x00);
KSYMTAB_FUNC(md_rdev_init, "");
SYMBOL_FLAGS(md_rdev_init, 0x01);
KSYMTAB_FUNC(md_idle_sync_thread, "");
SYMBOL_FLAGS(md_idle_sync_thread, 0x01);
KSYMTAB_FUNC(md_frozen_sync_thread, "");
SYMBOL_FLAGS(md_frozen_sync_thread, 0x01);
KSYMTAB_FUNC(md_unfrozen_sync_thread, "");
SYMBOL_FLAGS(md_unfrozen_sync_thread, 0x01);
KSYMTAB_FUNC(mddev_stack_rdev_limits, "");
SYMBOL_FLAGS(mddev_stack_rdev_limits, 0x01);
KSYMTAB_FUNC(mddev_stack_new_rdev, "");
SYMBOL_FLAGS(mddev_stack_new_rdev, 0x01);
KSYMTAB_FUNC(mddev_update_io_opt, "");
SYMBOL_FLAGS(mddev_update_io_opt, 0x01);
KSYMTAB_FUNC(md_init_stacking_limits, "");
SYMBOL_FLAGS(md_init_stacking_limits, 0x01);
KSYMTAB_FUNC(md_run, "");
SYMBOL_FLAGS(md_run, 0x01);
KSYMTAB_FUNC(md_start, "");
SYMBOL_FLAGS(md_start, 0x01);
KSYMTAB_FUNC(md_stop_writes, "");
SYMBOL_FLAGS(md_stop_writes, 0x01);
KSYMTAB_FUNC(md_stop, "");
SYMBOL_FLAGS(md_stop, 0x01);
KSYMTAB_FUNC(md_set_array_sectors, "");
SYMBOL_FLAGS(md_set_array_sectors, 0x00);
KSYMTAB_FUNC(__md_wakeup_thread, "");
SYMBOL_FLAGS(__md_wakeup_thread, 0x00);
KSYMTAB_FUNC(md_register_thread, "");
SYMBOL_FLAGS(md_register_thread, 0x00);
KSYMTAB_FUNC(md_unregister_thread, "");
SYMBOL_FLAGS(md_unregister_thread, 0x00);
KSYMTAB_FUNC(md_error, "");
SYMBOL_FLAGS(md_error, 0x00);
KSYMTAB_FUNC(register_md_submodule, "");
SYMBOL_FLAGS(register_md_submodule, 0x01);
KSYMTAB_FUNC(unregister_md_submodule, "");
SYMBOL_FLAGS(unregister_md_submodule, 0x01);
KSYMTAB_FUNC(md_done_sync, "");
SYMBOL_FLAGS(md_done_sync, 0x00);
KSYMTAB_FUNC(md_sync_error, "");
SYMBOL_FLAGS(md_sync_error, 0x00);
KSYMTAB_FUNC(md_write_start, "");
SYMBOL_FLAGS(md_write_start, 0x00);
KSYMTAB_FUNC(md_write_inc, "");
SYMBOL_FLAGS(md_write_inc, 0x00);
KSYMTAB_FUNC(md_write_end, "");
SYMBOL_FLAGS(md_write_end, 0x00);
KSYMTAB_FUNC(md_submit_discard_bio, "");
SYMBOL_FLAGS(md_submit_discard_bio, 0x01);
KSYMTAB_FUNC(mddev_bio_split_at_reshape_offset, "");
SYMBOL_FLAGS(mddev_bio_split_at_reshape_offset, 0x01);
KSYMTAB_FUNC(md_account_bio, "");
SYMBOL_FLAGS(md_account_bio, 0x01);
KSYMTAB_FUNC(md_allow_write, "");
SYMBOL_FLAGS(md_allow_write, 0x01);
KSYMTAB_FUNC(md_do_sync, "");
SYMBOL_FLAGS(md_do_sync, 0x01);
KSYMTAB_FUNC(md_check_recovery, "");
SYMBOL_FLAGS(md_check_recovery, 0x00);
KSYMTAB_FUNC(md_reap_sync_thread, "");
SYMBOL_FLAGS(md_reap_sync_thread, 0x00);
KSYMTAB_FUNC(md_wait_for_blocked_rdev, "");
SYMBOL_FLAGS(md_wait_for_blocked_rdev, 0x00);
KSYMTAB_FUNC(md_finish_reshape, "");
SYMBOL_FLAGS(md_finish_reshape, 0x00);
KSYMTAB_FUNC(rdev_set_badblocks, "");
SYMBOL_FLAGS(rdev_set_badblocks, 0x01);
KSYMTAB_FUNC(rdev_clear_badblocks, "");
SYMBOL_FLAGS(rdev_clear_badblocks, 0x01);
KSYMTAB_FUNC(md_reload_sb, "");
SYMBOL_FLAGS(md_reload_sb, 0x00);

MODULE_INFO(depends, "");

