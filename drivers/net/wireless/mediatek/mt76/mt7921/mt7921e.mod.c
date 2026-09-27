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


MODULE_INFO(depends, "mt7921-common,mt792x-lib,mt76-connac-lib,mt76");

MODULE_ALIAS("pci:v000014C3d00007961sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007922sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00000B48d00007922sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00000608sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00000616sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007920sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000014C3d00007902sv*sd*bc*sc*i*");
