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

KSYMTAB_FUNC(st_lsm6dsx_probe, "IIO_LSM6DSX");
SYMBOL_FLAGS(st_lsm6dsx_probe, 0x00);
KSYMTAB_DATA(st_lsm6dsx_pm_ops, "IIO_LSM6DSX");
SYMBOL_FLAGS(st_lsm6dsx_pm_ops, 0x00);

MODULE_INFO(depends, "industrialio-triggered-buffer,kfifo_buf");

