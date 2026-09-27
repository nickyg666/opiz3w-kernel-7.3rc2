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


MODULE_INFO(depends, "v4l2-mem2mem,videobuf2-v4l2,videodev,videobuf2-dma-contig,videobuf2-common,mdt_loader,ubwc_config");

MODULE_ALIAS("of:N*T*Cqcom,milos-iris");
MODULE_ALIAS("of:N*T*Cqcom,milos-irisC*");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-iris");
MODULE_ALIAS("of:N*T*Cqcom,qcs8300-irisC*");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-venus");
MODULE_ALIAS("of:N*T*Cqcom,sc7280-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-venus");
MODULE_ALIAS("of:N*T*Cqcom,sm8250-venusC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-iris");
MODULE_ALIAS("of:N*T*Cqcom,sm8550-irisC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-iris");
MODULE_ALIAS("of:N*T*Cqcom,sm8650-irisC*");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-iris");
MODULE_ALIAS("of:N*T*Cqcom,sm8750-irisC*");
MODULE_ALIAS("of:N*T*Cqcom,x1p42100-iris");
MODULE_ALIAS("of:N*T*Cqcom,x1p42100-irisC*");
