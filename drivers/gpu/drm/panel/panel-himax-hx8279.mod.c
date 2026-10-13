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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Caoly,sl101pm1794fog-v15");
MODULE_ALIAS("of:N*T*Caoly,sl101pm1794fog-v15C*");
MODULE_ALIAS("of:N*T*Cstartek,kd070fhfid078");
MODULE_ALIAS("of:N*T*Cstartek,kd070fhfid078C*");
