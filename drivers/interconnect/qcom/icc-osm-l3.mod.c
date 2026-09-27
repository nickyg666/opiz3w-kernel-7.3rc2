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

MODULE_ALIAS("of:N*T*Cqcom,epss-l3");
MODULE_ALIAS("of:N*T*Cqcom,epss-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,osm-l3");
MODULE_ALIAS("of:N*T*Cqcom,osm-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-epss-l3");
MODULE_ALIAS("of:N*T*Cqcom,sa8775p-epss-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-osm-l3");
MODULE_ALIAS("of:N*T*Cqcom,sc7180-osm-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-epss-l3");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-epss-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-osm-l3");
MODULE_ALIAS("of:N*T*Cqcom,sdm845-osm-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,shikra-epss-l3");
MODULE_ALIAS("of:N*T*Cqcom,shikra-epss-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-osm-l3");
MODULE_ALIAS("of:N*T*Cqcom,sm8150-osm-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-osm-l3");
MODULE_ALIAS("of:N*T*Cqcom,sc8180x-osm-l3C*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-epss-l3");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-epss-l3C*");
