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

KSYMTAB_FUNC(btbcm_check_bdaddr, "");
SYMBOL_FLAGS(btbcm_check_bdaddr, 0x01);
KSYMTAB_FUNC(btbcm_set_bdaddr, "");
SYMBOL_FLAGS(btbcm_set_bdaddr, 0x01);
KSYMTAB_FUNC(btbcm_read_pcm_int_params, "");
SYMBOL_FLAGS(btbcm_read_pcm_int_params, 0x01);
KSYMTAB_FUNC(btbcm_write_pcm_int_params, "");
SYMBOL_FLAGS(btbcm_write_pcm_int_params, 0x01);
KSYMTAB_FUNC(btbcm_patchram, "");
SYMBOL_FLAGS(btbcm_patchram, 0x00);
KSYMTAB_FUNC(btbcm_initialize, "");
SYMBOL_FLAGS(btbcm_initialize, 0x01);
KSYMTAB_FUNC(btbcm_finalize, "");
SYMBOL_FLAGS(btbcm_finalize, 0x01);
KSYMTAB_FUNC(btbcm_setup_patchram, "");
SYMBOL_FLAGS(btbcm_setup_patchram, 0x01);
KSYMTAB_FUNC(btbcm_setup_apple, "");
SYMBOL_FLAGS(btbcm_setup_apple, 0x01);

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "9E18E1C9330754575A977EB");
