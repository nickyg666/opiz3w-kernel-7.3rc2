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

MODULE_ALIAS("of:N*T*Cdlg,da9211");
MODULE_ALIAS("of:N*T*Cdlg,da9211C*");
MODULE_ALIAS("of:N*T*Cdlg,da9212");
MODULE_ALIAS("of:N*T*Cdlg,da9212C*");
MODULE_ALIAS("of:N*T*Cdlg,da9213");
MODULE_ALIAS("of:N*T*Cdlg,da9213C*");
MODULE_ALIAS("of:N*T*Cdlg,da9223");
MODULE_ALIAS("of:N*T*Cdlg,da9223C*");
MODULE_ALIAS("of:N*T*Cdlg,da9214");
MODULE_ALIAS("of:N*T*Cdlg,da9214C*");
MODULE_ALIAS("of:N*T*Cdlg,da9224");
MODULE_ALIAS("of:N*T*Cdlg,da9224C*");
MODULE_ALIAS("of:N*T*Cdlg,da9215");
MODULE_ALIAS("of:N*T*Cdlg,da9215C*");
MODULE_ALIAS("of:N*T*Cdlg,da9225");
MODULE_ALIAS("of:N*T*Cdlg,da9225C*");
MODULE_ALIAS("i2c:da9211");
MODULE_ALIAS("i2c:da9212");
MODULE_ALIAS("i2c:da9213");
MODULE_ALIAS("i2c:da9223");
MODULE_ALIAS("i2c:da9214");
MODULE_ALIAS("i2c:da9224");
MODULE_ALIAS("i2c:da9215");
MODULE_ALIAS("i2c:da9225");
