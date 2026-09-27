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

MODULE_ALIAS("mdio:0010000000000000101000100100????");
MODULE_ALIAS("mdio:0010000000000000101000010101????");
MODULE_ALIAS("mdio:0010000000000000101000010011????");
MODULE_ALIAS("mdio:0010000000000000101000010001????");
MODULE_ALIAS("mdio:0010000000000000101000010100????");
MODULE_ALIAS("mdio:0010000000000000101000010110????");
MODULE_ALIAS("mdio:0010000000000000101000010111????");
