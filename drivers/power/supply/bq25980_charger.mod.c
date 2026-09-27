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

MODULE_ALIAS("of:N*T*Cti,bq25980");
MODULE_ALIAS("of:N*T*Cti,bq25980C*");
MODULE_ALIAS("of:N*T*Cti,bq25975");
MODULE_ALIAS("of:N*T*Cti,bq25975C*");
MODULE_ALIAS("of:N*T*Cti,bq25960");
MODULE_ALIAS("of:N*T*Cti,bq25960C*");
MODULE_ALIAS("i2c:bq25980");
MODULE_ALIAS("i2c:bq25975");
MODULE_ALIAS("i2c:bq25960");
