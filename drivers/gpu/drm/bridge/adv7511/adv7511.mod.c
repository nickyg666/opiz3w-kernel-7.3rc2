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


MODULE_INFO(depends, "drm_display_helper,drm_kms_helper");

MODULE_ALIAS("of:N*T*Cadi,adv7511");
MODULE_ALIAS("of:N*T*Cadi,adv7511C*");
MODULE_ALIAS("of:N*T*Cadi,adv7511w");
MODULE_ALIAS("of:N*T*Cadi,adv7511wC*");
MODULE_ALIAS("of:N*T*Cadi,adv7513");
MODULE_ALIAS("of:N*T*Cadi,adv7513C*");
MODULE_ALIAS("of:N*T*Cadi,adv7533");
MODULE_ALIAS("of:N*T*Cadi,adv7533C*");
MODULE_ALIAS("of:N*T*Cadi,adv7535");
MODULE_ALIAS("of:N*T*Cadi,adv7535C*");
MODULE_ALIAS("i2c:adv7511");
MODULE_ALIAS("i2c:adv7511w");
MODULE_ALIAS("i2c:adv7513");
MODULE_ALIAS("i2c:adv7533");
MODULE_ALIAS("i2c:adv7535");
