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

KSYMTAB_DATA(panfrost_pm_ops, "");
SYMBOL_FLAGS(panfrost_pm_ops, 0x01);

MODULE_INFO(depends, "gpu-sched,drm_shmem_helper");

MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-mali");
MODULE_ALIAS("of:N*T*Camlogic,meson-gxm-maliC*");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-mali");
MODULE_ALIAS("of:N*T*Camlogic,meson-g12a-maliC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a08g046-mali");
MODULE_ALIAS("of:N*T*Crenesas,r9a08g046-maliC*");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-mali");
MODULE_ALIAS("of:N*T*Crenesas,r9a09g047-maliC*");
MODULE_ALIAS("of:N*T*Carm,mali-t604");
MODULE_ALIAS("of:N*T*Carm,mali-t604C*");
MODULE_ALIAS("of:N*T*Carm,mali-t624");
MODULE_ALIAS("of:N*T*Carm,mali-t624C*");
MODULE_ALIAS("of:N*T*Carm,mali-t628");
MODULE_ALIAS("of:N*T*Carm,mali-t628C*");
MODULE_ALIAS("of:N*T*Carm,mali-t720");
MODULE_ALIAS("of:N*T*Carm,mali-t720C*");
MODULE_ALIAS("of:N*T*Carm,mali-t760");
MODULE_ALIAS("of:N*T*Carm,mali-t760C*");
MODULE_ALIAS("of:N*T*Carm,mali-t820");
MODULE_ALIAS("of:N*T*Carm,mali-t820C*");
MODULE_ALIAS("of:N*T*Carm,mali-t830");
MODULE_ALIAS("of:N*T*Carm,mali-t830C*");
MODULE_ALIAS("of:N*T*Carm,mali-t860");
MODULE_ALIAS("of:N*T*Carm,mali-t860C*");
MODULE_ALIAS("of:N*T*Carm,mali-t880");
MODULE_ALIAS("of:N*T*Carm,mali-t880C*");
MODULE_ALIAS("of:N*T*Carm,mali-bifrost");
MODULE_ALIAS("of:N*T*Carm,mali-bifrostC*");
MODULE_ALIAS("of:N*T*Carm,mali-valhall-jm");
MODULE_ALIAS("of:N*T*Carm,mali-valhall-jmC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183-maliC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183b-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8183b-maliC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8186-maliC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8188-maliC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8192-maliC*");
MODULE_ALIAS("of:N*T*Cmediatek,mt8370-mali");
MODULE_ALIAS("of:N*T*Cmediatek,mt8370-maliC*");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-mali");
MODULE_ALIAS("of:N*T*Callwinner,sun50i-h616-maliC*");
