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

MODULE_ALIAS("of:N*T*Cti,am3352-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,am3352-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,dra7xx-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,dra7xx-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,am43xx-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,am43xx-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,dm814-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,dm814-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,am654-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,am654-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,j722s-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,j722s-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,j7200-cpsw5g-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,j7200-cpsw5g-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,j721e-cpsw9g-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,j721e-cpsw9g-phy-gmii-selC*");
MODULE_ALIAS("of:N*T*Cti,j784s4-cpsw9g-phy-gmii-sel");
MODULE_ALIAS("of:N*T*Cti,j784s4-cpsw9g-phy-gmii-selC*");
