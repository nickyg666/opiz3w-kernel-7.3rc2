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


MODULE_INFO(depends, "apple-rtkit,nvme-core,apple-sart");

MODULE_ALIAS("of:N*T*Capple,t8015-nvme-ans2");
MODULE_ALIAS("of:N*T*Capple,t8015-nvme-ans2C*");
MODULE_ALIAS("of:N*T*Capple,t8103-nvme-ans2");
MODULE_ALIAS("of:N*T*Capple,t8103-nvme-ans2C*");
MODULE_ALIAS("of:N*T*Capple,nvme-ans2");
MODULE_ALIAS("of:N*T*Capple,nvme-ans2C*");
