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

KSYMTAB_FUNC(drm_gem_dma_create, "");
SYMBOL_FLAGS(drm_gem_dma_create, 0x01);
KSYMTAB_FUNC(drm_gem_dma_free, "");
SYMBOL_FLAGS(drm_gem_dma_free, 0x01);
KSYMTAB_FUNC(drm_gem_dma_dumb_create_internal, "");
SYMBOL_FLAGS(drm_gem_dma_dumb_create_internal, 0x01);
KSYMTAB_FUNC(drm_gem_dma_dumb_create, "");
SYMBOL_FLAGS(drm_gem_dma_dumb_create, 0x01);
KSYMTAB_DATA(drm_gem_dma_vm_ops, "");
SYMBOL_FLAGS(drm_gem_dma_vm_ops, 0x01);
KSYMTAB_FUNC(drm_gem_dma_print_info, "");
SYMBOL_FLAGS(drm_gem_dma_print_info, 0x00);
KSYMTAB_FUNC(drm_gem_dma_get_sg_table, "");
SYMBOL_FLAGS(drm_gem_dma_get_sg_table, 0x01);
KSYMTAB_FUNC(drm_gem_dma_prime_import_sg_table, "");
SYMBOL_FLAGS(drm_gem_dma_prime_import_sg_table, 0x01);
KSYMTAB_FUNC(drm_gem_dma_vmap, "");
SYMBOL_FLAGS(drm_gem_dma_vmap, 0x01);
KSYMTAB_FUNC(drm_gem_dma_mmap, "");
SYMBOL_FLAGS(drm_gem_dma_mmap, 0x01);
KSYMTAB_FUNC(drm_gem_dma_prime_import_sg_table_vmap, "");
SYMBOL_FLAGS(drm_gem_dma_prime_import_sg_table_vmap, 0x00);
KSYMTAB_FUNC(drm_fbdev_dma_driver_fbdev_probe, "");
SYMBOL_FLAGS(drm_fbdev_dma_driver_fbdev_probe, 0x00);
KSYMTAB_FUNC(drm_fb_dma_get_gem_obj, "");
SYMBOL_FLAGS(drm_fb_dma_get_gem_obj, 0x01);
KSYMTAB_FUNC(drm_fb_dma_get_gem_addr, "");
SYMBOL_FLAGS(drm_fb_dma_get_gem_addr, 0x01);
KSYMTAB_FUNC(drm_fb_dma_sync_non_coherent, "");
SYMBOL_FLAGS(drm_fb_dma_sync_non_coherent, 0x01);
KSYMTAB_FUNC(drm_fb_dma_get_scanout_buffer, "");
SYMBOL_FLAGS(drm_fb_dma_get_scanout_buffer, 0x00);

MODULE_INFO(depends, "drm_kms_helper");

