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

KSYMTAB_FUNC(vsp1_du_init, "");
SYMBOL_FLAGS(vsp1_du_init, 0x01);
KSYMTAB_FUNC(vsp1_du_enable, "");
SYMBOL_FLAGS(vsp1_du_enable, 0x01);
KSYMTAB_FUNC(vsp1_du_disable, "");
SYMBOL_FLAGS(vsp1_du_disable, 0x01);
KSYMTAB_FUNC(vsp1_du_atomic_begin, "");
SYMBOL_FLAGS(vsp1_du_atomic_begin, 0x01);
KSYMTAB_FUNC(vsp1_du_atomic_update, "");
SYMBOL_FLAGS(vsp1_du_atomic_update, 0x01);
KSYMTAB_FUNC(vsp1_du_atomic_flush, "");
SYMBOL_FLAGS(vsp1_du_atomic_flush, 0x01);
KSYMTAB_FUNC(vsp1_du_map_sg, "");
SYMBOL_FLAGS(vsp1_du_map_sg, 0x01);
KSYMTAB_FUNC(vsp1_du_unmap_sg, "");
SYMBOL_FLAGS(vsp1_du_unmap_sg, 0x01);
KSYMTAB_FUNC(vsp1_isp_init, "");
SYMBOL_FLAGS(vsp1_isp_init, 0x01);
KSYMTAB_FUNC(vsp1_isp_get_bus_master, "");
SYMBOL_FLAGS(vsp1_isp_get_bus_master, 0x01);
KSYMTAB_FUNC(vsp1_isp_alloc_buffer, "");
SYMBOL_FLAGS(vsp1_isp_alloc_buffer, 0x01);
KSYMTAB_FUNC(vsp1_isp_free_buffer, "");
SYMBOL_FLAGS(vsp1_isp_free_buffer, 0x01);
KSYMTAB_FUNC(vsp1_isp_start_streaming, "");
SYMBOL_FLAGS(vsp1_isp_start_streaming, 0x01);
KSYMTAB_FUNC(vsp1_isp_stop_streaming, "");
SYMBOL_FLAGS(vsp1_isp_stop_streaming, 0x01);
KSYMTAB_FUNC(vsp1_isp_job_prepare, "");
SYMBOL_FLAGS(vsp1_isp_job_prepare, 0x01);
KSYMTAB_FUNC(vsp1_isp_job_run, "");
SYMBOL_FLAGS(vsp1_isp_job_run, 0x01);
KSYMTAB_FUNC(vsp1_isp_job_release, "");
SYMBOL_FLAGS(vsp1_isp_job_release, 0x01);

MODULE_INFO(depends, "videobuf2-v4l2,videodev,mc,rcar-fcp,videobuf2-dma-contig,videobuf2-common,videobuf2-vmalloc");

MODULE_ALIAS("of:N*T*Crenesas,vsp1");
MODULE_ALIAS("of:N*T*Crenesas,vsp1C*");
MODULE_ALIAS("of:N*T*Crenesas,vsp2");
MODULE_ALIAS("of:N*T*Crenesas,vsp2C*");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-vsp2");
MODULE_ALIAS("of:N*T*Crenesas,r9a07g044-vsp2C*");
