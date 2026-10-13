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

KSYMTAB_FUNC(drm_sched_tdr_queue_imm, "");
SYMBOL_FLAGS(drm_sched_tdr_queue_imm, 0x00);
KSYMTAB_FUNC(drm_sched_fault, "");
SYMBOL_FLAGS(drm_sched_fault, 0x00);
KSYMTAB_FUNC(drm_sched_suspend_timeout, "");
SYMBOL_FLAGS(drm_sched_suspend_timeout, 0x00);
KSYMTAB_FUNC(drm_sched_resume_timeout, "");
SYMBOL_FLAGS(drm_sched_resume_timeout, 0x00);
KSYMTAB_FUNC(drm_sched_stop, "");
SYMBOL_FLAGS(drm_sched_stop, 0x00);
KSYMTAB_FUNC(drm_sched_start, "");
SYMBOL_FLAGS(drm_sched_start, 0x00);
KSYMTAB_FUNC(drm_sched_resubmit_jobs, "");
SYMBOL_FLAGS(drm_sched_resubmit_jobs, 0x00);
KSYMTAB_FUNC(drm_sched_job_init, "");
SYMBOL_FLAGS(drm_sched_job_init, 0x00);
KSYMTAB_FUNC(drm_sched_job_arm, "");
SYMBOL_FLAGS(drm_sched_job_arm, 0x00);
KSYMTAB_FUNC(drm_sched_job_add_dependency, "");
SYMBOL_FLAGS(drm_sched_job_add_dependency, 0x00);
KSYMTAB_FUNC(drm_sched_job_add_syncobj_dependency, "");
SYMBOL_FLAGS(drm_sched_job_add_syncobj_dependency, 0x00);
KSYMTAB_FUNC(drm_sched_job_add_resv_dependencies, "");
SYMBOL_FLAGS(drm_sched_job_add_resv_dependencies, 0x00);
KSYMTAB_FUNC(drm_sched_job_add_implicit_dependencies, "");
SYMBOL_FLAGS(drm_sched_job_add_implicit_dependencies, 0x00);
KSYMTAB_FUNC(drm_sched_job_has_dependency, "");
SYMBOL_FLAGS(drm_sched_job_has_dependency, 0x00);
KSYMTAB_FUNC(drm_sched_job_cleanup, "");
SYMBOL_FLAGS(drm_sched_job_cleanup, 0x00);
KSYMTAB_FUNC(drm_sched_pick_best, "");
SYMBOL_FLAGS(drm_sched_pick_best, 0x00);
KSYMTAB_FUNC(drm_sched_init, "");
SYMBOL_FLAGS(drm_sched_init, 0x00);
KSYMTAB_FUNC(drm_sched_fini, "");
SYMBOL_FLAGS(drm_sched_fini, 0x00);
KSYMTAB_FUNC(drm_sched_increase_karma, "");
SYMBOL_FLAGS(drm_sched_increase_karma, 0x00);
KSYMTAB_FUNC(drm_sched_wqueue_ready, "");
SYMBOL_FLAGS(drm_sched_wqueue_ready, 0x00);
KSYMTAB_FUNC(drm_sched_wqueue_stop, "");
SYMBOL_FLAGS(drm_sched_wqueue_stop, 0x00);
KSYMTAB_FUNC(drm_sched_wqueue_start, "");
SYMBOL_FLAGS(drm_sched_wqueue_start, 0x00);
KSYMTAB_FUNC(drm_sched_is_stopped, "");
SYMBOL_FLAGS(drm_sched_is_stopped, 0x00);
KSYMTAB_FUNC(drm_sched_job_is_signaled, "");
SYMBOL_FLAGS(drm_sched_job_is_signaled, 0x00);
KSYMTAB_FUNC(to_drm_sched_fence, "");
SYMBOL_FLAGS(to_drm_sched_fence, 0x00);
KSYMTAB_FUNC(drm_sched_entity_init, "");
SYMBOL_FLAGS(drm_sched_entity_init, 0x00);
KSYMTAB_FUNC(drm_sched_entity_modify_sched, "");
SYMBOL_FLAGS(drm_sched_entity_modify_sched, 0x00);
KSYMTAB_FUNC(drm_sched_entity_error, "");
SYMBOL_FLAGS(drm_sched_entity_error, 0x00);
KSYMTAB_FUNC(drm_sched_entity_kill, "");
SYMBOL_FLAGS(drm_sched_entity_kill, 0x00);
KSYMTAB_FUNC(drm_sched_entity_flush, "");
SYMBOL_FLAGS(drm_sched_entity_flush, 0x00);
KSYMTAB_FUNC(drm_sched_entity_fini, "");
SYMBOL_FLAGS(drm_sched_entity_fini, 0x00);
KSYMTAB_FUNC(drm_sched_entity_destroy, "");
SYMBOL_FLAGS(drm_sched_entity_destroy, 0x00);
KSYMTAB_FUNC(drm_sched_entity_set_priority, "");
SYMBOL_FLAGS(drm_sched_entity_set_priority, 0x00);
KSYMTAB_FUNC(drm_sched_entity_push_job, "");
SYMBOL_FLAGS(drm_sched_entity_push_job, 0x00);

MODULE_INFO(depends, "");

