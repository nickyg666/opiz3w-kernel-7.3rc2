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

KSYMTAB_FUNC(mtk_jpeg_dec_fill_param, "");
SYMBOL_FLAGS(mtk_jpeg_dec_fill_param, 0x01);
KSYMTAB_FUNC(mtk_jpeg_dec_get_int_status, "");
SYMBOL_FLAGS(mtk_jpeg_dec_get_int_status, 0x01);
KSYMTAB_FUNC(mtk_jpeg_dec_enum_result, "");
SYMBOL_FLAGS(mtk_jpeg_dec_enum_result, 0x01);
KSYMTAB_FUNC(mtk_jpeg_dec_start, "");
SYMBOL_FLAGS(mtk_jpeg_dec_start, 0x01);
KSYMTAB_FUNC(mtk_jpeg_dec_reset, "");
SYMBOL_FLAGS(mtk_jpeg_dec_reset, 0x01);
KSYMTAB_FUNC(mtk_jpeg_dec_set_config, "");
SYMBOL_FLAGS(mtk_jpeg_dec_set_config, 0x01);

MODULE_INFO(depends, "videobuf2-common,v4l2-mem2mem");

MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgdec-hw");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgdec-hwC*");
