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


MODULE_INFO(depends, "ti_k3_common");

MODULE_ALIAS("of:N*T*Cti,j721e-c66-dsp");
MODULE_ALIAS("of:N*T*Cti,j721e-c66-dspC*");
MODULE_ALIAS("of:N*T*Cti,j721e-c71-dsp");
MODULE_ALIAS("of:N*T*Cti,j721e-c71-dspC*");
MODULE_ALIAS("of:N*T*Cti,j721s2-c71-dsp");
MODULE_ALIAS("of:N*T*Cti,j721s2-c71-dspC*");
MODULE_ALIAS("of:N*T*Cti,am62a-c7xv-dsp");
MODULE_ALIAS("of:N*T*Cti,am62a-c7xv-dspC*");
