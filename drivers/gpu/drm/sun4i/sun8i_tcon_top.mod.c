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

KSYMTAB_FUNC(sun8i_tcon_top_set_hdmi_src, "");
SYMBOL_FLAGS(sun8i_tcon_top_set_hdmi_src, 0x00);
KSYMTAB_FUNC(sun8i_tcon_top_de_config, "");
SYMBOL_FLAGS(sun8i_tcon_top_de_config, 0x00);
KSYMTAB_DATA(sun8i_tcon_top_of_table, "");
SYMBOL_FLAGS(sun8i_tcon_top_of_table, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-tcon-top");
MODULE_ALIAS("of:N*T*Callwinner,sun8i-r40-tcon-topC*");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-tcon-top");
MODULE_ALIAS("of:N*T*Callwinner,sun20i-d1-tcon-topC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-tcon-top");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h6-tcon-topC*");
