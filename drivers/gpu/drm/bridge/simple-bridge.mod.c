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


MODULE_INFO(depends, "drm_kms_helper");

MODULE_ALIAS("of:N*T*Cdumb-vga-dac");
MODULE_ALIAS("of:N*T*Cdumb-vga-dacC*");
MODULE_ALIAS("of:N*T*Cadi,adv7123");
MODULE_ALIAS("of:N*T*Cadi,adv7123C*");
MODULE_ALIAS("of:N*T*Calgoltek,ag6311");
MODULE_ALIAS("of:N*T*Calgoltek,ag6311C*");
MODULE_ALIAS("of:N*T*Casl-tek,cs5263");
MODULE_ALIAS("of:N*T*Casl-tek,cs5263C*");
MODULE_ALIAS("of:N*T*Cmstar,tsumu88adt3-lf-1");
MODULE_ALIAS("of:N*T*Cmstar,tsumu88adt3-lf-1C*");
MODULE_ALIAS("of:N*T*Cparade,ps185hdm");
MODULE_ALIAS("of:N*T*Cparade,ps185hdmC*");
MODULE_ALIAS("of:N*T*Cradxa,ra620");
MODULE_ALIAS("of:N*T*Cradxa,ra620C*");
MODULE_ALIAS("of:N*T*Crealtek,rtd2171");
MODULE_ALIAS("of:N*T*Crealtek,rtd2171C*");
MODULE_ALIAS("of:N*T*Cti,opa362");
MODULE_ALIAS("of:N*T*Cti,opa362C*");
MODULE_ALIAS("of:N*T*Cti,ths8135");
MODULE_ALIAS("of:N*T*Cti,ths8135C*");
MODULE_ALIAS("of:N*T*Cti,ths8134");
MODULE_ALIAS("of:N*T*Cti,ths8134C*");
