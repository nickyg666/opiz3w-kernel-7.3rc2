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

KSYMTAB_FUNC(mdiobb_read_c22, "");
SYMBOL_FLAGS(mdiobb_read_c22, 0x00);
KSYMTAB_FUNC(mdiobb_read_c45, "");
SYMBOL_FLAGS(mdiobb_read_c45, 0x00);
KSYMTAB_FUNC(mdiobb_write_c22, "");
SYMBOL_FLAGS(mdiobb_write_c22, 0x00);
KSYMTAB_FUNC(mdiobb_write_c45, "");
SYMBOL_FLAGS(mdiobb_write_c45, 0x00);
KSYMTAB_FUNC(alloc_mdio_bitbang, "");
SYMBOL_FLAGS(alloc_mdio_bitbang, 0x00);
KSYMTAB_FUNC(free_mdio_bitbang, "");
SYMBOL_FLAGS(free_mdio_bitbang, 0x00);

MODULE_INFO(depends, "");

