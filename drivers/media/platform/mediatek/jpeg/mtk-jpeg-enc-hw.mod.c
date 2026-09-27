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

KSYMTAB_FUNC(mtk_jpeg_enc_reset, "");
SYMBOL_FLAGS(mtk_jpeg_enc_reset, 0x01);
KSYMTAB_FUNC(mtk_jpeg_enc_get_file_size, "");
SYMBOL_FLAGS(mtk_jpeg_enc_get_file_size, 0x01);
KSYMTAB_FUNC(mtk_jpeg_enc_start, "");
SYMBOL_FLAGS(mtk_jpeg_enc_start, 0x01);
KSYMTAB_FUNC(mtk_jpeg_set_enc_src, "");
SYMBOL_FLAGS(mtk_jpeg_set_enc_src, 0x01);
KSYMTAB_FUNC(mtk_jpeg_set_enc_dst, "");
SYMBOL_FLAGS(mtk_jpeg_set_enc_dst, 0x01);
KSYMTAB_FUNC(mtk_jpeg_set_enc_params, "");
SYMBOL_FLAGS(mtk_jpeg_set_enc_params, 0x01);

MODULE_INFO(depends, "videobuf2-common,v4l2-mem2mem");

MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgenc-hw");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-jpgenc-hwC*");
