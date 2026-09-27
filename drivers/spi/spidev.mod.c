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

MODULE_ALIAS("acpi*:SPT0001:*");
MODULE_ALIAS("acpi*:SPT0002:*");
MODULE_ALIAS("acpi*:SPT0003:*");
MODULE_ALIAS("of:N*T*Cabb,spi-sensor");
MODULE_ALIAS("of:N*T*Cabb,spi-sensorC*");
MODULE_ALIAS("of:N*T*Carduino,unoq-mcu");
MODULE_ALIAS("of:N*T*Carduino,unoq-mcuC*");
MODULE_ALIAS("of:N*T*Ccisco,spi-petra");
MODULE_ALIAS("of:N*T*Ccisco,spi-petraC*");
MODULE_ALIAS("of:N*T*Cdh,dhcom-board");
MODULE_ALIAS("of:N*T*Cdh,dhcom-boardC*");
MODULE_ALIAS("of:N*T*Celgin,jg10309-01");
MODULE_ALIAS("of:N*T*Celgin,jg10309-01C*");
MODULE_ALIAS("of:N*T*Cgocontroll,moduline-module-slot");
MODULE_ALIAS("of:N*T*Cgocontroll,moduline-module-slotC*");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488");
MODULE_ALIAS("of:N*T*Clineartechnology,ltc2488C*");
MODULE_ALIAS("of:N*T*Clwn,bk4");
MODULE_ALIAS("of:N*T*Clwn,bk4C*");
MODULE_ALIAS("of:N*T*Clwn,bk4-spi");
MODULE_ALIAS("of:N*T*Clwn,bk4-spiC*");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpld");
MODULE_ALIAS("of:N*T*Cmenlo,m53cpldC*");
MODULE_ALIAS("of:N*T*Cmicron,spi-authenta");
MODULE_ALIAS("of:N*T*Cmicron,spi-authentaC*");
MODULE_ALIAS("of:N*T*Crohm,bh2228fv");
MODULE_ALIAS("of:N*T*Crohm,bh2228fvC*");
MODULE_ALIAS("of:N*T*Crohm,dh2228fv");
MODULE_ALIAS("of:N*T*Crohm,dh2228fvC*");
MODULE_ALIAS("of:N*T*Csemtech,sx1301");
MODULE_ALIAS("of:N*T*Csemtech,sx1301C*");
MODULE_ALIAS("of:N*T*Csilabs,em3581");
MODULE_ALIAS("of:N*T*Csilabs,em3581C*");
MODULE_ALIAS("of:N*T*Csilabs,si3210");
MODULE_ALIAS("of:N*T*Csilabs,si3210C*");
MODULE_ALIAS("spi:spi-sensor");
MODULE_ALIAS("spi:unoq-mcu");
MODULE_ALIAS("spi:spi-petra");
MODULE_ALIAS("spi:dhcom-board");
MODULE_ALIAS("spi:jg10309-01");
MODULE_ALIAS("spi:moduline-module-slot");
MODULE_ALIAS("spi:ltc2488");
MODULE_ALIAS("spi:bk4");
MODULE_ALIAS("spi:bk4-spi");
MODULE_ALIAS("spi:m53cpld");
MODULE_ALIAS("spi:spi-authenta");
MODULE_ALIAS("spi:bh2228fv");
MODULE_ALIAS("spi:dh2228fv");
MODULE_ALIAS("spi:sx1301");
MODULE_ALIAS("spi:em3581");
MODULE_ALIAS("spi:si3210");
