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

KSYMTAB_FUNC(scp_get, "");
SYMBOL_FLAGS(scp_get, 0x01);
KSYMTAB_FUNC(scp_put, "");
SYMBOL_FLAGS(scp_put, 0x01);
KSYMTAB_FUNC(scp_get_device, "");
SYMBOL_FLAGS(scp_get_device, 0x01);
KSYMTAB_FUNC(scp_get_rproc, "");
SYMBOL_FLAGS(scp_get_rproc, 0x01);
KSYMTAB_FUNC(scp_get_vdec_hw_capa, "");
SYMBOL_FLAGS(scp_get_vdec_hw_capa, 0x01);
KSYMTAB_FUNC(scp_get_venc_hw_capa, "");
SYMBOL_FLAGS(scp_get_venc_hw_capa, 0x01);
KSYMTAB_FUNC(scp_mapping_dm_addr, "");
SYMBOL_FLAGS(scp_mapping_dm_addr, 0x01);

MODULE_INFO(depends, "mtk_scp_ipi,mtk_rpmsg");

MODULE_ALIAS("of:N*T*Cmediatek,mt8183-scp");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-scpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-scp");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-scpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-scp");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-scpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-scp-dual");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-scp-dualC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-scp");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-scpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-scp");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-scpC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-scp-dual");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-scp-dualC*");
