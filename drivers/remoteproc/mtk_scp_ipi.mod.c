#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(scp_ipi_register, "");
SYMBOL_FLAGS(scp_ipi_register, 0x01);
KSYMTAB_FUNC(scp_ipi_unregister, "");
SYMBOL_FLAGS(scp_ipi_unregister, 0x01);
KSYMTAB_FUNC(scp_memcpy_aligned, "");
SYMBOL_FLAGS(scp_memcpy_aligned, 0x01);
KSYMTAB_FUNC(scp_ipi_lock, "");
SYMBOL_FLAGS(scp_ipi_lock, 0x01);
KSYMTAB_FUNC(scp_ipi_unlock, "");
SYMBOL_FLAGS(scp_ipi_unlock, 0x01);
KSYMTAB_FUNC(scp_ipi_send, "");
SYMBOL_FLAGS(scp_ipi_send, 0x01);

MODULE_INFO(depends, "");

