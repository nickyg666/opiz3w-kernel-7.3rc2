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

KSYMTAB_FUNC(gether_setup_name, "");
SYMBOL_FLAGS(gether_setup_name, 0x01);
KSYMTAB_FUNC(gether_setup_name_default, "");
SYMBOL_FLAGS(gether_setup_name_default, 0x01);
KSYMTAB_FUNC(gether_register_netdev, "");
SYMBOL_FLAGS(gether_register_netdev, 0x01);
KSYMTAB_FUNC(gether_set_gadget, "");
SYMBOL_FLAGS(gether_set_gadget, 0x01);
KSYMTAB_FUNC(gether_attach_gadget, "");
SYMBOL_FLAGS(gether_attach_gadget, 0x01);
KSYMTAB_FUNC(gether_detach_gadget, "");
SYMBOL_FLAGS(gether_detach_gadget, 0x01);
KSYMTAB_FUNC(gether_set_dev_addr, "");
SYMBOL_FLAGS(gether_set_dev_addr, 0x01);
KSYMTAB_FUNC(gether_get_dev_addr, "");
SYMBOL_FLAGS(gether_get_dev_addr, 0x01);
KSYMTAB_FUNC(gether_set_host_addr, "");
SYMBOL_FLAGS(gether_set_host_addr, 0x01);
KSYMTAB_FUNC(gether_get_host_addr, "");
SYMBOL_FLAGS(gether_get_host_addr, 0x01);
KSYMTAB_FUNC(gether_get_host_addr_cdc, "");
SYMBOL_FLAGS(gether_get_host_addr_cdc, 0x01);
KSYMTAB_FUNC(gether_get_host_addr_u8, "");
SYMBOL_FLAGS(gether_get_host_addr_u8, 0x01);
KSYMTAB_FUNC(gether_set_qmult, "");
SYMBOL_FLAGS(gether_set_qmult, 0x01);
KSYMTAB_FUNC(gether_get_qmult, "");
SYMBOL_FLAGS(gether_get_qmult, 0x01);
KSYMTAB_FUNC(gether_get_ifname, "");
SYMBOL_FLAGS(gether_get_ifname, 0x01);
KSYMTAB_FUNC(gether_set_ifname, "");
SYMBOL_FLAGS(gether_set_ifname, 0x01);
KSYMTAB_FUNC(gether_suspend, "");
SYMBOL_FLAGS(gether_suspend, 0x01);
KSYMTAB_FUNC(gether_resume, "");
SYMBOL_FLAGS(gether_resume, 0x01);
KSYMTAB_FUNC(gether_cleanup, "");
SYMBOL_FLAGS(gether_cleanup, 0x01);
KSYMTAB_FUNC(gether_connect, "");
SYMBOL_FLAGS(gether_connect, 0x01);
KSYMTAB_FUNC(gether_disconnect, "");
SYMBOL_FLAGS(gether_disconnect, 0x01);

MODULE_INFO(depends, "libcomposite");

