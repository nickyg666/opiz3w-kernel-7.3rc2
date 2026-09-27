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

KSYMTAB_FUNC(mdp_cmdq_send, "");
SYMBOL_FLAGS(mdp_cmdq_send, 0x01);

MODULE_INFO(depends, "mtk-cmdq-helper,v4l2-mem2mem,videobuf2-v4l2,videodev,mtk-cmdq-mailbox,mtk-mutex,mtk-mmsys,videobuf2-dma-contig,mtk_scp,mtk_scp_ipi,videobuf2-common");

MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mdp3-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mdp3-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-mdp3-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-mdp3-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mdp3-rdma");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mdp3-rdmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mdp3-wrot");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-mdp3-wrotC*");
