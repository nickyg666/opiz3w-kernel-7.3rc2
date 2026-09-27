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


MODULE_INFO(depends, "qcom_sysmon,qcom_common,qcom_pil_info,mdt_loader");

MODULE_ALIAS("of:N*T*Cqcom,riva-pil");
MODULE_ALIAS("of:N*T*Cqcom,riva-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v1-pil");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v1-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v2-pil");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v2-pilC*");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v3-pil");
MODULE_ALIAS("of:N*T*Cqcom,pronto-v3-pilC*");
