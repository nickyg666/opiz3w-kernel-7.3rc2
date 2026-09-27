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

KSYMTAB_FUNC(stm32_timers_dma_burst_read, "");
SYMBOL_FLAGS(stm32_timers_dma_burst_read, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cst,stm32-timers");
MODULE_ALIAS("of:N*T*Cst,stm32-timersC*");
MODULE_ALIAS("of:N*T*Cst,stm32mp25-timers");
MODULE_ALIAS("of:N*T*Cst,stm32mp25-timersC*");
