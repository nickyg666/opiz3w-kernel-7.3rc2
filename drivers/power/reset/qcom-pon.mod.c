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

MODULE_ALIAS("of:N*T*Cqcom,pm8916-pon");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-ponC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-pon");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-ponC*");
MODULE_ALIAS("of:N*T*Cqcom,pms405-pon");
MODULE_ALIAS("of:N*T*Cqcom,pms405-ponC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8998-pon");
MODULE_ALIAS("of:N*T*Cqcom,pm8998-ponC*");
MODULE_ALIAS("of:N*T*Cqcom,pmk8350-pon");
MODULE_ALIAS("of:N*T*Cqcom,pmk8350-ponC*");
