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

KSYMTAB_FUNC(cnstr_shdsc_ahash, "");
SYMBOL_FLAGS(cnstr_shdsc_ahash, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_sk_hash, "");
SYMBOL_FLAGS(cnstr_shdsc_sk_hash, 0x00);

MODULE_INFO(depends, "error");

