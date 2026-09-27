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


MODULE_INFO(depends, "hclge-common,hnae3");

MODULE_ALIAS("pci:v000019E5d0000A220sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A221sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A222sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A223sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A224sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A225sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A226sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000019E5d0000A228sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "C51CFCA2FFFAB4040F146E3");
