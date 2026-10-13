#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(drm_gem_shmem_init, "");
SYMBOL_FLAGS(drm_gem_shmem_init, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_create, "");
SYMBOL_FLAGS(drm_gem_shmem_create, 0x01);
KSYMTAB_FUNC(__drm_gem_shmem_free_sgt_locked, "");
SYMBOL_FLAGS(__drm_gem_shmem_free_sgt_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_release, "");
SYMBOL_FLAGS(drm_gem_shmem_release, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_free, "");
SYMBOL_FLAGS(drm_gem_shmem_free, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_put_pages_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_put_pages_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_pin_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_pin_locked, 0x00);
KSYMTAB_FUNC(drm_gem_shmem_unpin_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_unpin_locked, 0x00);
KSYMTAB_FUNC(drm_gem_shmem_pin, "");
SYMBOL_FLAGS(drm_gem_shmem_pin, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_unpin, "");
SYMBOL_FLAGS(drm_gem_shmem_unpin, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_vmap_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_vmap_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_vunmap_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_vunmap_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_create_with_handle, "");
SYMBOL_FLAGS(drm_gem_shmem_create_with_handle, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_madvise_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_madvise_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_purge_locked, "");
SYMBOL_FLAGS(drm_gem_shmem_purge_locked, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_dumb_create, "");
SYMBOL_FLAGS(drm_gem_shmem_dumb_create, 0x01);
KSYMTAB_DATA(drm_gem_shmem_vm_ops, "");
SYMBOL_FLAGS(drm_gem_shmem_vm_ops, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_mmap, "");
SYMBOL_FLAGS(drm_gem_shmem_mmap, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_print_info, "");
SYMBOL_FLAGS(drm_gem_shmem_print_info, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_get_sg_table, "");
SYMBOL_FLAGS(drm_gem_shmem_get_sg_table, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_get_pages_sgt, "");
SYMBOL_FLAGS(drm_gem_shmem_get_pages_sgt, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_prime_import_sg_table, "");
SYMBOL_FLAGS(drm_gem_shmem_prime_import_sg_table, 0x01);
KSYMTAB_FUNC(drm_gem_shmem_prime_import_no_map, "");
SYMBOL_FLAGS(drm_gem_shmem_prime_import_no_map, 0x01);
KSYMTAB_FUNC(drm_fbdev_shmem_driver_fbdev_probe, "");
SYMBOL_FLAGS(drm_fbdev_shmem_driver_fbdev_probe, 0x00);

MODULE_INFO(depends, "drm_kms_helper");

