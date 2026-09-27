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

KSYMTAB_FUNC(mii_link_ok, "");
SYMBOL_FLAGS(mii_link_ok, 0x00);
KSYMTAB_FUNC(mii_nway_restart, "");
SYMBOL_FLAGS(mii_nway_restart, 0x00);
KSYMTAB_FUNC(mii_ethtool_gset, "");
SYMBOL_FLAGS(mii_ethtool_gset, 0x00);
KSYMTAB_FUNC(mii_ethtool_get_link_ksettings, "");
SYMBOL_FLAGS(mii_ethtool_get_link_ksettings, 0x00);
KSYMTAB_FUNC(mii_ethtool_sset, "");
SYMBOL_FLAGS(mii_ethtool_sset, 0x00);
KSYMTAB_FUNC(mii_ethtool_set_link_ksettings, "");
SYMBOL_FLAGS(mii_ethtool_set_link_ksettings, 0x00);
KSYMTAB_FUNC(mii_check_link, "");
SYMBOL_FLAGS(mii_check_link, 0x00);
KSYMTAB_FUNC(mii_check_media, "");
SYMBOL_FLAGS(mii_check_media, 0x00);
KSYMTAB_FUNC(mii_check_gmii_support, "");
SYMBOL_FLAGS(mii_check_gmii_support, 0x00);
KSYMTAB_FUNC(generic_mii_ioctl, "");
SYMBOL_FLAGS(generic_mii_ioctl, 0x00);

MODULE_INFO(depends, "");

