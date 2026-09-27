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

KSYMTAB_FUNC(v4l2_h264_init_reflist_builder, "");
SYMBOL_FLAGS(v4l2_h264_init_reflist_builder, 0x01);
KSYMTAB_FUNC(v4l2_h264_build_p_ref_list, "");
SYMBOL_FLAGS(v4l2_h264_build_p_ref_list, 0x01);
KSYMTAB_FUNC(v4l2_h264_build_b_ref_lists, "");
SYMBOL_FLAGS(v4l2_h264_build_b_ref_lists, 0x01);

MODULE_INFO(depends, "");

