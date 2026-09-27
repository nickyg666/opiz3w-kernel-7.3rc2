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


MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v5986p1198d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3431p6241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v3431p6341d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6506d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6507d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6508d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p650Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p6570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0610d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E3p0625d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p2412d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p2514d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p2517d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p2744d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p5744d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1DA0p5511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1DA0p55A1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5411d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp5414d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BDAp0179d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1A40p0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8027d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8140d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8142d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8440d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0451p8442d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p0817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2109p2817d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v20B1p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("of:N*T*Cusb-a-connector");
MODULE_ALIAS("of:N*T*Cusb-a-connectorC*");
MODULE_ALIAS("of:N*T*Cusb424,2412");
MODULE_ALIAS("of:N*T*Cusb424,2412C*");
MODULE_ALIAS("of:N*T*Cusb424,2514");
MODULE_ALIAS("of:N*T*Cusb424,2514C*");
MODULE_ALIAS("of:N*T*Cusb424,2517");
MODULE_ALIAS("of:N*T*Cusb424,2517C*");
MODULE_ALIAS("of:N*T*Cusb424,2744");
MODULE_ALIAS("of:N*T*Cusb424,2744C*");
MODULE_ALIAS("of:N*T*Cusb424,5744");
MODULE_ALIAS("of:N*T*Cusb424,5744C*");
MODULE_ALIAS("of:N*T*Cusb451,8025");
MODULE_ALIAS("of:N*T*Cusb451,8025C*");
MODULE_ALIAS("of:N*T*Cusb451,8027");
MODULE_ALIAS("of:N*T*Cusb451,8027C*");
MODULE_ALIAS("of:N*T*Cusb451,8140");
MODULE_ALIAS("of:N*T*Cusb451,8140C*");
MODULE_ALIAS("of:N*T*Cusb451,8142");
MODULE_ALIAS("of:N*T*Cusb451,8142C*");
MODULE_ALIAS("of:N*T*Cusb451,8440");
MODULE_ALIAS("of:N*T*Cusb451,8440C*");
MODULE_ALIAS("of:N*T*Cusb451,8442");
MODULE_ALIAS("of:N*T*Cusb451,8442C*");
MODULE_ALIAS("of:N*T*Cusb4b4,6504");
MODULE_ALIAS("of:N*T*Cusb4b4,6504C*");
MODULE_ALIAS("of:N*T*Cusb4b4,6506");
MODULE_ALIAS("of:N*T*Cusb4b4,6506C*");
MODULE_ALIAS("of:N*T*Cusb4b4,6570");
MODULE_ALIAS("of:N*T*Cusb4b4,6570C*");
MODULE_ALIAS("of:N*T*Cusb5e3,608");
MODULE_ALIAS("of:N*T*Cusb5e3,608C*");
MODULE_ALIAS("of:N*T*Cusb5e3,610");
MODULE_ALIAS("of:N*T*Cusb5e3,610C*");
MODULE_ALIAS("of:N*T*Cusb5e3,620");
MODULE_ALIAS("of:N*T*Cusb5e3,620C*");
MODULE_ALIAS("of:N*T*Cusb5e3,625");
MODULE_ALIAS("of:N*T*Cusb5e3,625C*");
MODULE_ALIAS("of:N*T*Cusb5e3,626");
MODULE_ALIAS("of:N*T*Cusb5e3,626C*");
MODULE_ALIAS("of:N*T*Cusbbda,179");
MODULE_ALIAS("of:N*T*Cusbbda,179C*");
MODULE_ALIAS("of:N*T*Cusbbda,411");
MODULE_ALIAS("of:N*T*Cusbbda,411C*");
MODULE_ALIAS("of:N*T*Cusbbda,5411");
MODULE_ALIAS("of:N*T*Cusbbda,5411C*");
MODULE_ALIAS("of:N*T*Cusbbda,414");
MODULE_ALIAS("of:N*T*Cusbbda,414C*");
MODULE_ALIAS("of:N*T*Cusbbda,5414");
MODULE_ALIAS("of:N*T*Cusbbda,5414C*");
MODULE_ALIAS("of:N*T*Cusb1a40,0101");
MODULE_ALIAS("of:N*T*Cusb1a40,0101C*");
MODULE_ALIAS("of:N*T*Cusb1a86,8091");
MODULE_ALIAS("of:N*T*Cusb1a86,8091C*");
MODULE_ALIAS("of:N*T*Cusb1da0,5511");
MODULE_ALIAS("of:N*T*Cusb1da0,5511C*");
MODULE_ALIAS("of:N*T*Cusb1da0,55a1");
MODULE_ALIAS("of:N*T*Cusb1da0,55a1C*");
MODULE_ALIAS("of:N*T*Cusb2109,817");
MODULE_ALIAS("of:N*T*Cusb2109,817C*");
MODULE_ALIAS("of:N*T*Cusb2109,2817");
MODULE_ALIAS("of:N*T*Cusb2109,2817C*");
MODULE_ALIAS("of:N*T*Cusb20b1,0013");
MODULE_ALIAS("of:N*T*Cusb20b1,0013C*");
MODULE_ALIAS("of:N*T*Cusb3431,6241");
MODULE_ALIAS("of:N*T*Cusb3431,6241C*");
MODULE_ALIAS("of:N*T*Cusb3431,6341");
MODULE_ALIAS("of:N*T*Cusb3431,6341C*");
MODULE_ALIAS("of:N*T*Cusb5986,1198");
MODULE_ALIAS("of:N*T*Cusb5986,1198C*");
