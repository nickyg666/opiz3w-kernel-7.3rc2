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

KSYMTAB_FUNC(cnstr_shdsc_aead_null_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_aead_null_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_aead_null_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_aead_null_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_aead_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_aead_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_aead_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_aead_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_aead_givencap, "");
SYMBOL_FLAGS(cnstr_shdsc_aead_givencap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_gcm_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_gcm_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_gcm_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_gcm_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_rfc4106_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_rfc4106_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_rfc4106_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_rfc4106_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_rfc4543_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_rfc4543_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_rfc4543_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_rfc4543_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_chachapoly, "");
SYMBOL_FLAGS(cnstr_shdsc_chachapoly, 0x00);
KSYMTAB_FUNC(cnstr_desc_skcipher_enc_dec, "");
SYMBOL_FLAGS(cnstr_desc_skcipher_enc_dec, 0x00);
KSYMTAB_FUNC(cnstr_desc_protected_blob_decap, "");
SYMBOL_FLAGS(cnstr_desc_protected_blob_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_skcipher_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_skcipher_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_skcipher_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_skcipher_decap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_xts_skcipher_encap, "");
SYMBOL_FLAGS(cnstr_shdsc_xts_skcipher_encap, 0x00);
KSYMTAB_FUNC(cnstr_shdsc_xts_skcipher_decap, "");
SYMBOL_FLAGS(cnstr_shdsc_xts_skcipher_decap, 0x00);

MODULE_INFO(depends, "error");

