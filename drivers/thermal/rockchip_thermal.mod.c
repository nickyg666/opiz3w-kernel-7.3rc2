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

MODULE_ALIAS("of:N*T*Crockchip,px30-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,px30-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rv1108-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rv1108-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3228-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3288-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3328-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3366-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3368-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3576-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-tsadcC*");
