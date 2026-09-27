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

MODULE_ALIAS("of:N*T*Cmediatek,mt2701-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2701-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt2712-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt7622-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8173-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-auxadcC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-auxadc");
MODULE_ALIAS("of:N*T*Cmediatek,mt6765-auxadcC*");
