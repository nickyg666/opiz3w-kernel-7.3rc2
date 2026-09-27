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

KSYMTAB_FUNC(sparse_keymap_entry_from_scancode, "");
SYMBOL_FLAGS(sparse_keymap_entry_from_scancode, 0x00);
KSYMTAB_FUNC(sparse_keymap_entry_from_keycode, "");
SYMBOL_FLAGS(sparse_keymap_entry_from_keycode, 0x00);
KSYMTAB_FUNC(sparse_keymap_setup, "");
SYMBOL_FLAGS(sparse_keymap_setup, 0x00);
KSYMTAB_FUNC(sparse_keymap_report_entry, "");
SYMBOL_FLAGS(sparse_keymap_report_entry, 0x00);
KSYMTAB_FUNC(sparse_keymap_report_event, "");
SYMBOL_FLAGS(sparse_keymap_report_event, 0x00);

MODULE_INFO(depends, "");

