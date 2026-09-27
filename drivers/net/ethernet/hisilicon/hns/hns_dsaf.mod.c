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


MODULE_INFO(depends, "hnae");

MODULE_ALIAS("of:N*T*Chisilicon,hns-dsaf-v1");
MODULE_ALIAS("of:N*T*Chisilicon,hns-dsaf-v1C*");
MODULE_ALIAS("of:N*T*Chisilicon,hns-dsaf-v2");
MODULE_ALIAS("of:N*T*Chisilicon,hns-dsaf-v2C*");
MODULE_ALIAS("acpi*:HISI00B1:*");
MODULE_ALIAS("acpi*:HISI00B2:*");

MODULE_INFO(srcversion, "153216395ACCC23311E303B");
