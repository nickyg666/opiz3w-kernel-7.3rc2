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

KSYMTAB_FUNC(pdr_add_lookup, "");
SYMBOL_FLAGS(pdr_add_lookup, 0x01);
KSYMTAB_FUNC(pdr_restart_pd, "");
SYMBOL_FLAGS(pdr_restart_pd, 0x01);
KSYMTAB_FUNC(pdr_handle_alloc, "");
SYMBOL_FLAGS(pdr_handle_alloc, 0x01);
KSYMTAB_FUNC(pdr_handle_release, "");
SYMBOL_FLAGS(pdr_handle_release, 0x01);

MODULE_INFO(depends, "qcom_pdr_msg,qmi_helpers");

