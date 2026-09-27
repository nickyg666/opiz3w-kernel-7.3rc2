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


MODULE_INFO(depends, "ath11k,mhi");

MODULE_ALIAS("pci:v000017CBd00001101sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00001103sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00001104sv*sd*bc*sc*i*");
