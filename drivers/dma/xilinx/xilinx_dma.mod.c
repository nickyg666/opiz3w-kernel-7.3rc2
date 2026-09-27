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

KSYMTAB_FUNC(xilinx_vdma_channel_set_config, "");
SYMBOL_FLAGS(xilinx_vdma_channel_set_config, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cxlnx,axi-dma-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-dma-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-cdma-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-cdma-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-vdma-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-vdma-1.00.aC*");
MODULE_ALIAS("of:N*T*Cxlnx,axi-mcdma-1.00.a");
MODULE_ALIAS("of:N*T*Cxlnx,axi-mcdma-1.00.aC*");
