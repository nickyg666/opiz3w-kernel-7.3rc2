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

MODULE_ALIAS("of:N*T*Cmediatek,mt7987-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt7987-lvts-apC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt7988-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt7988-lvts-apC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-lvts");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-lvtsC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-lvts-mcu");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-lvts-mcuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-lvts-apC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-lvts-mcu");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-lvts-mcuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-lvts-apC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-lvts-mcu");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-lvts-mcuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8195-lvts-apC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-lvts-mcu");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-lvts-mcuC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-lvts-ap");
MODULE_ALIAS("of:N*T*Cmediatek,mt8196-lvts-apC*");
