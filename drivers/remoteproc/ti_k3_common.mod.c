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

KSYMTAB_FUNC(k3_rproc_mbox_callback, "");
SYMBOL_FLAGS(k3_rproc_mbox_callback, 0x01);
KSYMTAB_FUNC(k3_rproc_kick, "");
SYMBOL_FLAGS(k3_rproc_kick, 0x01);
KSYMTAB_FUNC(k3_rproc_reset, "");
SYMBOL_FLAGS(k3_rproc_reset, 0x01);
KSYMTAB_FUNC(k3_rproc_release, "");
SYMBOL_FLAGS(k3_rproc_release, 0x01);
KSYMTAB_FUNC(k3_rproc_request_mbox, "");
SYMBOL_FLAGS(k3_rproc_request_mbox, 0x01);
KSYMTAB_FUNC(k3_rproc_prepare, "");
SYMBOL_FLAGS(k3_rproc_prepare, 0x01);
KSYMTAB_FUNC(k3_rproc_unprepare, "");
SYMBOL_FLAGS(k3_rproc_unprepare, 0x01);
KSYMTAB_FUNC(k3_rproc_start, "");
SYMBOL_FLAGS(k3_rproc_start, 0x01);
KSYMTAB_FUNC(k3_rproc_stop, "");
SYMBOL_FLAGS(k3_rproc_stop, 0x01);
KSYMTAB_FUNC(k3_rproc_attach, "");
SYMBOL_FLAGS(k3_rproc_attach, 0x01);
KSYMTAB_FUNC(k3_rproc_detach, "");
SYMBOL_FLAGS(k3_rproc_detach, 0x01);
KSYMTAB_FUNC(k3_get_loaded_rsc_table, "");
SYMBOL_FLAGS(k3_get_loaded_rsc_table, 0x01);
KSYMTAB_FUNC(k3_rproc_da_to_va, "");
SYMBOL_FLAGS(k3_rproc_da_to_va, 0x01);
KSYMTAB_FUNC(k3_rproc_of_get_memories, "");
SYMBOL_FLAGS(k3_rproc_of_get_memories, 0x01);
KSYMTAB_FUNC(k3_mem_release, "");
SYMBOL_FLAGS(k3_mem_release, 0x01);
KSYMTAB_FUNC(k3_reserved_mem_init, "");
SYMBOL_FLAGS(k3_reserved_mem_init, 0x01);
KSYMTAB_FUNC(k3_release_tsp, "");
SYMBOL_FLAGS(k3_release_tsp, 0x01);

MODULE_INFO(depends, "");

