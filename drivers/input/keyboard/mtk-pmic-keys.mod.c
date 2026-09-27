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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmediatek,mt6397-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6397-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6323-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6331-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6331-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6357-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6358-keysC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359-keys");
MODULE_ALIAS("of:N*T*Cmediatek,mt6359-keysC*");
