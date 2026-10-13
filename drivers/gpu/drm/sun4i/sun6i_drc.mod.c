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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-drc");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-drcC*");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31s-drc");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31s-drcC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a23-drc");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a23-drcC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a33-drc");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a33-drcC*");
MODULE_ALIAS("of:N*T*Callwinner,sun9i-a80-drc");
MODULE_ALIAS("of:N*T*Callwinner,sun9i-a80-drcC*");
