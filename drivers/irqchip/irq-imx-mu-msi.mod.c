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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-mu-msi");
MODULE_ALIAS("of:N*T*Cfsl,imx7ulp-mu-msiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-mu-msi");
MODULE_ALIAS("of:N*T*Cfsl,imx6sx-mu-msiC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-mu-msi");
MODULE_ALIAS("of:N*T*Cfsl,imx8ulp-mu-msiC*");
