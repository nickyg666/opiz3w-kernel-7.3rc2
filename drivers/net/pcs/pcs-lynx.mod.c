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

KSYMTAB_FUNC(lynx_pcs_create_mdiodev, "");
SYMBOL_FLAGS(lynx_pcs_create_mdiodev, 0x00);
KSYMTAB_FUNC(lynx_pcs_create_fwnode, "");
SYMBOL_FLAGS(lynx_pcs_create_fwnode, 0x01);
KSYMTAB_FUNC(lynx_pcs_destroy, "");
SYMBOL_FLAGS(lynx_pcs_destroy, 0x00);

MODULE_INFO(depends, "phylink");

