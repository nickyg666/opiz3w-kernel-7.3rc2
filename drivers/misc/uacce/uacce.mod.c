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

KSYMTAB_FUNC(uacce_alloc, "");
SYMBOL_FLAGS(uacce_alloc, 0x01);
KSYMTAB_FUNC(uacce_register, "");
SYMBOL_FLAGS(uacce_register, 0x01);
KSYMTAB_FUNC(uacce_remove, "");
SYMBOL_FLAGS(uacce_remove, 0x01);

MODULE_INFO(depends, "");

