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

KSYMTAB_FUNC(tpm_tis_remove, "");
SYMBOL_FLAGS(tpm_tis_remove, 0x01);
KSYMTAB_FUNC(tpm_tis_core_init, "");
SYMBOL_FLAGS(tpm_tis_core_init, 0x01);
KSYMTAB_FUNC(tpm_tis_resume, "");
SYMBOL_FLAGS(tpm_tis_resume, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "91367970BF631ACD8648F04");
