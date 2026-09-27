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

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8565");
MODULE_ALIAS("of:N*T*Cnxp,pca8565C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");
MODULE_ALIAS("i2c:pca8565");
