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

KSYMTAB_FUNC(linedisp_attach, "LINEDISP");
SYMBOL_FLAGS(linedisp_attach, 0x01);
KSYMTAB_FUNC(linedisp_detach, "LINEDISP");
SYMBOL_FLAGS(linedisp_detach, 0x01);
KSYMTAB_FUNC(linedisp_register, "LINEDISP");
SYMBOL_FLAGS(linedisp_register, 0x01);
KSYMTAB_FUNC(linedisp_unregister, "LINEDISP");
SYMBOL_FLAGS(linedisp_unregister, 0x01);

MODULE_INFO(depends, "");

