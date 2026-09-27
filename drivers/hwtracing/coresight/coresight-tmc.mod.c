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

KSYMTAB_FUNC(tmc_free_sg_table, "");
SYMBOL_FLAGS(tmc_free_sg_table, 0x01);
KSYMTAB_FUNC(tmc_alloc_sg_table, "");
SYMBOL_FLAGS(tmc_alloc_sg_table, 0x01);
KSYMTAB_FUNC(tmc_sg_table_sync_data_range, "");
SYMBOL_FLAGS(tmc_sg_table_sync_data_range, 0x01);
KSYMTAB_FUNC(tmc_sg_table_sync_table, "");
SYMBOL_FLAGS(tmc_sg_table_sync_table, 0x01);
KSYMTAB_FUNC(tmc_sg_table_get_data, "");
SYMBOL_FLAGS(tmc_sg_table_get_data, 0x01);
KSYMTAB_FUNC(tmc_etr_get_catu_device, "");
SYMBOL_FLAGS(tmc_etr_get_catu_device, 0x01);
KSYMTAB_FUNC(tmc_etr_set_catu_ops, "");
SYMBOL_FLAGS(tmc_etr_set_catu_ops, 0x01);
KSYMTAB_FUNC(tmc_etr_remove_catu_ops, "");
SYMBOL_FLAGS(tmc_etr_remove_catu_ops, 0x01);
KSYMTAB_FUNC(tmc_etr_get_buffer, "");
SYMBOL_FLAGS(tmc_etr_get_buffer, 0x01);

MODULE_INFO(depends, "coresight");

MODULE_ALIAS("amba:d???BB961");
MODULE_ALIAS("amba:d???BB9E8");
MODULE_ALIAS("amba:d???BB9E9");
MODULE_ALIAS("amba:d???BB9EA");
