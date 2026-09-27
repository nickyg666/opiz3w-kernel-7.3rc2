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

KSYMTAB_DATA(v4l2_jpeg_ref_table_luma_qt, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_luma_qt, 0x01);
KSYMTAB_DATA(v4l2_jpeg_ref_table_chroma_qt, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_chroma_qt, 0x01);
KSYMTAB_DATA(v4l2_jpeg_zigzag_scan_index, "");
SYMBOL_FLAGS(v4l2_jpeg_zigzag_scan_index, 0x01);
KSYMTAB_DATA(v4l2_jpeg_ref_table_luma_dc_ht, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_luma_dc_ht, 0x01);
KSYMTAB_DATA(v4l2_jpeg_ref_table_luma_ac_ht, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_luma_ac_ht, 0x01);
KSYMTAB_DATA(v4l2_jpeg_ref_table_chroma_dc_ht, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_chroma_dc_ht, 0x01);
KSYMTAB_DATA(v4l2_jpeg_ref_table_chroma_ac_ht, "");
SYMBOL_FLAGS(v4l2_jpeg_ref_table_chroma_ac_ht, 0x01);
KSYMTAB_FUNC(v4l2_jpeg_parse_header, "");
SYMBOL_FLAGS(v4l2_jpeg_parse_header, 0x01);

MODULE_INFO(depends, "");

