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

KSYMTAB_FUNC(drm_gem_ttm_print_info, "");
SYMBOL_FLAGS(drm_gem_ttm_print_info, 0x00);
KSYMTAB_FUNC(drm_gem_ttm_vmap, "");
SYMBOL_FLAGS(drm_gem_ttm_vmap, 0x00);
KSYMTAB_FUNC(drm_gem_ttm_vunmap, "");
SYMBOL_FLAGS(drm_gem_ttm_vunmap, 0x00);
KSYMTAB_FUNC(drm_gem_ttm_mmap, "");
SYMBOL_FLAGS(drm_gem_ttm_mmap, 0x00);
KSYMTAB_FUNC(drm_gem_ttm_dumb_map_offset, "");
SYMBOL_FLAGS(drm_gem_ttm_dumb_map_offset, 0x00);
KSYMTAB_FUNC(drm_fbdev_ttm_driver_fbdev_probe, "");
SYMBOL_FLAGS(drm_fbdev_ttm_driver_fbdev_probe, 0x00);

MODULE_INFO(depends, "drm_kms_helper,ttm");

