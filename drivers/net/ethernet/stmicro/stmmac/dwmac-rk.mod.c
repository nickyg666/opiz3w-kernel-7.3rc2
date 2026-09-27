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


MODULE_INFO(depends, "stmmac-platform,stmmac");

MODULE_ALIAS("of:N*T*Crockchip,px30-gmac");
MODULE_ALIAS("of:N*T*Crockchip,px30-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3308-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3308-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3528-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3528-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1108-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rv1108-gmacC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-gmac");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-gmacC*");
