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

MODULE_ALIAS("of:N*T*Camlogic,meson8-pwm-v2");
MODULE_ALIAS("of:N*T*Camlogic,meson8-pwm-v2C*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-pwm-v2");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-pwm-v2C*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12-pwm-v2");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12-pwm-v2C*");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson8b-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-ao-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxbb-ao-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-ee-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-ee-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-ao-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-axg-ao-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ee-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ee-pwmC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ao-pwm-ab");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ao-pwm-abC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ao-pwm-cd");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-ao-pwm-cdC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-s4-pwm");
MODULE_ALIAS("of:N*T*Camlogic,meson-s4-pwmC*");
