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

MODULE_ALIAS("of:N*T*Cti,tcan1042");
MODULE_ALIAS("of:N*T*Cti,tcan1042C*");
MODULE_ALIAS("of:N*T*Cti,tcan1043");
MODULE_ALIAS("of:N*T*Cti,tcan1043C*");
MODULE_ALIAS("of:N*T*Cnxp,tja1048");
MODULE_ALIAS("of:N*T*Cnxp,tja1048C*");
MODULE_ALIAS("of:N*T*Cnxp,tja1051");
MODULE_ALIAS("of:N*T*Cnxp,tja1051C*");
MODULE_ALIAS("of:N*T*Cnxp,tja1057");
MODULE_ALIAS("of:N*T*Cnxp,tja1057C*");
MODULE_ALIAS("of:N*T*Cnxp,tjr1443");
MODULE_ALIAS("of:N*T*Cnxp,tjr1443C*");
