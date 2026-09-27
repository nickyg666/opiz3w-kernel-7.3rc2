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

KSYMTAB_FUNC(rcar_fcp_get, "");
SYMBOL_FLAGS(rcar_fcp_get, 0x01);
KSYMTAB_FUNC(rcar_fcp_put, "");
SYMBOL_FLAGS(rcar_fcp_put, 0x01);
KSYMTAB_FUNC(rcar_fcp_get_device, "");
SYMBOL_FLAGS(rcar_fcp_get_device, 0x01);
KSYMTAB_FUNC(rcar_fcp_enable, "");
SYMBOL_FLAGS(rcar_fcp_enable, 0x01);
KSYMTAB_FUNC(rcar_fcp_disable, "");
SYMBOL_FLAGS(rcar_fcp_disable, 0x01);
KSYMTAB_FUNC(rcar_fcp_soft_reset, "");
SYMBOL_FLAGS(rcar_fcp_soft_reset, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Crenesas,fcpf");
MODULE_ALIAS("of:N*T*Crenesas,fcpfC*");
MODULE_ALIAS("of:N*T*Crenesas,fcpv");
MODULE_ALIAS("of:N*T*Crenesas,fcpvC*");
