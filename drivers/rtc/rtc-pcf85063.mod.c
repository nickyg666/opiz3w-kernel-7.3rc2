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

MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8063");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8063C*");
MODULE_ALIAS("spi:rv8063");
MODULE_ALIAS("of:N*T*Cnxp,pca85073a");
MODULE_ALIAS("of:N*T*Cnxp,pca85073aC*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063tp");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063tpC*");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063a");
MODULE_ALIAS("of:N*T*Cnxp,pcf85063aC*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8263");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8263C*");
MODULE_ALIAS("i2c:pca85073a");
MODULE_ALIAS("i2c:pcf85063");
MODULE_ALIAS("i2c:pcf85063tp");
MODULE_ALIAS("i2c:pcf85063a");
MODULE_ALIAS("i2c:rv8263");
