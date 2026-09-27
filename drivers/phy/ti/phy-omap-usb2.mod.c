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

KSYMTAB_FUNC(omap_usb2_set_comparator, "");
SYMBOL_FLAGS(omap_usb2_set_comparator, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,omap-usb2");
MODULE_ALIAS("of:N*T*Cti,omap-usb2C*");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2");
MODULE_ALIAS("of:N*T*Cti,omap5-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2");
MODULE_ALIAS("of:N*T*Cti,dra7x-usb2-phy2C*");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2");
MODULE_ALIAS("of:N*T*Cti,am437x-usb2C*");
MODULE_ALIAS("of:N*T*Cti,am654-usb2");
MODULE_ALIAS("of:N*T*Cti,am654-usb2C*");
