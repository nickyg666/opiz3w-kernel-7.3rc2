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

MODULE_ALIAS("platform:max17042");
MODULE_ALIAS("platform:max17047");
MODULE_ALIAS("platform:max17050");
MODULE_ALIAS("platform:max17055");
MODULE_ALIAS("platform:max77705-battery");
MODULE_ALIAS("platform:max77849-battery");
MODULE_ALIAS("i2c:max17042");
MODULE_ALIAS("i2c:max17047");
MODULE_ALIAS("i2c:max17050");
MODULE_ALIAS("i2c:max17055");
MODULE_ALIAS("i2c:max77759-fg");
MODULE_ALIAS("i2c:max77849-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max17042");
MODULE_ALIAS("of:N*T*Cmaxim,max17042C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17047");
MODULE_ALIAS("of:N*T*Cmaxim,max17047C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17050");
MODULE_ALIAS("of:N*T*Cmaxim,max17050C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17055");
MODULE_ALIAS("of:N*T*Cmaxim,max17055C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77705-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77705-batteryC*");
MODULE_ALIAS("of:N*T*Cmaxim,max77759-fg");
MODULE_ALIAS("of:N*T*Cmaxim,max77759-fgC*");
MODULE_ALIAS("of:N*T*Cmaxim,max77849-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77849-batteryC*");
