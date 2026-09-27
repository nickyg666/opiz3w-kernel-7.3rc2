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

MODULE_ALIAS("of:N*T*Crockchip,px30-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,px30-dsi-dphyC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,rk3128-dsi-dphyC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-dsi-dphyC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,rk3506-dsi-dphyC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-dsi-dphyC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-dsi-dphy");
MODULE_ALIAS("of:N*T*Crockchip,rv1126-dsi-dphyC*");
