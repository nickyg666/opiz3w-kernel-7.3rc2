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

KSYMTAB_FUNC(qcom_ice_enable, "");
SYMBOL_FLAGS(qcom_ice_enable, 0x01);
KSYMTAB_FUNC(qcom_ice_resume, "");
SYMBOL_FLAGS(qcom_ice_resume, 0x01);
KSYMTAB_FUNC(qcom_ice_suspend, "");
SYMBOL_FLAGS(qcom_ice_suspend, 0x01);
KSYMTAB_FUNC(qcom_ice_program_key, "");
SYMBOL_FLAGS(qcom_ice_program_key, 0x01);
KSYMTAB_FUNC(qcom_ice_evict_key, "");
SYMBOL_FLAGS(qcom_ice_evict_key, 0x01);
KSYMTAB_FUNC(qcom_ice_get_supported_key_type, "");
SYMBOL_FLAGS(qcom_ice_get_supported_key_type, 0x01);
KSYMTAB_FUNC(qcom_ice_derive_sw_secret, "");
SYMBOL_FLAGS(qcom_ice_derive_sw_secret, 0x01);
KSYMTAB_FUNC(qcom_ice_generate_key, "");
SYMBOL_FLAGS(qcom_ice_generate_key, 0x01);
KSYMTAB_FUNC(qcom_ice_prepare_key, "");
SYMBOL_FLAGS(qcom_ice_prepare_key, 0x01);
KSYMTAB_FUNC(qcom_ice_import_key, "");
SYMBOL_FLAGS(qcom_ice_import_key, 0x01);
KSYMTAB_FUNC(devm_of_qcom_ice_get, "");
SYMBOL_FLAGS(devm_of_qcom_ice_get, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,inline-crypto-engine");
MODULE_ALIAS("of:N*T*Cqcom,inline-crypto-engineC*");
