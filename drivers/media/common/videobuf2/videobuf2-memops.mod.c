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

KSYMTAB_FUNC(vb2_create_framevec, "");
SYMBOL_FLAGS(vb2_create_framevec, 0x00);
KSYMTAB_FUNC(vb2_destroy_framevec, "");
SYMBOL_FLAGS(vb2_destroy_framevec, 0x00);
KSYMTAB_DATA(vb2_common_vm_ops, "");
SYMBOL_FLAGS(vb2_common_vm_ops, 0x01);

MODULE_INFO(depends, "videobuf2-common");

