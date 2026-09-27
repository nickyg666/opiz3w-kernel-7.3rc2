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

KSYMTAB_FUNC(v4l2_isp_params_validate_buffer_size, "");
SYMBOL_FLAGS(v4l2_isp_params_validate_buffer_size, 0x01);
KSYMTAB_FUNC(v4l2_isp_params_validate_buffer, "");
SYMBOL_FLAGS(v4l2_isp_params_validate_buffer, 0x01);
KSYMTAB_FUNC(v4l2_isp_stats_init_buffer, "");
SYMBOL_FLAGS(v4l2_isp_stats_init_buffer, 0x01);
KSYMTAB_FUNC(v4l2_isp_stats_init_block, "");
SYMBOL_FLAGS(v4l2_isp_stats_init_block, 0x01);

MODULE_INFO(depends, "");

