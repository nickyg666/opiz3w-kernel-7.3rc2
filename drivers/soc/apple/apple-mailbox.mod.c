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

KSYMTAB_FUNC(apple_mbox_send, "");
SYMBOL_FLAGS(apple_mbox_send, 0x00);
KSYMTAB_FUNC(apple_mbox_poll, "");
SYMBOL_FLAGS(apple_mbox_poll, 0x00);
KSYMTAB_FUNC(apple_mbox_start, "");
SYMBOL_FLAGS(apple_mbox_start, 0x00);
KSYMTAB_FUNC(apple_mbox_stop, "");
SYMBOL_FLAGS(apple_mbox_stop, 0x00);
KSYMTAB_FUNC(apple_mbox_get, "");
SYMBOL_FLAGS(apple_mbox_get, 0x00);
KSYMTAB_FUNC(apple_mbox_get_byname, "");
SYMBOL_FLAGS(apple_mbox_get_byname, 0x00);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Capple,asc-mailbox-v4");
MODULE_ALIAS("of:N*T*Capple,asc-mailbox-v4C*");
MODULE_ALIAS("of:N*T*Capple,t8015-asc-mailbox");
MODULE_ALIAS("of:N*T*Capple,t8015-asc-mailboxC*");
MODULE_ALIAS("of:N*T*Capple,m3-mailbox-v2");
MODULE_ALIAS("of:N*T*Capple,m3-mailbox-v2C*");
