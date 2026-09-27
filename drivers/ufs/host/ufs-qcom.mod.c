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


MODULE_INFO(depends, "qcom_ice");

MODULE_ALIAS("of:N*T*Cqcom,ufshc");
MODULE_ALIAS("of:N*T*Cqcom,ufshcC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-ufshc");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-ufshcC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-ufshc");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-ufshcC*");
MODULE_ALIAS("of:N*T*Cqcom,sa8255p-ufshc");
MODULE_ALIAS("of:N*T*Cqcom,sa8255p-ufshcC*");
