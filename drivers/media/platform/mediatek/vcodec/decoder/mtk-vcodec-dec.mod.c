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

KSYMTAB_FUNC(mtk_vcodec_init_dec_clk, "");
SYMBOL_FLAGS(mtk_vcodec_init_dec_clk, 0x01);
KSYMTAB_FUNC(mtk_vcodec_dec_enable_hardware, "");
SYMBOL_FLAGS(mtk_vcodec_dec_enable_hardware, 0x01);
KSYMTAB_FUNC(mtk_vcodec_dec_disable_hardware, "");
SYMBOL_FLAGS(mtk_vcodec_dec_disable_hardware, 0x01);

MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,mc,v4l2-h264,mtk-vcodec-common,videobuf2-dma-contig,mtk-vcodec-dbgfs,v4l2-vp9,videobuf2-common");

MODULE_ALIAS("of:N*T*Cmediatek,mt8173-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vcodec-decC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vcodec-dec");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vcodec-decC*");
