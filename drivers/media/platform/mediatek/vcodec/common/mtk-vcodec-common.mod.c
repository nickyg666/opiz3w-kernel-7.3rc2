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

KSYMTAB_FUNC(mtk_vcodec_wait_for_done_ctx, "");
SYMBOL_FLAGS(mtk_vcodec_wait_for_done_ctx, 0x00);
KSYMTAB_DATA(mtk_vcodec_dbg, "");
SYMBOL_FLAGS(mtk_vcodec_dbg, 0x00);
KSYMTAB_DATA(mtk_v4l2_dbg_level, "");
SYMBOL_FLAGS(mtk_v4l2_dbg_level, 0x00);
KSYMTAB_FUNC(mtk_vcodec_get_reg_addr, "");
SYMBOL_FLAGS(mtk_vcodec_get_reg_addr, 0x00);
KSYMTAB_FUNC(mtk_vcodec_write_vdecsys, "");
SYMBOL_FLAGS(mtk_vcodec_write_vdecsys, 0x00);
KSYMTAB_FUNC(mtk_vcodec_mem_alloc, "");
SYMBOL_FLAGS(mtk_vcodec_mem_alloc, 0x00);
KSYMTAB_FUNC(mtk_vcodec_mem_free, "");
SYMBOL_FLAGS(mtk_vcodec_mem_free, 0x00);
KSYMTAB_FUNC(mtk_vcodec_get_hw_dev, "");
SYMBOL_FLAGS(mtk_vcodec_get_hw_dev, 0x00);
KSYMTAB_FUNC(mtk_vcodec_set_curr_ctx, "");
SYMBOL_FLAGS(mtk_vcodec_set_curr_ctx, 0x00);
KSYMTAB_FUNC(mtk_vcodec_get_curr_ctx, "");
SYMBOL_FLAGS(mtk_vcodec_get_curr_ctx, 0x00);
KSYMTAB_FUNC(mtk_vcodec_fw_select, "");
SYMBOL_FLAGS(mtk_vcodec_fw_select, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_release, "");
SYMBOL_FLAGS(mtk_vcodec_fw_release, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_load_firmware, "");
SYMBOL_FLAGS(mtk_vcodec_fw_load_firmware, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_get_vdec_capa, "");
SYMBOL_FLAGS(mtk_vcodec_fw_get_vdec_capa, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_get_venc_capa, "");
SYMBOL_FLAGS(mtk_vcodec_fw_get_venc_capa, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_map_dm_addr, "");
SYMBOL_FLAGS(mtk_vcodec_fw_map_dm_addr, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_ipi_register, "");
SYMBOL_FLAGS(mtk_vcodec_fw_ipi_register, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_ipi_send, "");
SYMBOL_FLAGS(mtk_vcodec_fw_ipi_send, 0x01);
KSYMTAB_FUNC(mtk_vcodec_fw_get_type, "");
SYMBOL_FLAGS(mtk_vcodec_fw_get_type, 0x01);

MODULE_INFO(depends, "mtk_scp,mtk_scp_ipi");

