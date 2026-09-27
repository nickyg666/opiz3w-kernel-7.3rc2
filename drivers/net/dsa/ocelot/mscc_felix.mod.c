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


MODULE_INFO(depends, "mscc_ocelot_switch_lib,fsl-enetc-mdio,pcs-lynx,sch_taprio,mscc_felix_dsa_lib,dsa_core");

MODULE_ALIAS("pci:v00001957d0000EEF0sv*sd*bc*sc*i*");
