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

MODULE_ALIAS("of:N*T*Cedt,edt-ft5206");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5206C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5306C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5406C*");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506");
MODULE_ALIAS("of:N*T*Cedt,edt-ft5506C*");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726");
MODULE_ALIAS("of:N*T*Cevervision,ev-ft5726C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft3518");
MODULE_ALIAS("of:N*T*Cfocaltech,ft3518C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5426");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5426C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5452");
MODULE_ALIAS("of:N*T*Cfocaltech,ft5452C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236");
MODULE_ALIAS("of:N*T*Cfocaltech,ft6236C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8201");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8201C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8716");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8716C*");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8719");
MODULE_ALIAS("of:N*T*Cfocaltech,ft8719C*");
MODULE_ALIAS("i2c:edt-ft5x06");
MODULE_ALIAS("i2c:edt-ft5506");
MODULE_ALIAS("i2c:ev-ft5726");
MODULE_ALIAS("i2c:ft3518");
MODULE_ALIAS("i2c:ft5452");
MODULE_ALIAS("i2c:ft6236");
MODULE_ALIAS("i2c:ft8201");
MODULE_ALIAS("i2c:ft8716");
MODULE_ALIAS("i2c:ft8719");
