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


MODULE_INFO(depends, "backlight");

MODULE_ALIAS("of:N*T*Cqcom,pm8941-wled");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8950-wled");
MODULE_ALIAS("of:N*T*Cqcom,pmi8950-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-wled");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8998-wled");
MODULE_ALIAS("of:N*T*Cqcom,pmi8998-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pm660l-wled");
MODULE_ALIAS("of:N*T*Cqcom,pm660l-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pm6150l-wled");
MODULE_ALIAS("of:N*T*Cqcom,pm6150l-wledC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8150l-wled");
MODULE_ALIAS("of:N*T*Cqcom,pm8150l-wledC*");
