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

KSYMTAB_FUNC(xcv_init_hw, "");
SYMBOL_FLAGS(xcv_init_hw, 0x00);
KSYMTAB_FUNC(xcv_setup_link, "");
SYMBOL_FLAGS(xcv_setup_link, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v0000177Dd0000A056sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "FAD639976AA0D1562782069");
