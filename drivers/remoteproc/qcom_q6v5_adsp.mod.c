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


MODULE_INFO(depends, "qcom_q6v5,mdt_loader,qcom_pil_info,qcom_common,qcom_sysmon");

MODULE_ALIAS("of:N*T*Cqcom,qcs404-cdsp-pil");
MODULE_ALIAS("of:N*T*Cqcom,qcs404-cdsp-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-adsp-pil");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-adsp-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-wpss-pil");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-wpss-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-adsp-pil");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-adsp-pilC*");
