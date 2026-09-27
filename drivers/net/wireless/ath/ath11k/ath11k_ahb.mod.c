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


MODULE_INFO(depends, "ath11k");

MODULE_ALIAS("of:N*T*Cqcom,ipq8074-wifi");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-wifiC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-wifi");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-wifiC*");
MODULE_ALIAS("of:N*T*Cqcom,wcn6750-wifi");
MODULE_ALIAS("of:N*T*Cqcom,wcn6750-wifiC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5018-wifi");
MODULE_ALIAS("of:N*T*Cqcom,ipq5018-wifiC*");
