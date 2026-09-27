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

KSYMTAB_DATA(slimbus_bus, "");
SYMBOL_FLAGS(slimbus_bus, 0x01);
KSYMTAB_FUNC(__slim_driver_register, "");
SYMBOL_FLAGS(__slim_driver_register, 0x01);
KSYMTAB_FUNC(slim_driver_unregister, "");
SYMBOL_FLAGS(slim_driver_unregister, 0x01);
KSYMTAB_FUNC(slim_register_controller, "");
SYMBOL_FLAGS(slim_register_controller, 0x01);
KSYMTAB_FUNC(slim_unregister_controller, "");
SYMBOL_FLAGS(slim_unregister_controller, 0x01);
KSYMTAB_FUNC(slim_report_absent, "");
SYMBOL_FLAGS(slim_report_absent, 0x01);
KSYMTAB_FUNC(slim_get_device, "");
SYMBOL_FLAGS(slim_get_device, 0x01);
KSYMTAB_FUNC(of_slim_get_device, "");
SYMBOL_FLAGS(of_slim_get_device, 0x01);
KSYMTAB_FUNC(slim_device_report_present, "");
SYMBOL_FLAGS(slim_device_report_present, 0x01);
KSYMTAB_FUNC(slim_get_logical_addr, "");
SYMBOL_FLAGS(slim_get_logical_addr, 0x01);
KSYMTAB_FUNC(slim_msg_response, "");
SYMBOL_FLAGS(slim_msg_response, 0x01);
KSYMTAB_FUNC(slim_alloc_txn_tid, "");
SYMBOL_FLAGS(slim_alloc_txn_tid, 0x01);
KSYMTAB_FUNC(slim_free_txn_tid, "");
SYMBOL_FLAGS(slim_free_txn_tid, 0x01);
KSYMTAB_FUNC(slim_do_transfer, "");
SYMBOL_FLAGS(slim_do_transfer, 0x01);
KSYMTAB_FUNC(slim_xfer_msg, "");
SYMBOL_FLAGS(slim_xfer_msg, 0x01);
KSYMTAB_FUNC(slim_read, "");
SYMBOL_FLAGS(slim_read, 0x01);
KSYMTAB_FUNC(slim_readb, "");
SYMBOL_FLAGS(slim_readb, 0x01);
KSYMTAB_FUNC(slim_write, "");
SYMBOL_FLAGS(slim_write, 0x01);
KSYMTAB_FUNC(slim_writeb, "");
SYMBOL_FLAGS(slim_writeb, 0x01);
KSYMTAB_FUNC(slim_ctrl_clk_pause, "");
SYMBOL_FLAGS(slim_ctrl_clk_pause, 0x01);
KSYMTAB_FUNC(slim_stream_allocate, "");
SYMBOL_FLAGS(slim_stream_allocate, 0x01);
KSYMTAB_FUNC(slim_stream_prepare, "");
SYMBOL_FLAGS(slim_stream_prepare, 0x01);
KSYMTAB_FUNC(slim_stream_enable, "");
SYMBOL_FLAGS(slim_stream_enable, 0x01);
KSYMTAB_FUNC(slim_stream_disable, "");
SYMBOL_FLAGS(slim_stream_disable, 0x01);
KSYMTAB_FUNC(slim_stream_unprepare, "");
SYMBOL_FLAGS(slim_stream_unprepare, 0x01);
KSYMTAB_FUNC(slim_stream_free, "");
SYMBOL_FLAGS(slim_stream_free, 0x01);

MODULE_INFO(depends, "");

