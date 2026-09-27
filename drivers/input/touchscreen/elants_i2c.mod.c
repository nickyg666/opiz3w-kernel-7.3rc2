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

MODULE_ALIAS("of:N*T*Celan,ekth3500");
MODULE_ALIAS("of:N*T*Celan,ekth3500C*");
MODULE_ALIAS("of:N*T*Celan,ektf3624");
MODULE_ALIAS("of:N*T*Celan,ektf3624C*");
MODULE_ALIAS("i2c:elants_i2c");
MODULE_ALIAS("i2c:ekth3500");
MODULE_ALIAS("i2c:ektf3624");
