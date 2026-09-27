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

KSYMTAB_FUNC(pru_rproc_get, "");
SYMBOL_FLAGS(pru_rproc_get, 0x01);
KSYMTAB_FUNC(pru_rproc_put, "");
SYMBOL_FLAGS(pru_rproc_put, 0x01);
KSYMTAB_FUNC(pru_rproc_set_ctable, "");
SYMBOL_FLAGS(pru_rproc_set_ctable, 0x01);

MODULE_INFO(depends, "pruss");

MODULE_ALIAS("of:N*T*Cti,am3356-pru");
MODULE_ALIAS("of:N*T*Cti,am3356-pruC*");
MODULE_ALIAS("of:N*T*Cti,am4376-pru");
MODULE_ALIAS("of:N*T*Cti,am4376-pruC*");
MODULE_ALIAS("of:N*T*Cti,am5728-pru");
MODULE_ALIAS("of:N*T*Cti,am5728-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-pru");
MODULE_ALIAS("of:N*T*Cti,am642-pruC*");
MODULE_ALIAS("of:N*T*Cti,am642-rtu");
MODULE_ALIAS("of:N*T*Cti,am642-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am642-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,k2g-pru");
MODULE_ALIAS("of:N*T*Cti,k2g-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-pru");
MODULE_ALIAS("of:N*T*Cti,am654-pruC*");
MODULE_ALIAS("of:N*T*Cti,am654-rtu");
MODULE_ALIAS("of:N*T*Cti,am654-rtuC*");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pru");
MODULE_ALIAS("of:N*T*Cti,am654-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-pruC*");
MODULE_ALIAS("of:N*T*Cti,j721e-rtu");
MODULE_ALIAS("of:N*T*Cti,j721e-rtuC*");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pru");
MODULE_ALIAS("of:N*T*Cti,j721e-tx-pruC*");
MODULE_ALIAS("of:N*T*Cti,am625-pru");
MODULE_ALIAS("of:N*T*Cti,am625-pruC*");
