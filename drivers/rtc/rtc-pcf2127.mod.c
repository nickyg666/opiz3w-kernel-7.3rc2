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

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("spi:pcf2131");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("i2c:pcf2131");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2131");
MODULE_ALIAS("of:N*T*Cnxp,pcf2131C*");
