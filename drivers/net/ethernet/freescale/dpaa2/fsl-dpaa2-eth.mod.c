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

KSYMTAB_DATA(dpaa2_ptp, "");
SYMBOL_FLAGS(dpaa2_ptp, 0x00);
KSYMTAB_DATA(dpaa2_phc_index, "");
SYMBOL_FLAGS(dpaa2_phc_index, 0x00);

MODULE_INFO(depends, "fsl-dpaa2-mac,phylink");

MODULE_ALIAS("fsl-mc:v00001957ddpni");
