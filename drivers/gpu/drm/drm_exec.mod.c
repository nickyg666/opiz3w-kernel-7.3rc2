#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

KSYMTAB_FUNC(drm_exec_init, "");
SYMBOL_FLAGS(drm_exec_init, 0x00);
KSYMTAB_FUNC(drm_exec_fini, "");
SYMBOL_FLAGS(drm_exec_fini, 0x00);
KSYMTAB_FUNC(drm_exec_cleanup, "");
SYMBOL_FLAGS(drm_exec_cleanup, 0x00);
KSYMTAB_FUNC(drm_exec_lock_obj, "");
SYMBOL_FLAGS(drm_exec_lock_obj, 0x00);
KSYMTAB_FUNC(drm_exec_unlock_obj, "");
SYMBOL_FLAGS(drm_exec_unlock_obj, 0x00);
KSYMTAB_FUNC(drm_exec_prepare_obj, "");
SYMBOL_FLAGS(drm_exec_prepare_obj, 0x00);
KSYMTAB_FUNC(drm_exec_prepare_array, "");
SYMBOL_FLAGS(drm_exec_prepare_array, 0x00);

MODULE_INFO(depends, "");

