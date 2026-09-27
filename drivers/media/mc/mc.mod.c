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

KSYMTAB_FUNC(media_device_register_entity, "");
SYMBOL_FLAGS(media_device_register_entity, 0x01);
KSYMTAB_FUNC(media_device_unregister_entity, "");
SYMBOL_FLAGS(media_device_unregister_entity, 0x01);
KSYMTAB_FUNC(media_device_init, "");
SYMBOL_FLAGS(media_device_init, 0x01);
KSYMTAB_FUNC(media_device_cleanup, "");
SYMBOL_FLAGS(media_device_cleanup, 0x01);
KSYMTAB_FUNC(__media_device_register, "");
SYMBOL_FLAGS(__media_device_register, 0x01);
KSYMTAB_FUNC(media_device_register_entity_notify, "");
SYMBOL_FLAGS(media_device_register_entity_notify, 0x01);
KSYMTAB_FUNC(media_device_unregister_entity_notify, "");
SYMBOL_FLAGS(media_device_unregister_entity_notify, 0x01);
KSYMTAB_FUNC(media_device_unregister, "");
SYMBOL_FLAGS(media_device_unregister, 0x01);
KSYMTAB_FUNC(media_device_pci_init, "");
SYMBOL_FLAGS(media_device_pci_init, 0x01);
KSYMTAB_FUNC(__media_device_usb_init, "");
SYMBOL_FLAGS(__media_device_usb_init, 0x01);
KSYMTAB_FUNC(media_entity_enum_init, "");
SYMBOL_FLAGS(media_entity_enum_init, 0x01);
KSYMTAB_FUNC(media_entity_enum_cleanup, "");
SYMBOL_FLAGS(media_entity_enum_cleanup, 0x01);
KSYMTAB_FUNC(media_entity_pads_init, "");
SYMBOL_FLAGS(media_entity_pads_init, 0x01);
KSYMTAB_FUNC(media_graph_walk_init, "");
SYMBOL_FLAGS(media_graph_walk_init, 0x01);
KSYMTAB_FUNC(media_graph_walk_cleanup, "");
SYMBOL_FLAGS(media_graph_walk_cleanup, 0x01);
KSYMTAB_FUNC(media_graph_walk_start, "");
SYMBOL_FLAGS(media_graph_walk_start, 0x01);
KSYMTAB_FUNC(media_graph_walk_next, "");
SYMBOL_FLAGS(media_graph_walk_next, 0x01);
KSYMTAB_FUNC(__media_pipeline_start, "");
SYMBOL_FLAGS(__media_pipeline_start, 0x01);
KSYMTAB_FUNC(media_pipeline_start, "");
SYMBOL_FLAGS(media_pipeline_start, 0x01);
KSYMTAB_FUNC(__media_pipeline_stop, "");
SYMBOL_FLAGS(__media_pipeline_stop, 0x01);
KSYMTAB_FUNC(media_pipeline_stop, "");
SYMBOL_FLAGS(media_pipeline_stop, 0x01);
KSYMTAB_FUNC(media_pipeline_alloc_start, "");
SYMBOL_FLAGS(media_pipeline_alloc_start, 0x01);
KSYMTAB_FUNC(__media_pipeline_pad_iter_next, "");
SYMBOL_FLAGS(__media_pipeline_pad_iter_next, 0x01);
KSYMTAB_FUNC(media_pipeline_entity_iter_init, "");
SYMBOL_FLAGS(media_pipeline_entity_iter_init, 0x01);
KSYMTAB_FUNC(media_pipeline_entity_iter_cleanup, "");
SYMBOL_FLAGS(media_pipeline_entity_iter_cleanup, 0x01);
KSYMTAB_FUNC(__media_pipeline_entity_iter_next, "");
SYMBOL_FLAGS(__media_pipeline_entity_iter_next, 0x01);
KSYMTAB_FUNC(media_get_pad_index, "");
SYMBOL_FLAGS(media_get_pad_index, 0x01);
KSYMTAB_FUNC(media_create_pad_link, "");
SYMBOL_FLAGS(media_create_pad_link, 0x01);
KSYMTAB_FUNC(media_create_pad_links, "");
SYMBOL_FLAGS(media_create_pad_links, 0x01);
KSYMTAB_FUNC(__media_entity_remove_links, "");
SYMBOL_FLAGS(__media_entity_remove_links, 0x01);
KSYMTAB_FUNC(media_entity_remove_links, "");
SYMBOL_FLAGS(media_entity_remove_links, 0x01);
KSYMTAB_FUNC(__media_entity_setup_link, "");
SYMBOL_FLAGS(__media_entity_setup_link, 0x01);
KSYMTAB_FUNC(media_entity_setup_link, "");
SYMBOL_FLAGS(media_entity_setup_link, 0x01);
KSYMTAB_FUNC(media_entity_find_link, "");
SYMBOL_FLAGS(media_entity_find_link, 0x01);
KSYMTAB_FUNC(media_pad_remote_pad_first, "");
SYMBOL_FLAGS(media_pad_remote_pad_first, 0x01);
KSYMTAB_FUNC(media_entity_remote_pad_unique, "");
SYMBOL_FLAGS(media_entity_remote_pad_unique, 0x01);
KSYMTAB_FUNC(media_pad_remote_pad_unique, "");
SYMBOL_FLAGS(media_pad_remote_pad_unique, 0x01);
KSYMTAB_FUNC(media_entity_get_fwnode_pad, "");
SYMBOL_FLAGS(media_entity_get_fwnode_pad, 0x01);
KSYMTAB_FUNC(media_entity_pipeline, "");
SYMBOL_FLAGS(media_entity_pipeline, 0x01);
KSYMTAB_FUNC(media_pad_pipeline, "");
SYMBOL_FLAGS(media_pad_pipeline, 0x01);
KSYMTAB_FUNC(media_devnode_create, "");
SYMBOL_FLAGS(media_devnode_create, 0x01);
KSYMTAB_FUNC(media_devnode_remove, "");
SYMBOL_FLAGS(media_devnode_remove, 0x01);
KSYMTAB_FUNC(media_create_intf_link, "");
SYMBOL_FLAGS(media_create_intf_link, 0x01);
KSYMTAB_FUNC(__media_remove_intf_link, "");
SYMBOL_FLAGS(__media_remove_intf_link, 0x01);
KSYMTAB_FUNC(media_remove_intf_link, "");
SYMBOL_FLAGS(media_remove_intf_link, 0x01);
KSYMTAB_FUNC(__media_remove_intf_links, "");
SYMBOL_FLAGS(__media_remove_intf_links, 0x01);
KSYMTAB_FUNC(media_remove_intf_links, "");
SYMBOL_FLAGS(media_remove_intf_links, 0x01);
KSYMTAB_FUNC(media_create_ancillary_link, "");
SYMBOL_FLAGS(media_create_ancillary_link, 0x01);
KSYMTAB_FUNC(__media_entity_next_link, "");
SYMBOL_FLAGS(__media_entity_next_link, 0x01);
KSYMTAB_FUNC(media_request_put, "");
SYMBOL_FLAGS(media_request_put, 0x01);
KSYMTAB_FUNC(media_request_get_by_fd, "");
SYMBOL_FLAGS(media_request_get_by_fd, 0x01);
KSYMTAB_FUNC(media_request_object_find, "");
SYMBOL_FLAGS(media_request_object_find, 0x01);
KSYMTAB_FUNC(media_request_object_put, "");
SYMBOL_FLAGS(media_request_object_put, 0x01);
KSYMTAB_FUNC(media_request_object_init, "");
SYMBOL_FLAGS(media_request_object_init, 0x01);
KSYMTAB_FUNC(media_request_object_bind, "");
SYMBOL_FLAGS(media_request_object_bind, 0x01);
KSYMTAB_FUNC(media_request_object_unbind, "");
SYMBOL_FLAGS(media_request_object_unbind, 0x01);
KSYMTAB_FUNC(media_request_object_complete, "");
SYMBOL_FLAGS(media_request_object_complete, 0x01);
KSYMTAB_FUNC(media_request_manual_complete, "");
SYMBOL_FLAGS(media_request_manual_complete, 0x01);
KSYMTAB_FUNC(media_device_usb_allocate, "");
SYMBOL_FLAGS(media_device_usb_allocate, 0x01);
KSYMTAB_FUNC(media_device_delete, "");
SYMBOL_FLAGS(media_device_delete, 0x01);

MODULE_INFO(depends, "");

