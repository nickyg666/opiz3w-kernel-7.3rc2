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


MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Camlogic,g12a-ddr-pmu");
MODULE_ALIAS("of:N*T*Camlogic,g12a-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Camlogic,g12b-ddr-pmu");
MODULE_ALIAS("of:N*T*Camlogic,g12b-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Camlogic,sm1-ddr-pmu");
MODULE_ALIAS("of:N*T*Camlogic,sm1-ddr-pmuC*");
