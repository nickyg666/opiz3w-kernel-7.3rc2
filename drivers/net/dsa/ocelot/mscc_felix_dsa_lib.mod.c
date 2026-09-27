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

KSYMTAB_FUNC(felix_register_switch, "");
SYMBOL_FLAGS(felix_register_switch, 0x01);
KSYMTAB_FUNC(felix_port_to_netdev, "");
SYMBOL_FLAGS(felix_port_to_netdev, 0x01);
KSYMTAB_FUNC(felix_netdev_to_port, "");
SYMBOL_FLAGS(felix_netdev_to_port, 0x01);

MODULE_INFO(depends, "mscc_ocelot_switch_lib,dsa_core");

