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


MODULE_INFO(depends, "b53_common,dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-switch");
MODULE_ALIAS("of:N*T*Cbrcm,bcm4908-switchC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7445-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.0C*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8");
MODULE_ALIAS("of:N*T*Cbrcm,bcm7278-switch-v4.8C*");
