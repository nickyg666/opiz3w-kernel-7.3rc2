#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(qcom_mdt_get_size, "");
SYMBOL_FLAGS(qcom_mdt_get_size, 0x01);
KSYMTAB_FUNC(qcom_mdt_read_metadata, "");
SYMBOL_FLAGS(qcom_mdt_read_metadata, 0x01);
KSYMTAB_FUNC(qcom_mdt_load_no_init, "");
SYMBOL_FLAGS(qcom_mdt_load_no_init, 0x01);
KSYMTAB_FUNC(qcom_mdt_load, "");
SYMBOL_FLAGS(qcom_mdt_load, 0x01);
KSYMTAB_FUNC(qcom_mdt_pas_load, "");
SYMBOL_FLAGS(qcom_mdt_pas_load, 0x01);

MODULE_INFO(depends, "");

