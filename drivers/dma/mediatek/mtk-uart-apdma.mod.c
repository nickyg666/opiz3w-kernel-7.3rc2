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

MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6577-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6795-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6835-uart-dmaC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uart-dma");
MODULE_ALIAS("of:N*T*Cmediatek,mt6985-uart-dmaC*");
