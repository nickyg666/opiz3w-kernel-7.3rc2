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

KSYMTAB_FUNC(k3_cppi_desc_pool_destroy, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_destroy, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_create_name, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_create_name, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_virt2dma, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_virt2dma, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_dma2virt, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_dma2virt, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_alloc, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_alloc, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_free, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_free, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_avail, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_avail, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_desc_size, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_desc_size, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_cpuaddr, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_cpuaddr, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_desc_info_set, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_desc_info_set, 0x01);
KSYMTAB_FUNC(k3_cppi_desc_pool_desc_info, "");
SYMBOL_FLAGS(k3_cppi_desc_pool_desc_info, 0x01);

MODULE_INFO(depends, "");

