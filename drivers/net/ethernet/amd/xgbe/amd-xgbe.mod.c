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

MODULE_ALIAS("of:N*T*Camd,xgbe-seattle-v1a");
MODULE_ALIAS("of:N*T*Camd,xgbe-seattle-v1aC*");
MODULE_ALIAS("acpi*:AMDI8001:*");
MODULE_ALIAS("pci:v00001022d00001458sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001459sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001022d00001641sv*sd*bc*sc*i*");
