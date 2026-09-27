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


MODULE_INFO(depends, "tcpci");

MODULE_ALIAS("of:N*T*Cetekmicro,et7304");
MODULE_ALIAS("of:N*T*Cetekmicro,et7304C*");
MODULE_ALIAS("of:N*T*Crichtek,rt1711h");
MODULE_ALIAS("of:N*T*Crichtek,rt1711hC*");
MODULE_ALIAS("of:N*T*Crichtek,rt1715");
MODULE_ALIAS("of:N*T*Crichtek,rt1715C*");
MODULE_ALIAS("i2c:et7304");
MODULE_ALIAS("i2c:rt1711h");
MODULE_ALIAS("i2c:rt1715");
