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

KSYMTAB_FUNC(bgmac_adjust_link, "");
SYMBOL_FLAGS(bgmac_adjust_link, 0x01);
KSYMTAB_FUNC(bgmac_phy_connect_direct, "");
SYMBOL_FLAGS(bgmac_phy_connect_direct, 0x01);
KSYMTAB_FUNC(bgmac_alloc, "");
SYMBOL_FLAGS(bgmac_alloc, 0x01);
KSYMTAB_FUNC(bgmac_enet_probe, "");
SYMBOL_FLAGS(bgmac_enet_probe, 0x01);
KSYMTAB_FUNC(bgmac_enet_remove, "");
SYMBOL_FLAGS(bgmac_enet_remove, 0x01);
KSYMTAB_FUNC(bgmac_enet_suspend, "");
SYMBOL_FLAGS(bgmac_enet_suspend, 0x01);
KSYMTAB_FUNC(bgmac_enet_resume, "");
SYMBOL_FLAGS(bgmac_enet_resume, 0x01);

MODULE_INFO(depends, "");

