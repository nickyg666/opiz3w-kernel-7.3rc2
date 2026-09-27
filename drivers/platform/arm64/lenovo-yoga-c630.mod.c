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

KSYMTAB_FUNC(yoga_c630_ec_read8, "");
SYMBOL_FLAGS(yoga_c630_ec_read8, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_read16, "");
SYMBOL_FLAGS(yoga_c630_ec_read16, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_ucsi_get_version, "");
SYMBOL_FLAGS(yoga_c630_ec_ucsi_get_version, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_ucsi_write, "");
SYMBOL_FLAGS(yoga_c630_ec_ucsi_write, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_ucsi_read, "");
SYMBOL_FLAGS(yoga_c630_ec_ucsi_read, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_register_notify, "");
SYMBOL_FLAGS(yoga_c630_ec_register_notify, 0x01);
KSYMTAB_FUNC(yoga_c630_ec_unregister_notify, "");
SYMBOL_FLAGS(yoga_c630_ec_unregister_notify, 0x01);

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:yoga-c630-ec");
MODULE_ALIAS("of:N*T*Clenovo,yoga-c630-ec");
MODULE_ALIAS("of:N*T*Clenovo,yoga-c630-ecC*");
