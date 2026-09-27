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

KSYMTAB_DATA(enetc_has_err050089, "");
SYMBOL_FLAGS(enetc_has_err050089, 0x01);
KSYMTAB_FUNC(enetc_mdio_write_c22, "");
SYMBOL_FLAGS(enetc_mdio_write_c22, 0x01);
KSYMTAB_FUNC(enetc_mdio_write_c45, "");
SYMBOL_FLAGS(enetc_mdio_write_c45, 0x01);
KSYMTAB_FUNC(enetc_mdio_read_c22, "");
SYMBOL_FLAGS(enetc_mdio_read_c22, 0x01);
KSYMTAB_FUNC(enetc_mdio_read_c45, "");
SYMBOL_FLAGS(enetc_mdio_read_c45, 0x01);
KSYMTAB_FUNC(enetc_hw_alloc, "");
SYMBOL_FLAGS(enetc_hw_alloc, 0x01);
KSYMTAB_DATA(enetc_mdio_lock, "");
SYMBOL_FLAGS(enetc_mdio_lock, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001957d0000EE01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001131d0000EE00sv*sd*bc*sc*i*");
