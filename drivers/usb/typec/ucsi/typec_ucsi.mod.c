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

KSYMTAB_FUNC(ucsi_notify_common, "");
SYMBOL_FLAGS(ucsi_notify_common, 0x01);
KSYMTAB_FUNC(ucsi_sync_control_common, "");
SYMBOL_FLAGS(ucsi_sync_control_common, 0x01);
KSYMTAB_FUNC(ucsi_send_command, "");
SYMBOL_FLAGS(ucsi_send_command, 0x01);
KSYMTAB_FUNC(ucsi_write_message_out_command, "");
SYMBOL_FLAGS(ucsi_write_message_out_command, 0x01);
KSYMTAB_FUNC(ucsi_connector_change, "");
SYMBOL_FLAGS(ucsi_connector_change, 0x01);
KSYMTAB_FUNC(ucsi_suspend, "");
SYMBOL_FLAGS(ucsi_suspend, 0x01);
KSYMTAB_FUNC(ucsi_resume, "");
SYMBOL_FLAGS(ucsi_resume, 0x01);
KSYMTAB_FUNC(ucsi_get_drvdata, "");
SYMBOL_FLAGS(ucsi_get_drvdata, 0x01);
KSYMTAB_FUNC(ucsi_set_drvdata, "");
SYMBOL_FLAGS(ucsi_set_drvdata, 0x01);
KSYMTAB_FUNC(ucsi_create, "");
SYMBOL_FLAGS(ucsi_create, 0x01);
KSYMTAB_FUNC(ucsi_destroy, "");
SYMBOL_FLAGS(ucsi_destroy, 0x01);
KSYMTAB_FUNC(ucsi_register, "");
SYMBOL_FLAGS(ucsi_register, 0x01);
KSYMTAB_FUNC(ucsi_unregister, "");
SYMBOL_FLAGS(ucsi_unregister, 0x01);

MODULE_INFO(depends, "typec");

