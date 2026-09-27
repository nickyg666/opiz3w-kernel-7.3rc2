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

MODULE_ALIAS("of:N*T*Cbrcm,asp-v3.0-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,asp-v3.0-mdioC*");
MODULE_ALIAS("of:N*T*Cbrcm,asp-v2.2-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,asp-v2.2-mdioC*");
MODULE_ALIAS("of:N*T*Cbrcm,asp-v2.1-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,asp-v2.1-mdioC*");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6846-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,bcm6846-mdioC*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v5C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v4C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v3C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v2C*");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1");
MODULE_ALIAS("of:N*T*Cbrcm,genet-mdio-v1C*");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdio");
MODULE_ALIAS("of:N*T*Cbrcm,unimac-mdioC*");
