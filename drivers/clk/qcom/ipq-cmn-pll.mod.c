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

MODULE_ALIAS("of:N*T*Cqcom,ipq5018-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq5018-cmn-pllC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5332-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq5332-cmn-pllC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq5424-cmn-pllC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq6018-cmn-pllC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq8074-cmn-pllC*");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-cmn-pll");
MODULE_ALIAS("of:N*T*Cqcom,ipq9574-cmn-pllC*");
