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

KSYMTAB_FUNC(macvlan_common_setup, "");
SYMBOL_FLAGS(macvlan_common_setup, 0x01);
KSYMTAB_FUNC(macvlan_common_newlink, "");
SYMBOL_FLAGS(macvlan_common_newlink, 0x01);
KSYMTAB_FUNC(macvlan_dellink, "");
SYMBOL_FLAGS(macvlan_dellink, 0x01);
KSYMTAB_FUNC(macvlan_link_register, "");
SYMBOL_FLAGS(macvlan_link_register, 0x01);

MODULE_INFO(depends, "");

