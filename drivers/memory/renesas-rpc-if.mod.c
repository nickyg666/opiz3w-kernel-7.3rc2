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

KSYMTAB_FUNC(rpcif_sw_init, "");
SYMBOL_FLAGS(rpcif_sw_init, 0x00);
KSYMTAB_FUNC(rpcif_hw_init, "");
SYMBOL_FLAGS(rpcif_hw_init, 0x00);
KSYMTAB_FUNC(rpcif_prepare, "");
SYMBOL_FLAGS(rpcif_prepare, 0x00);
KSYMTAB_FUNC(rpcif_manual_xfer, "");
SYMBOL_FLAGS(rpcif_manual_xfer, 0x00);
KSYMTAB_FUNC(rpcif_dirmap_read, "");
SYMBOL_FLAGS(rpcif_dirmap_read, 0x00);
KSYMTAB_FUNC(xspi_dirmap_write, "");
SYMBOL_FLAGS(xspi_dirmap_write, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,r8a7796-rpc-if");
MODULE_ALIAS("of:N*T*Crenesas,r8a7796-rpc-ifC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-xspi");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-xspiC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-rpc-if");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen3-rpc-ifC*");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-rpc-if");
MODULE_ALIAS("of:N*T*Crenesas,rcar-gen4-rpc-ifC*");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-rpc-if");
MODULE_ALIAS("of:N*T*Crenesas,rzg2l-rpc-ifC*");
