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

MODULE_ALIAS("of:N*T*Cti,omap2-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap2-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap3-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap3-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,omap4-mailbox");
MODULE_ALIAS("of:N*T*Cti,omap4-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,am654-mailbox");
MODULE_ALIAS("of:N*T*Cti,am654-mailboxC*");
MODULE_ALIAS("of:N*T*Cti,am64-mailbox");
MODULE_ALIAS("of:N*T*Cti,am64-mailboxC*");
