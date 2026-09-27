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


MODULE_INFO(depends, "rc-core");

MODULE_ALIAS("of:N*T*Callwinner,sun4i-a10-ir");
MODULE_ALIAS("of:N*T*Callwinner,sun4i-a10-irC*");
MODULE_ALIAS("of:N*T*Callwinner,sun5i-a13-ir");
MODULE_ALIAS("of:N*T*Callwinner,sun5i-a13-irC*");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-ir");
MODULE_ALIAS("of:N*T*Callwinner,sun6i-a31-irC*");
