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


MODULE_INFO(depends, "dsa_core");

MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemportlite-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00");
MODULE_ALIAS("of:N*T*Cbrcm,systemport-v1.00C*");
MODULE_ALIAS("of:N*T*Cbrcm,systemport");
MODULE_ALIAS("of:N*T*Cbrcm,systemportC*");
