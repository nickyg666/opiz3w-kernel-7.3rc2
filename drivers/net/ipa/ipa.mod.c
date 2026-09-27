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


MODULE_INFO(depends, "qmi_helpers,qcom_common,mdt_loader");

MODULE_ALIAS("of:N*T*Cqcom,msm8998-ipa");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sdx55-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sm6350-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sm8350-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sdx65-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,milos-ipa");
MODULE_ALIAS("of:N*T*Cqcom,milos-ipaC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-ipa");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-ipaC*");
