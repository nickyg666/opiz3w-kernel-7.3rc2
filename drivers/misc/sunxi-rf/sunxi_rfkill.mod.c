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

KSYMTAB_FUNC(sunxi_gnss_set_power, "");
SYMBOL_FLAGS(sunxi_gnss_set_power, 0x01);
KSYMTAB_FUNC(sunxi_modem_set_power, "");
SYMBOL_FLAGS(sunxi_modem_set_power, 0x01);
KSYMTAB_FUNC(sunxi_bluetooth_set_power, "");
SYMBOL_FLAGS(sunxi_bluetooth_set_power, 0x01);
KSYMTAB_FUNC(sunxi_wlan_set_power, "");
SYMBOL_FLAGS(sunxi_wlan_set_power, 0x01);
KSYMTAB_FUNC(sunxi_wlan_get_bus_index, "");
SYMBOL_FLAGS(sunxi_wlan_get_bus_index, 0x01);
KSYMTAB_FUNC(sunxi_wlan_get_oob_irq, "");
SYMBOL_FLAGS(sunxi_wlan_get_oob_irq, 0x01);

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "4A955145E29EA8AD40B3024");
