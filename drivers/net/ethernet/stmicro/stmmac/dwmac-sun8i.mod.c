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


MODULE_INFO(depends, "stmmac,stmmac-platform");

MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-emac");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-h3-emacC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-v3s-emac");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-v3s-emacC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-emac");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-a83t-emacC*");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-gmac");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-gmacC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-emac");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-a64-emacC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-emac");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-emacC*");
