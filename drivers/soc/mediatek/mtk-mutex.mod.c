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

KSYMTAB_FUNC(mtk_mutex_get, "");
SYMBOL_FLAGS(mtk_mutex_get, 0x01);
KSYMTAB_FUNC(mtk_mutex_put, "");
SYMBOL_FLAGS(mtk_mutex_put, 0x01);
KSYMTAB_FUNC(mtk_mutex_prepare, "");
SYMBOL_FLAGS(mtk_mutex_prepare, 0x01);
KSYMTAB_FUNC(mtk_mutex_unprepare, "");
SYMBOL_FLAGS(mtk_mutex_unprepare, 0x01);
KSYMTAB_FUNC(mtk_mutex_add_comp, "");
SYMBOL_FLAGS(mtk_mutex_add_comp, 0x01);
KSYMTAB_FUNC(mtk_mutex_remove_comp, "");
SYMBOL_FLAGS(mtk_mutex_remove_comp, 0x01);
KSYMTAB_FUNC(mtk_mutex_enable, "");
SYMBOL_FLAGS(mtk_mutex_enable, 0x01);
KSYMTAB_FUNC(mtk_mutex_enable_by_cmdq, "");
SYMBOL_FLAGS(mtk_mutex_enable_by_cmdq, 0x01);
KSYMTAB_FUNC(mtk_mutex_disable, "");
SYMBOL_FLAGS(mtk_mutex_disable, 0x01);
KSYMTAB_FUNC(mtk_mutex_acquire, "");
SYMBOL_FLAGS(mtk_mutex_acquire, 0x01);
KSYMTAB_FUNC(mtk_mutex_release, "");
SYMBOL_FLAGS(mtk_mutex_release, 0x01);
KSYMTAB_FUNC(mtk_mutex_write_mod, "");
SYMBOL_FLAGS(mtk_mutex_write_mod, 0x01);
KSYMTAB_FUNC(mtk_mutex_write_sof, "");
SYMBOL_FLAGS(mtk_mutex_write_sof, 0x01);

MODULE_INFO(depends, "mtk-cmdq-helper");

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8167-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-mdp3-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-mdp3-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vpp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-vpp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-disp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vpp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-vpp-mutexC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8365-disp-mutex");
MODULE_ALIAS("of:N*T*Cmediatek,mt8365-disp-mutexC*");
