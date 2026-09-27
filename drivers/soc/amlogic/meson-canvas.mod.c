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

KSYMTAB_FUNC(meson_canvas_get, "");
SYMBOL_FLAGS(meson_canvas_get, 0x01);
KSYMTAB_FUNC(meson_canvas_config, "");
SYMBOL_FLAGS(meson_canvas_config, 0x01);
KSYMTAB_FUNC(meson_canvas_alloc, "");
SYMBOL_FLAGS(meson_canvas_alloc, 0x01);
KSYMTAB_FUNC(meson_canvas_free, "");
SYMBOL_FLAGS(meson_canvas_free, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Camlogic,meson8-canvas");
MODULE_ALIAS("of:N*T*Camlogic,meson8-canvasC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-canvas");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-canvasC*");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-canvas");
MODULE_ALIAS("of:N*T*Camlogic,meson8m2-canvasC*");
MODULE_ALIAS("of:N*T*Camlogic,canvas");
MODULE_ALIAS("of:N*T*Camlogic,canvasC*");
