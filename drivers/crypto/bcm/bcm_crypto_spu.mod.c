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


MODULE_INFO(depends, "libdes");

MODULE_ALIAS("of:N*T*Cbrcm,spum-crypto");
MODULE_ALIAS("of:N*T*Cbrcm,spum-cryptoC*");
MODULE_ALIAS("of:N*T*Cbrcm,spum-nsp-crypto");
MODULE_ALIAS("of:N*T*Cbrcm,spum-nsp-cryptoC*");
MODULE_ALIAS("of:N*T*Cbrcm,spu2-crypto");
MODULE_ALIAS("of:N*T*Cbrcm,spu2-cryptoC*");
MODULE_ALIAS("of:N*T*Cbrcm,spu2-v2-crypto");
MODULE_ALIAS("of:N*T*Cbrcm,spu2-v2-cryptoC*");
