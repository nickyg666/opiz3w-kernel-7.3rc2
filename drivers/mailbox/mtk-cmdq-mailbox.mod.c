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

KSYMTAB_FUNC(cmdq_get_mbox_priv, "");
SYMBOL_FLAGS(cmdq_get_mbox_priv, 0x00);
KSYMTAB_FUNC(cmdq_get_shift_pa, "");
SYMBOL_FLAGS(cmdq_get_shift_pa, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6779-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt6779-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-gceC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-gce");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-gceC*");
