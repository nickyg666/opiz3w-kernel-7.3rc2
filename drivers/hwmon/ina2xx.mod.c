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

MODULE_ALIAS("of:N*T*Csilergy,sy24655");
MODULE_ALIAS("of:N*T*Csilergy,sy24655C*");
MODULE_ALIAS("of:N*T*Cti,ina219");
MODULE_ALIAS("of:N*T*Cti,ina219C*");
MODULE_ALIAS("of:N*T*Cti,ina220");
MODULE_ALIAS("of:N*T*Cti,ina220C*");
MODULE_ALIAS("of:N*T*Cti,ina226");
MODULE_ALIAS("of:N*T*Cti,ina226C*");
MODULE_ALIAS("of:N*T*Cti,ina230");
MODULE_ALIAS("of:N*T*Cti,ina230C*");
MODULE_ALIAS("of:N*T*Cti,ina231");
MODULE_ALIAS("of:N*T*Cti,ina231C*");
MODULE_ALIAS("of:N*T*Cti,ina232");
MODULE_ALIAS("of:N*T*Cti,ina232C*");
MODULE_ALIAS("of:N*T*Cti,ina234");
MODULE_ALIAS("of:N*T*Cti,ina234C*");
MODULE_ALIAS("of:N*T*Cti,ina260");
MODULE_ALIAS("of:N*T*Cti,ina260C*");
MODULE_ALIAS("i2c:ina219");
MODULE_ALIAS("i2c:ina220");
MODULE_ALIAS("i2c:ina226");
MODULE_ALIAS("i2c:ina230");
MODULE_ALIAS("i2c:ina231");
MODULE_ALIAS("i2c:ina232");
MODULE_ALIAS("i2c:ina234");
MODULE_ALIAS("i2c:ina260");
MODULE_ALIAS("i2c:sy24655");
