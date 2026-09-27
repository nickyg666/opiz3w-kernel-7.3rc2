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

KSYMTAB_FUNC(st_sensors_debugfs_reg_access, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_debugfs_reg_access, 0x00);
KSYMTAB_FUNC(st_sensors_set_odr, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_set_odr, 0x00);
KSYMTAB_FUNC(st_sensors_set_enable, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_set_enable, 0x00);
KSYMTAB_FUNC(st_sensors_set_axis_enable, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_set_axis_enable, 0x00);
KSYMTAB_FUNC(st_sensors_power_enable, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_power_enable, 0x00);
KSYMTAB_FUNC(st_sensors_dev_name_probe, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_dev_name_probe, 0x00);
KSYMTAB_FUNC(st_sensors_init_sensor, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_init_sensor, 0x00);
KSYMTAB_FUNC(st_sensors_set_dataready_irq, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_set_dataready_irq, 0x00);
KSYMTAB_FUNC(st_sensors_set_fullscale_by_gain, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_set_fullscale_by_gain, 0x00);
KSYMTAB_FUNC(st_sensors_read_info_raw, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_read_info_raw, 0x00);
KSYMTAB_FUNC(st_sensors_get_settings_index, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_get_settings_index, 0x00);
KSYMTAB_FUNC(st_sensors_verify_id, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_verify_id, 0x00);
KSYMTAB_FUNC(st_sensors_sysfs_sampling_frequency_avail, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_sysfs_sampling_frequency_avail, 0x00);
KSYMTAB_FUNC(st_sensors_sysfs_scale_avail, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_sysfs_scale_avail, 0x00);
KSYMTAB_FUNC(st_sensors_trigger_handler, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_trigger_handler, 0x00);
KSYMTAB_FUNC(st_sensors_allocate_trigger, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_allocate_trigger, 0x00);
KSYMTAB_FUNC(st_sensors_validate_device, "IIO_ST_SENSORS");
SYMBOL_FLAGS(st_sensors_validate_device, 0x00);

MODULE_INFO(depends, "");

