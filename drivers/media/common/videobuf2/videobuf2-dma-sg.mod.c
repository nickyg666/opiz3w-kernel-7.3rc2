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

KSYMTAB_DATA(vb2_dma_sg_memops, "");
SYMBOL_FLAGS(vb2_dma_sg_memops, 0x01);

MODULE_INFO(depends, "videobuf2-memops,videobuf2-common");

