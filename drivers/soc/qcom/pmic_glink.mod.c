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

KSYMTAB_FUNC(devm_pmic_glink_client_alloc, "");
SYMBOL_FLAGS(devm_pmic_glink_client_alloc, 0x01);
KSYMTAB_FUNC(pmic_glink_client_register, "");
SYMBOL_FLAGS(pmic_glink_client_register, 0x01);
KSYMTAB_FUNC(pmic_glink_send, "");
SYMBOL_FLAGS(pmic_glink_send, 0x01);

MODULE_INFO(depends, "pdr_interface");

MODULE_ALIAS("of:N*T*Cqcom,glymur-pmic-glink");
MODULE_ALIAS("of:N*T*Cqcom,glymur-pmic-glinkC*");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-pmic-glink");
MODULE_ALIAS("of:N*T*Cqcom,kaanapali-pmic-glinkC*");
MODULE_ALIAS("of:N*T*Cqcom,pmic-glink");
MODULE_ALIAS("of:N*T*Cqcom,pmic-glinkC*");
