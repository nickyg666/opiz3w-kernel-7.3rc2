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


MODULE_INFO(depends, "mdio-bitbang");

MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpio");
MODULE_ALIAS("of:N*T*Cvirtual,mdio-gpioC*");
MODULE_ALIAS("of:N*T*Cmicrochip,mdio-smi0");
MODULE_ALIAS("of:N*T*Cmicrochip,mdio-smi0C*");
