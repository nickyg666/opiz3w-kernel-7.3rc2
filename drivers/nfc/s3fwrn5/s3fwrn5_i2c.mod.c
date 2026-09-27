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


MODULE_INFO(depends, "s3fwrn5");

MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2c");
MODULE_ALIAS("of:N*T*Csamsung,s3fwrn5-i2cC*");
MODULE_ALIAS("i2c:s3fwrn5_i2c");
