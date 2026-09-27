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

KSYMTAB_FUNC(of_get_ocmem, "");
SYMBOL_FLAGS(of_get_ocmem, 0x01);
KSYMTAB_FUNC(ocmem_allocate, "");
SYMBOL_FLAGS(ocmem_allocate, 0x01);
KSYMTAB_FUNC(ocmem_free, "");
SYMBOL_FLAGS(ocmem_free, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cqcom,msm8226-ocmem");
MODULE_ALIAS("of:N*T*Cqcom,msm8226-ocmemC*");
MODULE_ALIAS("of:N*T*Cqcom,msm8974-ocmem");
MODULE_ALIAS("of:N*T*Cqcom,msm8974-ocmemC*");
