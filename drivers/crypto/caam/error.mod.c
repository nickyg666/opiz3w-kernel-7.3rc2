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

KSYMTAB_FUNC(caam_dump_sg, "");
SYMBOL_FLAGS(caam_dump_sg, 0x00);
KSYMTAB_DATA(caam_little_end, "");
SYMBOL_FLAGS(caam_little_end, 0x00);
KSYMTAB_DATA(caam_imx, "");
SYMBOL_FLAGS(caam_imx, 0x00);
KSYMTAB_DATA(caam_ptr_sz, "");
SYMBOL_FLAGS(caam_ptr_sz, 0x00);
KSYMTAB_FUNC(caam_strstatus, "");
SYMBOL_FLAGS(caam_strstatus, 0x00);

MODULE_INFO(depends, "");

