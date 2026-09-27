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

KSYMTAB_FUNC(smsc_phy_config_intr, "");
SYMBOL_FLAGS(smsc_phy_config_intr, 0x01);
KSYMTAB_FUNC(smsc_phy_handle_interrupt, "");
SYMBOL_FLAGS(smsc_phy_handle_interrupt, 0x01);
KSYMTAB_FUNC(smsc_phy_config_init, "");
SYMBOL_FLAGS(smsc_phy_config_init, 0x01);
KSYMTAB_FUNC(lan87xx_read_status, "");
SYMBOL_FLAGS(lan87xx_read_status, 0x01);
KSYMTAB_FUNC(smsc_phy_get_tunable, "");
SYMBOL_FLAGS(smsc_phy_get_tunable, 0x01);
KSYMTAB_FUNC(smsc_phy_set_tunable, "");
SYMBOL_FLAGS(smsc_phy_set_tunable, 0x01);
KSYMTAB_FUNC(smsc_phy_probe, "");
SYMBOL_FLAGS(smsc_phy_probe, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("mdio:0000000000000111110000001010????");
MODULE_ALIAS("mdio:0000000000000111110000001011????");
MODULE_ALIAS("mdio:0000000000000111110000001100????");
MODULE_ALIAS("mdio:0000000000000111110000001101????");
MODULE_ALIAS("mdio:0000000000000111110000001111????");
MODULE_ALIAS("mdio:0000000000000111110000010001????");
MODULE_ALIAS("mdio:0000000000000111110000010011??0?");
