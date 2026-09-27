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

MODULE_ALIAS("platform:sh7619-ether");
MODULE_ALIAS("platform:sh771x-ether");
MODULE_ALIAS("platform:sh7724-ether");
MODULE_ALIAS("platform:sh7734-gether");
MODULE_ALIAS("platform:sh7757-ether");
MODULE_ALIAS("platform:sh7757-gether");
MODULE_ALIAS("platform:sh7763-gether");
MODULE_ALIAS("of:N*T*Crenesas,gether-r8a7740");
MODULE_ALIAS("of:N*T*Crenesas,gether-r8a7740C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7743");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7743C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7745");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7745C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7778");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7778C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7779");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7779C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7790");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7790C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7791");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7791C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7793");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7793C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7794");
MODULE_ALIAS("of:N*T*Crenesas,ether-r8a7794C*");
MODULE_ALIAS("of:N*T*Crenesas,gether-r8a77980");
MODULE_ALIAS("of:N*T*Crenesas,gether-r8a77980C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r7s72100");
MODULE_ALIAS("of:N*T*Crenesas,ether-r7s72100C*");
MODULE_ALIAS("of:N*T*Crenesas,ether-r7s9210");
MODULE_ALIAS("of:N*T*Crenesas,ether-r7s9210C*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen1-ether");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen1-etherC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-ether");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen2-etherC*");
