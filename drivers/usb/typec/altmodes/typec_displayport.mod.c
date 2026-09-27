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

KSYMTAB_FUNC(dp_altmode_probe, "");
SYMBOL_FLAGS(dp_altmode_probe, 0x01);
KSYMTAB_FUNC(dp_altmode_remove, "");
SYMBOL_FLAGS(dp_altmode_remove, 0x01);

MODULE_INFO(depends, "typec");

MODULE_ALIAS("typec:idFF01");
