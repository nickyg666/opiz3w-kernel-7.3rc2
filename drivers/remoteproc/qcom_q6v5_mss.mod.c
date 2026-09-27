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


MODULE_INFO(depends, "qcom_q6v5,qcom_common,qcom_sysmon,qcom_pil_info,mdt_loader");

MODULE_ALIAS("of:N*T*Cqcom,q6v5-pil");
MODULE_ALIAS("of:N*T*Cqcom,q6v5-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,mdm9607-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,mdm9607-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8226-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8226-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8909-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8909-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8916-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8917-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8917-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8926-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8926-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8937-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8937-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8940-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8940-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8953-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8953-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8974-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8974-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8996-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,msm8998-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,sdm660-mss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-mss-pil");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-mss-pilC*");
