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

KSYMTAB_FUNC(v4l2_async_nf_init, "");
SYMBOL_FLAGS(v4l2_async_nf_init, 0x00);
KSYMTAB_FUNC(v4l2_async_subdev_nf_init, "");
SYMBOL_FLAGS(v4l2_async_subdev_nf_init, 0x01);
KSYMTAB_FUNC(v4l2_async_nf_register, "");
SYMBOL_FLAGS(v4l2_async_nf_register, 0x00);
KSYMTAB_FUNC(v4l2_async_nf_unregister, "");
SYMBOL_FLAGS(v4l2_async_nf_unregister, 0x00);
KSYMTAB_FUNC(v4l2_async_nf_cleanup, "");
SYMBOL_FLAGS(v4l2_async_nf_cleanup, 0x01);
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode, "");
SYMBOL_FLAGS(__v4l2_async_nf_add_fwnode, 0x01);
KSYMTAB_FUNC(__v4l2_async_nf_add_fwnode_remote, "");
SYMBOL_FLAGS(__v4l2_async_nf_add_fwnode_remote, 0x01);
KSYMTAB_FUNC(__v4l2_async_nf_add_i2c, "");
SYMBOL_FLAGS(__v4l2_async_nf_add_i2c, 0x01);
KSYMTAB_FUNC(v4l2_async_subdev_endpoint_add, "");
SYMBOL_FLAGS(v4l2_async_subdev_endpoint_add, 0x01);
KSYMTAB_FUNC(v4l2_async_connection_unique, "");
SYMBOL_FLAGS(v4l2_async_connection_unique, 0x01);
KSYMTAB_FUNC(__v4l2_async_register_subdev, "");
SYMBOL_FLAGS(__v4l2_async_register_subdev, 0x00);
KSYMTAB_FUNC(v4l2_async_unregister_subdev, "");
SYMBOL_FLAGS(v4l2_async_unregister_subdev, 0x00);

MODULE_INFO(depends, "videodev,mc");

