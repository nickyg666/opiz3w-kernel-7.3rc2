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

KSYMTAB_FUNC(raid_class_attach, "");
SYMBOL_FLAGS(raid_class_attach, 0x00);
KSYMTAB_FUNC(raid_class_release, "");
SYMBOL_FLAGS(raid_class_release, 0x00);

MODULE_INFO(depends, "");

