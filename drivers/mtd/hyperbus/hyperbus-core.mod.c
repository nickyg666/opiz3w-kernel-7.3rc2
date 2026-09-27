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

KSYMTAB_FUNC(hyperbus_register_device, "");
SYMBOL_FLAGS(hyperbus_register_device, 0x01);
KSYMTAB_FUNC(hyperbus_unregister_device, "");
SYMBOL_FLAGS(hyperbus_unregister_device, 0x01);

MODULE_INFO(depends, "");

