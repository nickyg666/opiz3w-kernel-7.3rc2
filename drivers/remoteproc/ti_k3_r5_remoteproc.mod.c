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


MODULE_INFO(depends, "ti_k3_common");

MODULE_ALIAS("of:N*T*Cti,am654-r5fss");
MODULE_ALIAS("of:N*T*Cti,am654-r5fssC*");
MODULE_ALIAS("of:N*T*Cti,j721e-r5fss");
MODULE_ALIAS("of:N*T*Cti,j721e-r5fssC*");
MODULE_ALIAS("of:N*T*Cti,j7200-r5fss");
MODULE_ALIAS("of:N*T*Cti,j7200-r5fssC*");
MODULE_ALIAS("of:N*T*Cti,am64-r5fss");
MODULE_ALIAS("of:N*T*Cti,am64-r5fssC*");
MODULE_ALIAS("of:N*T*Cti,am62-r5fss");
MODULE_ALIAS("of:N*T*Cti,am62-r5fssC*");
MODULE_ALIAS("of:N*T*Cti,j721s2-r5fss");
MODULE_ALIAS("of:N*T*Cti,j721s2-r5fssC*");
