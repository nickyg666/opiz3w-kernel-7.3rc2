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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt8195-svs");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-svsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-svs");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-svsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-svs");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-svsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-svs");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-svsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-svs");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-svsC*");
