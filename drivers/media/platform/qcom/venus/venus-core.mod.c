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

KSYMTAB_FUNC(venus_close_common, "");
SYMBOL_FLAGS(venus_close_common, 0x01);
KSYMTAB_FUNC(venus_helper_check_codec, "");
SYMBOL_FLAGS(venus_helper_check_codec, 0x01);
KSYMTAB_FUNC(venus_helper_queue_dpb_bufs, "");
SYMBOL_FLAGS(venus_helper_queue_dpb_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_free_dpb_bufs, "");
SYMBOL_FLAGS(venus_helper_free_dpb_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_alloc_dpb_bufs, "");
SYMBOL_FLAGS(venus_helper_alloc_dpb_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_intbufs_alloc, "");
SYMBOL_FLAGS(venus_helper_intbufs_alloc, 0x01);
KSYMTAB_FUNC(venus_helper_intbufs_free, "");
SYMBOL_FLAGS(venus_helper_intbufs_free, 0x01);
KSYMTAB_FUNC(venus_helper_intbufs_realloc, "");
SYMBOL_FLAGS(venus_helper_intbufs_realloc, 0x01);
KSYMTAB_FUNC(venus_helper_get_ts_metadata, "");
SYMBOL_FLAGS(venus_helper_get_ts_metadata, 0x01);
KSYMTAB_FUNC(venus_helper_unregister_bufs, "");
SYMBOL_FLAGS(venus_helper_unregister_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_get_bufreq, "");
SYMBOL_FLAGS(venus_helper_get_bufreq, 0x01);
KSYMTAB_FUNC(venus_helper_get_profile_level, "");
SYMBOL_FLAGS(venus_helper_get_profile_level, 0x01);
KSYMTAB_FUNC(venus_helper_set_profile_level, "");
SYMBOL_FLAGS(venus_helper_set_profile_level, 0x01);
KSYMTAB_FUNC(venus_helper_get_framesz_raw, "");
SYMBOL_FLAGS(venus_helper_get_framesz_raw, 0x01);
KSYMTAB_FUNC(venus_helper_get_framesz, "");
SYMBOL_FLAGS(venus_helper_get_framesz, 0x01);
KSYMTAB_FUNC(venus_helper_set_input_resolution, "");
SYMBOL_FLAGS(venus_helper_set_input_resolution, 0x01);
KSYMTAB_FUNC(venus_helper_set_output_resolution, "");
SYMBOL_FLAGS(venus_helper_set_output_resolution, 0x01);
KSYMTAB_FUNC(venus_helper_set_work_mode, "");
SYMBOL_FLAGS(venus_helper_set_work_mode, 0x01);
KSYMTAB_FUNC(venus_helper_set_format_constraints, "");
SYMBOL_FLAGS(venus_helper_set_format_constraints, 0x01);
KSYMTAB_FUNC(venus_helper_set_num_bufs, "");
SYMBOL_FLAGS(venus_helper_set_num_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_set_raw_format, "");
SYMBOL_FLAGS(venus_helper_set_raw_format, 0x01);
KSYMTAB_FUNC(venus_helper_set_color_format, "");
SYMBOL_FLAGS(venus_helper_set_color_format, 0x01);
KSYMTAB_FUNC(venus_helper_set_multistream, "");
SYMBOL_FLAGS(venus_helper_set_multistream, 0x01);
KSYMTAB_FUNC(venus_helper_set_dyn_bufmode, "");
SYMBOL_FLAGS(venus_helper_set_dyn_bufmode, 0x01);
KSYMTAB_FUNC(venus_helper_set_bufsize, "");
SYMBOL_FLAGS(venus_helper_set_bufsize, 0x01);
KSYMTAB_FUNC(venus_helper_get_opb_size, "");
SYMBOL_FLAGS(venus_helper_get_opb_size, 0x01);
KSYMTAB_FUNC(venus_helper_release_buf_ref, "");
SYMBOL_FLAGS(venus_helper_release_buf_ref, 0x01);
KSYMTAB_FUNC(venus_helper_acquire_buf_ref, "");
SYMBOL_FLAGS(venus_helper_acquire_buf_ref, 0x01);
KSYMTAB_FUNC(venus_helper_find_buf, "");
SYMBOL_FLAGS(venus_helper_find_buf, 0x01);
KSYMTAB_FUNC(venus_helper_change_dpb_owner, "");
SYMBOL_FLAGS(venus_helper_change_dpb_owner, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_buf_init, "");
SYMBOL_FLAGS(venus_helper_vb2_buf_init, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_buf_prepare, "");
SYMBOL_FLAGS(venus_helper_vb2_buf_prepare, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_buf_queue, "");
SYMBOL_FLAGS(venus_helper_vb2_buf_queue, 0x01);
KSYMTAB_FUNC(venus_helper_buffers_done, "");
SYMBOL_FLAGS(venus_helper_buffers_done, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_stop_streaming, "");
SYMBOL_FLAGS(venus_helper_vb2_stop_streaming, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_queue_error, "");
SYMBOL_FLAGS(venus_helper_vb2_queue_error, 0x01);
KSYMTAB_FUNC(venus_helper_process_initial_cap_bufs, "");
SYMBOL_FLAGS(venus_helper_process_initial_cap_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_process_initial_out_bufs, "");
SYMBOL_FLAGS(venus_helper_process_initial_out_bufs, 0x01);
KSYMTAB_FUNC(venus_helper_vb2_start_streaming, "");
SYMBOL_FLAGS(venus_helper_vb2_start_streaming, 0x01);
KSYMTAB_FUNC(venus_helper_m2m_device_run, "");
SYMBOL_FLAGS(venus_helper_m2m_device_run, 0x01);
KSYMTAB_FUNC(venus_helper_m2m_job_abort, "");
SYMBOL_FLAGS(venus_helper_m2m_job_abort, 0x01);
KSYMTAB_FUNC(venus_helper_session_init, "");
SYMBOL_FLAGS(venus_helper_session_init, 0x01);
KSYMTAB_FUNC(venus_helper_init_instance, "");
SYMBOL_FLAGS(venus_helper_init_instance, 0x01);
KSYMTAB_FUNC(venus_helper_get_out_fmts, "");
SYMBOL_FLAGS(venus_helper_get_out_fmts, 0x01);
KSYMTAB_FUNC(venus_helper_check_format, "");
SYMBOL_FLAGS(venus_helper_check_format, 0x01);
KSYMTAB_FUNC(venus_helper_set_stride, "");
SYMBOL_FLAGS(venus_helper_set_stride, 0x01);
KSYMTAB_FUNC(hfi_session_create, "");
SYMBOL_FLAGS(hfi_session_create, 0x01);
KSYMTAB_FUNC(hfi_session_init, "");
SYMBOL_FLAGS(hfi_session_init, 0x01);
KSYMTAB_FUNC(hfi_session_destroy, "");
SYMBOL_FLAGS(hfi_session_destroy, 0x01);
KSYMTAB_FUNC(hfi_session_deinit, "");
SYMBOL_FLAGS(hfi_session_deinit, 0x01);
KSYMTAB_FUNC(hfi_session_start, "");
SYMBOL_FLAGS(hfi_session_start, 0x01);
KSYMTAB_FUNC(hfi_session_stop, "");
SYMBOL_FLAGS(hfi_session_stop, 0x01);
KSYMTAB_FUNC(hfi_session_continue, "");
SYMBOL_FLAGS(hfi_session_continue, 0x01);
KSYMTAB_FUNC(hfi_session_abort, "");
SYMBOL_FLAGS(hfi_session_abort, 0x01);
KSYMTAB_FUNC(hfi_session_unload_res, "");
SYMBOL_FLAGS(hfi_session_unload_res, 0x01);
KSYMTAB_FUNC(hfi_session_flush, "");
SYMBOL_FLAGS(hfi_session_flush, 0x01);
KSYMTAB_FUNC(hfi_session_get_property, "");
SYMBOL_FLAGS(hfi_session_get_property, 0x01);
KSYMTAB_FUNC(hfi_session_set_property, "");
SYMBOL_FLAGS(hfi_session_set_property, 0x01);
KSYMTAB_FUNC(hfi_session_process_buf, "");
SYMBOL_FLAGS(hfi_session_process_buf, 0x01);

MODULE_INFO(depends, "videodev,v4l2-mem2mem,videobuf2-common,mdt_loader");

MODULE_ALIAS("of:N*T*Cqcom,msm8916-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8939-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8939-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-venus");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-venus");
MODULE_ALIAS("of:N*T*Cqcom,qcm2290-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-venus");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-venus");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus-v2");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-venus-v2C*");
