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

KSYMTAB_FUNC(cdns_csi2rx_negotiate_ppc, "module:j721e-csi2rx");
SYMBOL_FLAGS(cdns_csi2rx_negotiate_ppc, 0x01);

MODULE_INFO(depends, "videodev,v4l2-async,mc,v4l2-fwnode");

MODULE_ALIAS("of:N*T*Cstarfive,jh7110-csi2rx");
MODULE_ALIAS("of:N*T*Cstarfive,jh7110-csi2rxC*");
MODULE_ALIAS("of:N*T*Ccdns,csi2rx");
MODULE_ALIAS("of:N*T*Ccdns,csi2rxC*");
