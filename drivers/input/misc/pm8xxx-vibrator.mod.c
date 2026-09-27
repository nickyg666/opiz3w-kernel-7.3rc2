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


MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("of:N*T*Cqcom,pm8058-vib");
MODULE_ALIAS("of:N*T*Cqcom,pm8058-vibC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8921-vib");
MODULE_ALIAS("of:N*T*Cqcom,pm8921-vibC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-vib");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-vibC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi632-vib");
MODULE_ALIAS("of:N*T*Cqcom,pmi632-vibC*");
