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

KSYMTAB_FUNC(caam_jr_alloc, "");
SYMBOL_FLAGS(caam_jr_alloc, 0x00);
KSYMTAB_FUNC(caam_jr_free, "");
SYMBOL_FLAGS(caam_jr_free, 0x00);
KSYMTAB_FUNC(caam_jr_enqueue, "");
SYMBOL_FLAGS(caam_jr_enqueue, 0x00);
KSYMTAB_FUNC(split_key_done, "");
SYMBOL_FLAGS(split_key_done, 0x00);
KSYMTAB_FUNC(gen_split_key, "");
SYMBOL_FLAGS(gen_split_key, 0x00);

MODULE_INFO(depends, "crypto_engine,error,caam,caamalg_desc,caamhash_desc,libdes");

MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec-v4.0-job-ringC*");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ring");
MODULE_ALIAS("of:N*T*Cfsl,sec4.0-job-ringC*");
