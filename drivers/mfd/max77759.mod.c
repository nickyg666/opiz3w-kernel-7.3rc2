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

KSYMTAB_FUNC(max77759_maxq_command, "");
SYMBOL_FLAGS(max77759_maxq_command, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max77759");
MODULE_ALIAS("of:N*T*Cmaxim,max77759C*");
MODULE_ALIAS("i2c:max77759");
