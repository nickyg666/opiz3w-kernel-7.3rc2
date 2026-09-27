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

KSYMTAB_FUNC(usb_gadget_get_string, "");
SYMBOL_FLAGS(usb_gadget_get_string, 0x01);
KSYMTAB_FUNC(usb_validate_langid, "");
SYMBOL_FLAGS(usb_validate_langid, 0x01);
KSYMTAB_FUNC(usb_descriptor_fillbuf, "");
SYMBOL_FLAGS(usb_descriptor_fillbuf, 0x01);
KSYMTAB_FUNC(usb_copy_descriptors, "");
SYMBOL_FLAGS(usb_copy_descriptors, 0x01);
KSYMTAB_FUNC(usb_assign_descriptors, "");
SYMBOL_FLAGS(usb_assign_descriptors, 0x01);
KSYMTAB_FUNC(usb_free_all_descriptors, "");
SYMBOL_FLAGS(usb_free_all_descriptors, 0x01);
KSYMTAB_FUNC(usb_otg_descriptor_alloc, "");
SYMBOL_FLAGS(usb_otg_descriptor_alloc, 0x01);
KSYMTAB_FUNC(usb_otg_descriptor_init, "");
SYMBOL_FLAGS(usb_otg_descriptor_init, 0x01);
KSYMTAB_FUNC(usb_ep_autoconfig_ss, "");
SYMBOL_FLAGS(usb_ep_autoconfig_ss, 0x01);
KSYMTAB_FUNC(usb_ep_autoconfig, "");
SYMBOL_FLAGS(usb_ep_autoconfig, 0x01);
KSYMTAB_FUNC(usb_ep_autoconfig_release, "");
SYMBOL_FLAGS(usb_ep_autoconfig_release, 0x01);
KSYMTAB_FUNC(usb_ep_autoconfig_reset, "");
SYMBOL_FLAGS(usb_ep_autoconfig_reset, 0x01);
KSYMTAB_FUNC(config_ep_by_speed_and_alt, "");
SYMBOL_FLAGS(config_ep_by_speed_and_alt, 0x01);
KSYMTAB_FUNC(config_ep_by_speed, "");
SYMBOL_FLAGS(config_ep_by_speed, 0x01);
KSYMTAB_FUNC(usb_add_function, "");
SYMBOL_FLAGS(usb_add_function, 0x01);
KSYMTAB_FUNC(usb_remove_function, "");
SYMBOL_FLAGS(usb_remove_function, 0x01);
KSYMTAB_FUNC(usb_function_deactivate, "");
SYMBOL_FLAGS(usb_function_deactivate, 0x01);
KSYMTAB_FUNC(usb_function_activate, "");
SYMBOL_FLAGS(usb_function_activate, 0x01);
KSYMTAB_FUNC(usb_interface_id, "");
SYMBOL_FLAGS(usb_interface_id, 0x01);
KSYMTAB_FUNC(usb_func_wakeup, "");
SYMBOL_FLAGS(usb_func_wakeup, 0x01);
KSYMTAB_FUNC(usb_add_config_only, "");
SYMBOL_FLAGS(usb_add_config_only, 0x01);
KSYMTAB_FUNC(usb_add_config, "");
SYMBOL_FLAGS(usb_add_config, 0x01);
KSYMTAB_FUNC(usb_string_id, "");
SYMBOL_FLAGS(usb_string_id, 0x01);
KSYMTAB_FUNC(usb_string_ids_tab, "");
SYMBOL_FLAGS(usb_string_ids_tab, 0x01);
KSYMTAB_FUNC(usb_gstrings_attach, "");
SYMBOL_FLAGS(usb_gstrings_attach, 0x01);
KSYMTAB_FUNC(usb_string_ids_n, "");
SYMBOL_FLAGS(usb_string_ids_n, 0x01);
KSYMTAB_FUNC(usb_composite_probe, "");
SYMBOL_FLAGS(usb_composite_probe, 0x01);
KSYMTAB_FUNC(usb_composite_unregister, "");
SYMBOL_FLAGS(usb_composite_unregister, 0x01);
KSYMTAB_FUNC(usb_composite_setup_continue, "");
SYMBOL_FLAGS(usb_composite_setup_continue, 0x01);
KSYMTAB_FUNC(usb_composite_overwrite_options, "");
SYMBOL_FLAGS(usb_composite_overwrite_options, 0x01);
KSYMTAB_FUNC(usb_get_function_instance, "");
SYMBOL_FLAGS(usb_get_function_instance, 0x01);
KSYMTAB_FUNC(usb_get_function, "");
SYMBOL_FLAGS(usb_get_function, 0x01);
KSYMTAB_FUNC(usb_put_function_instance, "");
SYMBOL_FLAGS(usb_put_function_instance, 0x01);
KSYMTAB_FUNC(usb_put_function, "");
SYMBOL_FLAGS(usb_put_function, 0x01);
KSYMTAB_FUNC(usb_function_register, "");
SYMBOL_FLAGS(usb_function_register, 0x01);
KSYMTAB_FUNC(usb_function_unregister, "");
SYMBOL_FLAGS(usb_function_unregister, 0x01);
KSYMTAB_FUNC(usb_os_desc_prepare_interf_dir, "");
SYMBOL_FLAGS(usb_os_desc_prepare_interf_dir, 0x00);
KSYMTAB_FUNC(unregister_gadget_item, "");
SYMBOL_FLAGS(unregister_gadget_item, 0x01);
KSYMTAB_FUNC(alloc_ep_req, "");
SYMBOL_FLAGS(alloc_ep_req, 0x01);

MODULE_INFO(depends, "");

