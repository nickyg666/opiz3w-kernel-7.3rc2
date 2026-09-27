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

KSYMTAB_FUNC(cavium_mdiobus_read_c22, "");
SYMBOL_FLAGS(cavium_mdiobus_read_c22, 0x00);
KSYMTAB_FUNC(cavium_mdiobus_read_c45, "");
SYMBOL_FLAGS(cavium_mdiobus_read_c45, 0x00);
KSYMTAB_FUNC(cavium_mdiobus_write_c22, "");
SYMBOL_FLAGS(cavium_mdiobus_write_c22, 0x00);
KSYMTAB_FUNC(cavium_mdiobus_write_c45, "");
SYMBOL_FLAGS(cavium_mdiobus_write_c45, 0x00);

MODULE_INFO(depends, "");

