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


MODULE_INFO(depends, "led-class-multicolor,qcom-pbs");

MODULE_ALIAS("of:N*T*Cqcom,pm660l-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pm660l-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8150b-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pm8150b-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8150l-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pm8150l-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8350c-pwm");
MODULE_ALIAS("of:N*T*Cqcom,pm8350c-pwmC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-pwm");
MODULE_ALIAS("of:N*T*Cqcom,pm8916-pwmC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pm8941-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pm8994-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi632-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pmi632-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8950-pwm");
MODULE_ALIAS("of:N*T*Cqcom,pmi8950-pwmC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pmi8994-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pmi8998-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pmi8998-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pmc8180c-lpg");
MODULE_ALIAS("of:N*T*Cqcom,pmc8180c-lpgC*");
MODULE_ALIAS("of:N*T*Cqcom,pmk8550-pwm");
MODULE_ALIAS("of:N*T*Cqcom,pmk8550-pwmC*");
