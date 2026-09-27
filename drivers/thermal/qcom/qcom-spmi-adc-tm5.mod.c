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


MODULE_INFO(depends, "qcom-vadc-common");

MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm5");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm5C*");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm-hc");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm-hcC*");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm5-gen2");
MODULE_ALIAS("of:N*T*Cqcom,spmi-adc-tm5-gen2C*");
