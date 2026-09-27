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

KSYMTAB_FUNC(v4l2_fwnode_endpoint_parse, "");
SYMBOL_FLAGS(v4l2_fwnode_endpoint_parse, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_endpoint_free, "");
SYMBOL_FLAGS(v4l2_fwnode_endpoint_free, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_endpoint_alloc_parse, "");
SYMBOL_FLAGS(v4l2_fwnode_endpoint_alloc_parse, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_parse_link, "");
SYMBOL_FLAGS(v4l2_fwnode_parse_link, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_put_link, "");
SYMBOL_FLAGS(v4l2_fwnode_put_link, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_connector_free, "");
SYMBOL_FLAGS(v4l2_fwnode_connector_free, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_connector_parse, "");
SYMBOL_FLAGS(v4l2_fwnode_connector_parse, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_connector_add_link, "");
SYMBOL_FLAGS(v4l2_fwnode_connector_add_link, 0x01);
KSYMTAB_FUNC(v4l2_fwnode_device_parse, "");
SYMBOL_FLAGS(v4l2_fwnode_device_parse, 0x01);
KSYMTAB_FUNC(__v4l2_async_register_subdev_sensor, "");
SYMBOL_FLAGS(__v4l2_async_register_subdev_sensor, 0x01);

MODULE_INFO(depends, "v4l2-async,videodev");

