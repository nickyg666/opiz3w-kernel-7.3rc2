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

MODULE_ALIAS("of:N*T*Csocionext,uniphier-pro4-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-pro4-ave4C*");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-pxs2-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-pxs2-ave4C*");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-ld11-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-ld11-ave4C*");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-ld20-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-ld20-ave4C*");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-pxs3-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-pxs3-ave4C*");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-nx1-ave4");
MODULE_ALIAS("of:N*T*Csocionext,uniphier-nx1-ave4C*");
