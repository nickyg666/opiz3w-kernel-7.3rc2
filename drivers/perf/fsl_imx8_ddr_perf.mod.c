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

MODULE_ALIAS("of:N*T*Cfsl,imx8-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8m-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8mq-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8mm-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8mn-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8mp-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8dxl-ddr-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8dxl-ddr-pmuC*");
MODULE_ALIAS("of:N*T*Cfsl,imx8dxl-db-pmu");
MODULE_ALIAS("of:N*T*Cfsl,imx8dxl-db-pmuC*");
