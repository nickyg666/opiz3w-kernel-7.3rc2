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


MODULE_INFO(depends, "i2c-hid");

MODULE_ALIAS("of:N*T*Celan,ekth6915");
MODULE_ALIAS("of:N*T*Celan,ekth6915C*");
MODULE_ALIAS("of:N*T*Celan,ekth6a12nay");
MODULE_ALIAS("of:N*T*Celan,ekth6a12nayC*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8112");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8112C*");
MODULE_ALIAS("of:N*T*Cilitek,ili9882t");
MODULE_ALIAS("of:N*T*Cilitek,ili9882tC*");
MODULE_ALIAS("of:N*T*Cilitek,ili2901");
MODULE_ALIAS("of:N*T*Cilitek,ili2901C*");
MODULE_ALIAS("of:N*T*Cparade,tc3408");
MODULE_ALIAS("of:N*T*Cparade,tc3408C*");
