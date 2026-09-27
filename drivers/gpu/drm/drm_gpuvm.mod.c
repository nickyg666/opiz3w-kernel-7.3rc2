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

KSYMTAB_FUNC(drm_gpuvm_range_valid, "");
SYMBOL_FLAGS(drm_gpuvm_range_valid, 0x01);
KSYMTAB_FUNC(drm_gpuvm_resv_object_alloc, "");
SYMBOL_FLAGS(drm_gpuvm_resv_object_alloc, 0x01);
KSYMTAB_FUNC(drm_gpuvm_init, "");
SYMBOL_FLAGS(drm_gpuvm_init, 0x01);
KSYMTAB_FUNC(drm_gpuvm_put, "");
SYMBOL_FLAGS(drm_gpuvm_put, 0x01);
KSYMTAB_FUNC(drm_gpuvm_prepare_vm, "");
SYMBOL_FLAGS(drm_gpuvm_prepare_vm, 0x01);
KSYMTAB_FUNC(drm_gpuvm_prepare_objects, "");
SYMBOL_FLAGS(drm_gpuvm_prepare_objects, 0x01);
KSYMTAB_FUNC(drm_gpuvm_prepare_range, "");
SYMBOL_FLAGS(drm_gpuvm_prepare_range, 0x01);
KSYMTAB_FUNC(drm_gpuvm_exec_lock, "");
SYMBOL_FLAGS(drm_gpuvm_exec_lock, 0x01);
KSYMTAB_FUNC(drm_gpuvm_exec_lock_array, "");
SYMBOL_FLAGS(drm_gpuvm_exec_lock_array, 0x01);
KSYMTAB_FUNC(drm_gpuvm_exec_lock_range, "");
SYMBOL_FLAGS(drm_gpuvm_exec_lock_range, 0x01);
KSYMTAB_FUNC(drm_gpuvm_validate, "");
SYMBOL_FLAGS(drm_gpuvm_validate, 0x01);
KSYMTAB_FUNC(drm_gpuvm_resv_add_fence, "");
SYMBOL_FLAGS(drm_gpuvm_resv_add_fence, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_create, "");
SYMBOL_FLAGS(drm_gpuvm_bo_create, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_put, "");
SYMBOL_FLAGS(drm_gpuvm_bo_put, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_put_deferred, "");
SYMBOL_FLAGS(drm_gpuvm_bo_put_deferred, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_deferred_cleanup, "");
SYMBOL_FLAGS(drm_gpuvm_bo_deferred_cleanup, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_find, "");
SYMBOL_FLAGS(drm_gpuvm_bo_find, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_obtain_locked, "");
SYMBOL_FLAGS(drm_gpuvm_bo_obtain_locked, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_obtain_prealloc, "");
SYMBOL_FLAGS(drm_gpuvm_bo_obtain_prealloc, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_extobj_add, "");
SYMBOL_FLAGS(drm_gpuvm_bo_extobj_add, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_evict, "");
SYMBOL_FLAGS(drm_gpuvm_bo_evict, 0x01);
KSYMTAB_FUNC(drm_gpuva_insert, "");
SYMBOL_FLAGS(drm_gpuva_insert, 0x01);
KSYMTAB_FUNC(drm_gpuva_remove, "");
SYMBOL_FLAGS(drm_gpuva_remove, 0x01);
KSYMTAB_FUNC(drm_gpuva_link, "");
SYMBOL_FLAGS(drm_gpuva_link, 0x01);
KSYMTAB_FUNC(drm_gpuva_unlink, "");
SYMBOL_FLAGS(drm_gpuva_unlink, 0x01);
KSYMTAB_FUNC(drm_gpuva_unlink_defer, "");
SYMBOL_FLAGS(drm_gpuva_unlink_defer, 0x01);
KSYMTAB_FUNC(drm_gpuva_find_first, "");
SYMBOL_FLAGS(drm_gpuva_find_first, 0x01);
KSYMTAB_FUNC(drm_gpuva_find, "");
SYMBOL_FLAGS(drm_gpuva_find, 0x01);
KSYMTAB_FUNC(drm_gpuvm_interval_empty, "");
SYMBOL_FLAGS(drm_gpuvm_interval_empty, 0x01);
KSYMTAB_FUNC(drm_gpuva_map, "");
SYMBOL_FLAGS(drm_gpuva_map, 0x01);
KSYMTAB_FUNC(drm_gpuva_remap, "");
SYMBOL_FLAGS(drm_gpuva_remap, 0x01);
KSYMTAB_FUNC(drm_gpuva_unmap, "");
SYMBOL_FLAGS(drm_gpuva_unmap, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_map, "");
SYMBOL_FLAGS(drm_gpuvm_sm_map, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_unmap, "");
SYMBOL_FLAGS(drm_gpuvm_sm_unmap, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_map_exec_lock, "");
SYMBOL_FLAGS(drm_gpuvm_sm_map_exec_lock, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_unmap_exec_lock, "");
SYMBOL_FLAGS(drm_gpuvm_sm_unmap_exec_lock, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_map_ops_create, "");
SYMBOL_FLAGS(drm_gpuvm_sm_map_ops_create, 0x01);
KSYMTAB_FUNC(drm_gpuvm_madvise_ops_create, "");
SYMBOL_FLAGS(drm_gpuvm_madvise_ops_create, 0x01);
KSYMTAB_FUNC(drm_gpuvm_sm_unmap_ops_create, "");
SYMBOL_FLAGS(drm_gpuvm_sm_unmap_ops_create, 0x01);
KSYMTAB_FUNC(drm_gpuvm_prefetch_ops_create, "");
SYMBOL_FLAGS(drm_gpuvm_prefetch_ops_create, 0x01);
KSYMTAB_FUNC(drm_gpuvm_bo_unmap_ops_create, "");
SYMBOL_FLAGS(drm_gpuvm_bo_unmap_ops_create, 0x01);
KSYMTAB_FUNC(drm_gpuva_ops_free, "");
SYMBOL_FLAGS(drm_gpuva_ops_free, 0x01);

MODULE_INFO(depends, "drm_exec");

