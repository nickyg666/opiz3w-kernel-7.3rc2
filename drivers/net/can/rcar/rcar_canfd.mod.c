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


MODULE_INFO(depends, "can-dev");

MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-canfd");
MODULE_ALIAS("of:N*T*Crenesas,r8a779a0-canfdC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-canfd");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-canfdC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-canfd");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g077-canfdC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-canfd");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-canfdC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-canfd");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-canfdC*");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-canfd");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-canfdC*");
