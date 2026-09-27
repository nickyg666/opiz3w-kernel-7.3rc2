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

KSYMTAB_FUNC(brcmf_set_wsec, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_set_wsec, 0x01);
KSYMTAB_FUNC(brcmf_cfg80211_mgmt_tx, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_cfg80211_mgmt_tx, 0x01);
KSYMTAB_FUNC(brcmf_fil_cmd_data_set, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_cmd_data_set, 0x01);
KSYMTAB_FUNC(brcmf_fil_cmd_data_get, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_cmd_data_get, 0x01);
KSYMTAB_FUNC(brcmf_fil_iovar_data_set, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_iovar_data_set, 0x01);
KSYMTAB_FUNC(brcmf_fil_iovar_data_get, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_iovar_data_get, 0x01);
KSYMTAB_FUNC(brcmf_fil_bsscfg_data_set, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_bsscfg_data_set, 0x01);
KSYMTAB_FUNC(brcmf_fil_bsscfg_data_get, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_bsscfg_data_get, 0x01);
KSYMTAB_FUNC(brcmf_fil_xtlv_data_set, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_xtlv_data_set, 0x01);
KSYMTAB_FUNC(brcmf_fil_xtlv_data_get, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fil_xtlv_data_get, 0x01);
KSYMTAB_FUNC(brcmf_fweh_event_name, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fweh_event_name, 0x01);
KSYMTAB_FUNC(brcmf_fweh_register, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fweh_register, 0x01);
KSYMTAB_FUNC(brcmf_fwvid_register_vendor, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fwvid_register_vendor, 0x01);
KSYMTAB_FUNC(brcmf_fwvid_unregister_vendor, "BRCMFMAC");
SYMBOL_FLAGS(brcmf_fwvid_unregister_vendor, 0x01);

MODULE_INFO(depends, "brcmutil");

MODULE_ALIAS("sdio:c*v02D0dA887*");
MODULE_ALIAS("sdio:c*v02D0d4324*");
MODULE_ALIAS("sdio:c*v02D0d4329*");
MODULE_ALIAS("sdio:c*v02D0d4330*");
MODULE_ALIAS("sdio:c*v02D0d4334*");
MODULE_ALIAS("sdio:c*v02D0dA94C*");
MODULE_ALIAS("sdio:c*v02D0dA94D*");
MODULE_ALIAS("sdio:c*v02D0dA962*");
MODULE_ALIAS("sdio:c*v02D0dA9A4*");
MODULE_ALIAS("sdio:c*v02D0d4335*");
MODULE_ALIAS("sdio:c*v02D0d4339*");
MODULE_ALIAS("sdio:c*v02D0dA9A6*");
MODULE_ALIAS("sdio:c*v02D0dA9AF*");
MODULE_ALIAS("sdio:c*v02D0d4345*");
MODULE_ALIAS("sdio:c*v02D0dA9BF*");
MODULE_ALIAS("sdio:c*v02D0d4354*");
MODULE_ALIAS("sdio:c*v02D0d4356*");
MODULE_ALIAS("sdio:c*v02D0d4359*");
MODULE_ALIAS("sdio:c*v02D0dAAE7*");
MODULE_ALIAS("sdio:c*v02D0dAAE8*");
MODULE_ALIAS("sdio:c*v02D0d4373*");
MODULE_ALIAS("sdio:c*v02D0dA804*");
MODULE_ALIAS("sdio:c*v02D0d4355*");
MODULE_ALIAS("sdio:c*v04B4dBD3D*");
