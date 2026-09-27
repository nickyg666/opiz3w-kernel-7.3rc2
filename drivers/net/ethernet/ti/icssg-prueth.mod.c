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


MODULE_INFO(depends, "icssg,icss_iep,hsr,pruss");

MODULE_ALIAS("of:N*T*Cti,am654-icssg-prueth");
MODULE_ALIAS("of:N*T*Cti,am654-icssg-pruethC*");
MODULE_ALIAS("of:N*T*Cti,am642-icssg-prueth");
MODULE_ALIAS("of:N*T*Cti,am642-icssg-pruethC*");
