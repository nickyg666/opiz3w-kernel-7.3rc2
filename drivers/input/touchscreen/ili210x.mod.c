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


MODULE_INFO(depends, "crc-ccitt");

MODULE_ALIAS("of:N*T*Cilitek,ili210x");
MODULE_ALIAS("of:N*T*Cilitek,ili210xC*");
MODULE_ALIAS("of:N*T*Cilitek,ili2117");
MODULE_ALIAS("of:N*T*Cilitek,ili2117C*");
MODULE_ALIAS("of:N*T*Cilitek,ili2120");
MODULE_ALIAS("of:N*T*Cilitek,ili2120C*");
MODULE_ALIAS("of:N*T*Cilitek,ili251x");
MODULE_ALIAS("of:N*T*Cilitek,ili251xC*");
MODULE_ALIAS("i2c:ili210x");
MODULE_ALIAS("i2c:ili2117");
MODULE_ALIAS("i2c:ili2120");
MODULE_ALIAS("i2c:ili251x");
