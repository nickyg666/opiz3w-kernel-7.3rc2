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


MODULE_INFO(depends, "libdes");

MODULE_ALIAS("of:N*T*Carm,cryptocell-703-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-703-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-713-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-713-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-712-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-712-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-710-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-710-reeC*");
MODULE_ALIAS("of:N*T*Carm,cryptocell-630p-ree");
MODULE_ALIAS("of:N*T*Carm,cryptocell-630p-reeC*");

MODULE_INFO(srcversion, "51D48A940325917958A4311");
