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

KSYMTAB_FUNC(cros_ec_sensors_push_data, "");
SYMBOL_FLAGS(cros_ec_sensors_push_data, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_core_init, "");
SYMBOL_FLAGS(cros_ec_sensors_core_init, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_core_register, "");
SYMBOL_FLAGS(cros_ec_sensors_core_register, 0x01);
KSYMTAB_FUNC(cros_ec_motion_send_host_cmd, "");
SYMBOL_FLAGS(cros_ec_motion_send_host_cmd, 0x01);
KSYMTAB_DATA(cros_ec_sensors_ext_info, "");
SYMBOL_FLAGS(cros_ec_sensors_ext_info, 0x01);
KSYMTAB_DATA(cros_ec_sensors_limited_info, "");
SYMBOL_FLAGS(cros_ec_sensors_limited_info, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_read_lpc, "");
SYMBOL_FLAGS(cros_ec_sensors_read_lpc, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_read_cmd, "");
SYMBOL_FLAGS(cros_ec_sensors_read_cmd, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_capture, "");
SYMBOL_FLAGS(cros_ec_sensors_capture, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_core_read, "");
SYMBOL_FLAGS(cros_ec_sensors_core_read, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_core_read_avail, "");
SYMBOL_FLAGS(cros_ec_sensors_core_read_avail, 0x01);
KSYMTAB_FUNC(cros_ec_sensors_core_write, "");
SYMBOL_FLAGS(cros_ec_sensors_core_write, 0x01);
KSYMTAB_DATA(cros_ec_sensors_pm_ops, "");
SYMBOL_FLAGS(cros_ec_sensors_pm_ops, 0x01);

MODULE_INFO(depends, "industrialio-triggered-buffer,kfifo_buf");

