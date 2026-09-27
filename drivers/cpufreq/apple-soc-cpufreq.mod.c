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

MODULE_ALIAS("of:N*T*Capple,s5l8960x-cluster-cpufreq");
MODULE_ALIAS("of:N*T*Capple,s5l8960x-cluster-cpufreqC*");
MODULE_ALIAS("of:N*T*Capple,t8103-cluster-cpufreq");
MODULE_ALIAS("of:N*T*Capple,t8103-cluster-cpufreqC*");
MODULE_ALIAS("of:N*T*Capple,t8112-cluster-cpufreq");
MODULE_ALIAS("of:N*T*Capple,t8112-cluster-cpufreqC*");
MODULE_ALIAS("of:N*T*Capple,cluster-cpufreq");
MODULE_ALIAS("of:N*T*Capple,cluster-cpufreqC*");
