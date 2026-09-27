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

MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpio");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpioC*");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpi");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpiC*");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpo");
MODULE_ALIAS("of:N*T*Ckontron,sl28cpld-gpoC*");
