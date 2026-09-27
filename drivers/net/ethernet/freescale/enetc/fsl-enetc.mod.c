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


MODULE_INFO(depends, "nxp-enetc-pf-common,fsl-enetc-core,fsl-enetc-mdio,pcs-lynx,fsl-enetc-ierb");

MODULE_ALIAS("pci:v00001957d0000E100sv*sd*bc*sc*i*");
