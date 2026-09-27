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

MODULE_ALIAS("of:N*T*Callwinner,sun4i-a10-wdt");
MODULE_ALIAS("of:N*T*Callwinner,sun4i-a10-wdtC*");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-wdt");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-wdtC*");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-wdt");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-wdtC*");
MODULE_ALIAS("of:N*T*Callwinner,sun55i-a523-wdt");
MODULE_ALIAS("of:N*T*Callwinner,sun55i-a523-wdtC*");

MODULE_INFO(srcversion, "7C228EB7BAC5BE6BC5F9135");
