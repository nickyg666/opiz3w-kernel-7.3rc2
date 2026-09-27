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

MODULE_ALIAS("of:N*T*Canbernic,rg353v-panel-v2");
MODULE_ALIAS("of:N*T*Canbernic,rg353v-panel-v2C*");
MODULE_ALIAS("of:N*T*Cayaneo,pocket-ds-lower-panel");
MODULE_ALIAS("of:N*T*Cayaneo,pocket-ds-lower-panelC*");
MODULE_ALIAS("of:N*T*Cgameforce,chi-panel");
MODULE_ALIAS("of:N*T*Cgameforce,chi-panelC*");
MODULE_ALIAS("of:N*T*Cpowkiddy,rgb10max3-panel");
MODULE_ALIAS("of:N*T*Cpowkiddy,rgb10max3-panelC*");
MODULE_ALIAS("of:N*T*Cpowkiddy,rgb30-panel");
MODULE_ALIAS("of:N*T*Cpowkiddy,rgb30-panelC*");
MODULE_ALIAS("of:N*T*Crocktech,jh057n00900");
MODULE_ALIAS("of:N*T*Crocktech,jh057n00900C*");
MODULE_ALIAS("of:N*T*Cxingbangda,xbd599");
MODULE_ALIAS("of:N*T*Cxingbangda,xbd599C*");
