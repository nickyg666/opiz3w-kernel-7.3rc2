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

KSYMTAB_DATA(v4l2_vp9_kf_y_mode_prob, "");
SYMBOL_FLAGS(v4l2_vp9_kf_y_mode_prob, 0x01);
KSYMTAB_DATA(v4l2_vp9_kf_partition_probs, "");
SYMBOL_FLAGS(v4l2_vp9_kf_partition_probs, 0x01);
KSYMTAB_DATA(v4l2_vp9_kf_uv_mode_prob, "");
SYMBOL_FLAGS(v4l2_vp9_kf_uv_mode_prob, 0x01);
KSYMTAB_DATA(v4l2_vp9_default_probs, "");
SYMBOL_FLAGS(v4l2_vp9_default_probs, 0x01);
KSYMTAB_FUNC(v4l2_vp9_fw_update_probs, "");
SYMBOL_FLAGS(v4l2_vp9_fw_update_probs, 0x01);
KSYMTAB_FUNC(v4l2_vp9_reset_frame_ctx, "");
SYMBOL_FLAGS(v4l2_vp9_reset_frame_ctx, 0x01);
KSYMTAB_FUNC(v4l2_vp9_adapt_coef_probs, "");
SYMBOL_FLAGS(v4l2_vp9_adapt_coef_probs, 0x01);
KSYMTAB_FUNC(v4l2_vp9_adapt_noncoef_probs, "");
SYMBOL_FLAGS(v4l2_vp9_adapt_noncoef_probs, 0x01);
KSYMTAB_FUNC(v4l2_vp9_seg_feat_enabled, "");
SYMBOL_FLAGS(v4l2_vp9_seg_feat_enabled, 0x01);

MODULE_INFO(depends, "");

