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

KSYMTAB_FUNC(pruss_get, "");
SYMBOL_FLAGS(pruss_get, 0x01);
KSYMTAB_FUNC(pruss_put, "");
SYMBOL_FLAGS(pruss_put, 0x01);
KSYMTAB_FUNC(pruss_request_mem_region, "");
SYMBOL_FLAGS(pruss_request_mem_region, 0x01);
KSYMTAB_FUNC(pruss_release_mem_region, "");
SYMBOL_FLAGS(pruss_release_mem_region, 0x01);
KSYMTAB_FUNC(pruss_cfg_get_gpmux, "");
SYMBOL_FLAGS(pruss_cfg_get_gpmux, 0x01);
KSYMTAB_FUNC(pruss_cfg_set_gpmux, "");
SYMBOL_FLAGS(pruss_cfg_set_gpmux, 0x01);
KSYMTAB_FUNC(pruss_cfg_gpimode, "");
SYMBOL_FLAGS(pruss_cfg_gpimode, 0x01);
KSYMTAB_FUNC(pruss_cfg_miirt_enable, "");
SYMBOL_FLAGS(pruss_cfg_miirt_enable, 0x01);
KSYMTAB_FUNC(pruss_cfg_xfr_enable, "");
SYMBOL_FLAGS(pruss_cfg_xfr_enable, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cti,am3356-pruss");
MODULE_ALIAS("of:N*T*Cti,am3356-prussC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss0C*");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1");
MODULE_ALIAS("of:N*T*Cti,am4376-pruss1C*");
MODULE_ALIAS("of:N*T*Cti,am5728-pruss");
MODULE_ALIAS("of:N*T*Cti,am5728-prussC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pruss");
MODULE_ALIAS("of:N*T*Cti,k2g-prussC*");
MODULE_ALIAS("of:N*T*Cti,am654-icssg");
MODULE_ALIAS("of:N*T*Cti,am654-icssgC*");
MODULE_ALIAS("of:N*T*Cti,j721e-icssg");
MODULE_ALIAS("of:N*T*Cti,j721e-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am642-icssg");
MODULE_ALIAS("of:N*T*Cti,am642-icssgC*");
MODULE_ALIAS("of:N*T*Cti,am625-pruss");
MODULE_ALIAS("of:N*T*Cti,am625-prussC*");
