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

KSYMTAB_FUNC(mtk_vcodec_dbgfs_create, "");
SYMBOL_FLAGS(mtk_vcodec_dbgfs_create, 0x01);
KSYMTAB_FUNC(mtk_vcodec_dbgfs_remove, "");
SYMBOL_FLAGS(mtk_vcodec_dbgfs_remove, 0x01);
KSYMTAB_FUNC(mtk_vcodec_dbgfs_init, "");
SYMBOL_FLAGS(mtk_vcodec_dbgfs_init, 0x01);
KSYMTAB_FUNC(mtk_vcodec_dbgfs_deinit, "");
SYMBOL_FLAGS(mtk_vcodec_dbgfs_deinit, 0x01);

MODULE_INFO(depends, "mtk-vcodec-common");

