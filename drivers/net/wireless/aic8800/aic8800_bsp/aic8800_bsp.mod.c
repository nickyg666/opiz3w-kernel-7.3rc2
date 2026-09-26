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

KSYMTAB_FUNC(aicbsp_get_feature, "");
SYMBOL_FLAGS(aicbsp_get_feature, 0x01);
KSYMTAB_FUNC(aicbsp_resv_mem_alloc_skb, "");
SYMBOL_FLAGS(aicbsp_resv_mem_alloc_skb, 0x01);
KSYMTAB_FUNC(aicbsp_resv_mem_kfree_skb, "");
SYMBOL_FLAGS(aicbsp_resv_mem_kfree_skb, 0x01);
KSYMTAB_DATA(dpd_res, "");
SYMBOL_FLAGS(dpd_res, 0x00);
KSYMTAB_FUNC(aicbsp_set_subsys, "");
SYMBOL_FLAGS(aicbsp_set_subsys, 0x01);
KSYMTAB_FUNC(aicwf_prealloc_txq_alloc, "");
SYMBOL_FLAGS(aicwf_prealloc_txq_alloc, 0x00);

MODULE_INFO(depends, "sunxi_rfkill");

MODULE_ALIAS("sdio:c*v544Ad0146*");
MODULE_ALIAS("sdio:c*vC8A1dC18D*");
MODULE_ALIAS("sdio:c*vC8A1d0182*");

MODULE_INFO(srcversion, "0DA124B16D9C645A8F5A7E8");
