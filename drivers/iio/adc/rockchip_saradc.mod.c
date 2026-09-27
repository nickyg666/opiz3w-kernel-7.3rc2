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


MODULE_INFO(depends, "industrialio-triggered-buffer");

MODULE_ALIAS("of:N*T*Crockchip,saradc");
MODULE_ALIAS("of:N*T*Crockchip,saradcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-tsadc");
MODULE_ALIAS("of:N*T*Crockchip,rk3066-tsadcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-saradc");
MODULE_ALIAS("of:N*T*Crockchip,rk3399-saradcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3528-saradc");
MODULE_ALIAS("of:N*T*Crockchip,rk3528-saradcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3562-saradc");
MODULE_ALIAS("of:N*T*Crockchip,rk3562-saradcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-saradc");
MODULE_ALIAS("of:N*T*Crockchip,rk3568-saradcC*");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-saradc");
MODULE_ALIAS("of:N*T*Crockchip,rk3588-saradcC*");
