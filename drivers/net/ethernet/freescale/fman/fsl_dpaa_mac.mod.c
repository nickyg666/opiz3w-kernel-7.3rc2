#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");


MODULE_INFO(depends, "fsl_dpaa_fman,pcs-lynx,phylink,fsl_dpaa_fman_port");

MODULE_ALIAS("of:N*T*Cfsl,fman-dtsec");
MODULE_ALIAS("of:N*T*Cfsl,fman-dtsecC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-xgec");
MODULE_ALIAS("of:N*T*Cfsl,fman-xgecC*");
MODULE_ALIAS("of:N*T*Cfsl,fman-memac");
MODULE_ALIAS("of:N*T*Cfsl,fman-memacC*");
