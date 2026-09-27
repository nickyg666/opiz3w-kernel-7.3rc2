#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

KSYMTAB_FUNC(apple_rtkit_is_running, "");
SYMBOL_FLAGS(apple_rtkit_is_running, 0x01);
KSYMTAB_FUNC(apple_rtkit_is_crashed, "");
SYMBOL_FLAGS(apple_rtkit_is_crashed, 0x01);
KSYMTAB_FUNC(apple_rtkit_send_message, "");
SYMBOL_FLAGS(apple_rtkit_send_message, 0x01);
KSYMTAB_FUNC(apple_rtkit_poll, "");
SYMBOL_FLAGS(apple_rtkit_poll, 0x01);
KSYMTAB_FUNC(apple_rtkit_start_ep, "");
SYMBOL_FLAGS(apple_rtkit_start_ep, 0x01);
KSYMTAB_FUNC(apple_rtkit_init, "");
SYMBOL_FLAGS(apple_rtkit_init, 0x01);
KSYMTAB_FUNC(apple_rtkit_reinit, "");
SYMBOL_FLAGS(apple_rtkit_reinit, 0x01);
KSYMTAB_FUNC(apple_rtkit_boot, "");
SYMBOL_FLAGS(apple_rtkit_boot, 0x01);
KSYMTAB_FUNC(apple_rtkit_shutdown, "");
SYMBOL_FLAGS(apple_rtkit_shutdown, 0x01);
KSYMTAB_FUNC(apple_rtkit_poweroff, "");
SYMBOL_FLAGS(apple_rtkit_poweroff, 0x01);
KSYMTAB_FUNC(apple_rtkit_idle, "");
SYMBOL_FLAGS(apple_rtkit_idle, 0x01);
KSYMTAB_FUNC(apple_rtkit_quiesce, "");
SYMBOL_FLAGS(apple_rtkit_quiesce, 0x01);
KSYMTAB_FUNC(apple_rtkit_wake, "");
SYMBOL_FLAGS(apple_rtkit_wake, 0x01);
KSYMTAB_FUNC(apple_rtkit_free, "");
SYMBOL_FLAGS(apple_rtkit_free, 0x01);
KSYMTAB_FUNC(devm_apple_rtkit_init, "");
SYMBOL_FLAGS(devm_apple_rtkit_init, 0x01);

MODULE_INFO(depends, "apple-mailbox");

