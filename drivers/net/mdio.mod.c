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

KSYMTAB_FUNC(mdio45_probe, "");
SYMBOL_FLAGS(mdio45_probe, 0x00);
KSYMTAB_FUNC(mdio_set_flag, "");
SYMBOL_FLAGS(mdio_set_flag, 0x00);
KSYMTAB_FUNC(mdio45_links_ok, "");
SYMBOL_FLAGS(mdio45_links_ok, 0x00);
KSYMTAB_FUNC(mdio45_nway_restart, "");
SYMBOL_FLAGS(mdio45_nway_restart, 0x00);
KSYMTAB_FUNC(mdio45_ethtool_ksettings_get_npage, "");
SYMBOL_FLAGS(mdio45_ethtool_ksettings_get_npage, 0x00);
KSYMTAB_FUNC(mdio_mii_ioctl, "");
SYMBOL_FLAGS(mdio_mii_ioctl, 0x00);

MODULE_INFO(depends, "");

