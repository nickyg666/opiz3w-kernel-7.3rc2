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

KSYMTAB_FUNC(__coreboot_driver_register, "");
SYMBOL_FLAGS(__coreboot_driver_register, 0x00);
KSYMTAB_FUNC(coreboot_driver_unregister, "");
SYMBOL_FLAGS(coreboot_driver_unregister, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Ccoreboot");
MODULE_ALIAS("of:N*T*CcorebootC*");
