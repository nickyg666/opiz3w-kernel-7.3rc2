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

MODULE_ALIAS("of:N*T*Cqcom,msm8998-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-llcc-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-llcc-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-llcc-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-llcc-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-cpu-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-cpu-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-cpu-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sc8280xp-cpu-bwmonC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-cpu-bwmon");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-cpu-bwmonC*");
