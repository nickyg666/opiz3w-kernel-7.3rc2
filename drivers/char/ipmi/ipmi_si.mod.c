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


MODULE_INFO(depends, "ipmi_msghandler");

MODULE_ALIAS("of:N*Tipmi*Cipmi-kcs");
MODULE_ALIAS("of:N*Tipmi*Cipmi-kcsC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smic");
MODULE_ALIAS("of:N*Tipmi*Cipmi-smicC*");
MODULE_ALIAS("of:N*Tipmi*Cipmi-bt");
MODULE_ALIAS("of:N*Tipmi*Cipmi-btC*");
MODULE_ALIAS("pci:v0000103Cd0000121Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i00*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i01*");
MODULE_ALIAS("pci:v*d*sv*sd*bc0Csc07i02*");
