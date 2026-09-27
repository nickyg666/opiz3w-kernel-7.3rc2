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


MODULE_INFO(depends, "mhi");

MODULE_ALIAS("pci:v000017CBd00000116sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd0000011Asv00001C5Dsd00002020bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd0000011Asv00001C5Dsd0000202Abc*sc*i*");
MODULE_ALIAS("pci:v000017CBd0000011Asv00001C5Dsd00002045bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd0000011Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000304sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000306sv000017CBsd0000010Cbc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000306sv000018D7sd00000200bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000308sv000018D7sd00000301bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000306sv00001C5Dsd00002000bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000306sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000308sv00001C5Dsd00002010bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000308sv00001C5Dsd00002015bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000308sv0000105Bsd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000308sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000309sv00001C5Dsd0000201Abc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000309sv00001C5Dsd00002025bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000309sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000017CBd00000601sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd00001004sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd00001007sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd0000100Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001EACd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0ABsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0B0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0B1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0BFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0C3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0D8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0D9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0F0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0F1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0F2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0F5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E0F9sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E118sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E11Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E11Esv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000105Bd0000E123sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001269d000000B3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001269d000000B4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001269d000000BAsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001269d000000BBsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000003F0d00000A6Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000203Ed00001000sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000203Ed00001001sv*sd*bc*sc*i*");
