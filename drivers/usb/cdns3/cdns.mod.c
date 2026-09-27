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

KSYMTAB_FUNC(cdns_core_init_role, "");
SYMBOL_FLAGS(cdns_core_init_role, 0x01);
KSYMTAB_FUNC(cdns_init, "");
SYMBOL_FLAGS(cdns_init, 0x01);
KSYMTAB_FUNC(cdns_remove, "");
SYMBOL_FLAGS(cdns_remove, 0x01);
KSYMTAB_FUNC(cdns_suspend, "");
SYMBOL_FLAGS(cdns_suspend, 0x01);
KSYMTAB_FUNC(cdns_resume, "");
SYMBOL_FLAGS(cdns_resume, 0x01);
KSYMTAB_FUNC(cdns_set_active, "");
SYMBOL_FLAGS(cdns_set_active, 0x01);
KSYMTAB_FUNC(cdns_clear_vbus, "");
SYMBOL_FLAGS(cdns_clear_vbus, 0x01);
KSYMTAB_FUNC(cdns_set_vbus, "");
SYMBOL_FLAGS(cdns_set_vbus, 0x01);
KSYMTAB_FUNC(cdns_drd_gadget_on, "");
SYMBOL_FLAGS(cdns_drd_gadget_on, 0x01);
KSYMTAB_FUNC(cdns_drd_gadget_off, "");
SYMBOL_FLAGS(cdns_drd_gadget_off, 0x01);
KSYMTAB_FUNC(cdns_power_is_lost, "");
SYMBOL_FLAGS(cdns_power_is_lost, 0x01);
KSYMTAB_FUNC(cdns3_gadget_init, "");
SYMBOL_FLAGS(cdns3_gadget_init, 0x01);
KSYMTAB_FUNC(cdnsp_gadget_init, "");
SYMBOL_FLAGS(cdnsp_gadget_init, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccdns,usb3");
MODULE_ALIAS("of:N*T*Ccdns,usb3C*");
MODULE_ALIAS("of:N*T*Ccdns,cdnsp");
MODULE_ALIAS("of:N*T*Ccdns,cdnspC*");
