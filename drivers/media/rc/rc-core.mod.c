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

KSYMTAB_FUNC(rc_map_get, "");
SYMBOL_FLAGS(rc_map_get, 0x01);
KSYMTAB_FUNC(rc_map_register, "");
SYMBOL_FLAGS(rc_map_register, 0x01);
KSYMTAB_FUNC(rc_map_unregister, "");
SYMBOL_FLAGS(rc_map_unregister, 0x01);
KSYMTAB_FUNC(rc_g_keycode_from_table, "");
SYMBOL_FLAGS(rc_g_keycode_from_table, 0x01);
KSYMTAB_FUNC(rc_keyup, "");
SYMBOL_FLAGS(rc_keyup, 0x01);
KSYMTAB_FUNC(rc_repeat, "");
SYMBOL_FLAGS(rc_repeat, 0x01);
KSYMTAB_FUNC(rc_keydown, "");
SYMBOL_FLAGS(rc_keydown, 0x01);
KSYMTAB_FUNC(rc_keydown_notimeout, "");
SYMBOL_FLAGS(rc_keydown_notimeout, 0x01);
KSYMTAB_FUNC(rc_allocate_device, "");
SYMBOL_FLAGS(rc_allocate_device, 0x01);
KSYMTAB_FUNC(rc_free_device, "");
SYMBOL_FLAGS(rc_free_device, 0x01);
KSYMTAB_FUNC(devm_rc_allocate_device, "");
SYMBOL_FLAGS(devm_rc_allocate_device, 0x01);
KSYMTAB_FUNC(rc_register_device, "");
SYMBOL_FLAGS(rc_register_device, 0x01);
KSYMTAB_FUNC(devm_rc_register_device, "");
SYMBOL_FLAGS(devm_rc_register_device, 0x01);
KSYMTAB_FUNC(rc_unregister_device, "");
SYMBOL_FLAGS(rc_unregister_device, 0x01);
KSYMTAB_FUNC(ir_raw_event_store, "");
SYMBOL_FLAGS(ir_raw_event_store, 0x01);
KSYMTAB_FUNC(ir_raw_event_store_edge, "");
SYMBOL_FLAGS(ir_raw_event_store_edge, 0x01);
KSYMTAB_FUNC(ir_raw_event_store_with_timeout, "");
SYMBOL_FLAGS(ir_raw_event_store_with_timeout, 0x01);
KSYMTAB_FUNC(ir_raw_event_store_with_filter, "");
SYMBOL_FLAGS(ir_raw_event_store_with_filter, 0x01);
KSYMTAB_FUNC(ir_raw_event_set_idle, "");
SYMBOL_FLAGS(ir_raw_event_set_idle, 0x01);
KSYMTAB_FUNC(ir_raw_event_handle, "");
SYMBOL_FLAGS(ir_raw_event_handle, 0x01);
KSYMTAB_FUNC(ir_raw_gen_manchester, "");
SYMBOL_FLAGS(ir_raw_gen_manchester, 0x00);
KSYMTAB_FUNC(ir_raw_gen_pd, "");
SYMBOL_FLAGS(ir_raw_gen_pd, 0x00);
KSYMTAB_FUNC(ir_raw_gen_pl, "");
SYMBOL_FLAGS(ir_raw_gen_pl, 0x00);
KSYMTAB_FUNC(ir_raw_encode_scancode, "");
SYMBOL_FLAGS(ir_raw_encode_scancode, 0x00);
KSYMTAB_FUNC(ir_raw_encode_carrier, "");
SYMBOL_FLAGS(ir_raw_encode_carrier, 0x00);
KSYMTAB_FUNC(ir_raw_handler_register, "");
SYMBOL_FLAGS(ir_raw_handler_register, 0x00);
KSYMTAB_FUNC(ir_raw_handler_unregister, "");
SYMBOL_FLAGS(ir_raw_handler_unregister, 0x00);

MODULE_INFO(depends, "");

