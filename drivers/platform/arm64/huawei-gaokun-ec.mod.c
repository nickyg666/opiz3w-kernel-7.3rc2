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

KSYMTAB_FUNC(gaokun_ec_read, "");
SYMBOL_FLAGS(gaokun_ec_read, 0x01);
KSYMTAB_FUNC(gaokun_ec_write, "");
SYMBOL_FLAGS(gaokun_ec_write, 0x01);
KSYMTAB_FUNC(gaokun_ec_read_byte, "");
SYMBOL_FLAGS(gaokun_ec_read_byte, 0x01);
KSYMTAB_FUNC(gaokun_ec_register_notify, "");
SYMBOL_FLAGS(gaokun_ec_register_notify, 0x01);
KSYMTAB_FUNC(gaokun_ec_unregister_notify, "");
SYMBOL_FLAGS(gaokun_ec_unregister_notify, 0x01);
KSYMTAB_FUNC(gaokun_ec_psy_multi_read, "");
SYMBOL_FLAGS(gaokun_ec_psy_multi_read, 0x01);
KSYMTAB_FUNC(gaokun_ec_psy_get_smart_charge, "");
SYMBOL_FLAGS(gaokun_ec_psy_get_smart_charge, 0x01);
KSYMTAB_FUNC(gaokun_ec_psy_set_smart_charge, "");
SYMBOL_FLAGS(gaokun_ec_psy_set_smart_charge, 0x01);
KSYMTAB_FUNC(gaokun_ec_psy_get_smart_charge_enable, "");
SYMBOL_FLAGS(gaokun_ec_psy_get_smart_charge_enable, 0x01);
KSYMTAB_FUNC(gaokun_ec_psy_set_smart_charge_enable, "");
SYMBOL_FLAGS(gaokun_ec_psy_set_smart_charge_enable, 0x01);
KSYMTAB_FUNC(gaokun_ec_ucsi_read, "");
SYMBOL_FLAGS(gaokun_ec_ucsi_read, 0x01);
KSYMTAB_FUNC(gaokun_ec_ucsi_write, "");
SYMBOL_FLAGS(gaokun_ec_ucsi_write, 0x01);
KSYMTAB_FUNC(gaokun_ec_ucsi_get_reg, "");
SYMBOL_FLAGS(gaokun_ec_ucsi_get_reg, 0x01);
KSYMTAB_FUNC(gaokun_ec_ucsi_pan_ack, "");
SYMBOL_FLAGS(gaokun_ec_ucsi_pan_ack, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Chuawei,gaokun3-ec");
MODULE_ALIAS("of:N*T*Chuawei,gaokun3-ecC*");
MODULE_ALIAS("i2c:gaokun-ec");
