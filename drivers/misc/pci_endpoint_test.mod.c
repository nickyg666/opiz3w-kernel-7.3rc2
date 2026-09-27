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

MODULE_ALIAS("pci:v0000104Cd0000B500sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B501sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001957d000081C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001957d00000808sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001957d000080C0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000016C3d0000EDDAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000028sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d0000002Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d0000002Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000025sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001912d00000031sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B00Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000104Cd0000B013sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D87d00003588sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd00001AD4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010DEd0000229Bsv*sd*bc*sc*i*");
