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


MODULE_INFO(depends, "spi-dw");

MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssi");
MODULE_ALIAS("of:N*T*Csnps,dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spi");
MODULE_ALIAS("of:N*T*Cmscc,ocelot-spiC*");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spi");
MODULE_ALIAS("of:N*T*Cmscc,jaguar2-spiC*");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssi");
MODULE_ALIAS("of:N*T*Camazon,alpine-dw-apb-ssiC*");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spi");
MODULE_ALIAS("of:N*T*Crenesas,rzn1-spiC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01a");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-1.01aC*");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-2.00a");
MODULE_ALIAS("of:N*T*Csnps,dwc-ssi-2.00aC*");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssi");
MODULE_ALIAS("of:N*T*Cintel,keembay-ssiC*");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssi");
MODULE_ALIAS("of:N*T*Cintel,mountevans-imc-ssiC*");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spi");
MODULE_ALIAS("of:N*T*Cmicrochip,sparx5-spiC*");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spi");
MODULE_ALIAS("of:N*T*Ccanaan,k210-spiC*");
MODULE_ALIAS("of:N*T*Camd,pensando-elba-spi");
MODULE_ALIAS("of:N*T*Camd,pensando-elba-spiC*");
MODULE_ALIAS("of:N*T*Cstarfive,jhb100-sfc");
MODULE_ALIAS("of:N*T*Cstarfive,jhb100-sfcC*");
