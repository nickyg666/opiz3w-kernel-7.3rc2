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

KSYMTAB_FUNC(vb2_find_buffer, "");
SYMBOL_FLAGS(vb2_find_buffer, 0x01);
KSYMTAB_FUNC(vb2_querybuf, "");
SYMBOL_FLAGS(vb2_querybuf, 0x00);
KSYMTAB_FUNC(vb2_reqbufs, "");
SYMBOL_FLAGS(vb2_reqbufs, 0x01);
KSYMTAB_FUNC(vb2_prepare_buf, "");
SYMBOL_FLAGS(vb2_prepare_buf, 0x01);
KSYMTAB_FUNC(vb2_create_bufs, "");
SYMBOL_FLAGS(vb2_create_bufs, 0x01);
KSYMTAB_FUNC(vb2_qbuf, "");
SYMBOL_FLAGS(vb2_qbuf, 0x01);
KSYMTAB_FUNC(vb2_dqbuf, "");
SYMBOL_FLAGS(vb2_dqbuf, 0x01);
KSYMTAB_FUNC(vb2_streamon, "");
SYMBOL_FLAGS(vb2_streamon, 0x01);
KSYMTAB_FUNC(vb2_streamoff, "");
SYMBOL_FLAGS(vb2_streamoff, 0x01);
KSYMTAB_FUNC(vb2_expbuf, "");
SYMBOL_FLAGS(vb2_expbuf, 0x01);
KSYMTAB_FUNC(vb2_queue_init_name, "");
SYMBOL_FLAGS(vb2_queue_init_name, 0x01);
KSYMTAB_FUNC(vb2_queue_init, "");
SYMBOL_FLAGS(vb2_queue_init, 0x01);
KSYMTAB_FUNC(vb2_queue_release, "");
SYMBOL_FLAGS(vb2_queue_release, 0x01);
KSYMTAB_FUNC(vb2_queue_change_type, "");
SYMBOL_FLAGS(vb2_queue_change_type, 0x01);
KSYMTAB_FUNC(vb2_poll, "");
SYMBOL_FLAGS(vb2_poll, 0x01);
KSYMTAB_FUNC(vb2_ioctl_remove_bufs, "");
SYMBOL_FLAGS(vb2_ioctl_remove_bufs, 0x01);
KSYMTAB_FUNC(vb2_ioctl_reqbufs, "");
SYMBOL_FLAGS(vb2_ioctl_reqbufs, 0x01);
KSYMTAB_FUNC(vb2_ioctl_create_bufs, "");
SYMBOL_FLAGS(vb2_ioctl_create_bufs, 0x01);
KSYMTAB_FUNC(vb2_ioctl_prepare_buf, "");
SYMBOL_FLAGS(vb2_ioctl_prepare_buf, 0x01);
KSYMTAB_FUNC(vb2_ioctl_querybuf, "");
SYMBOL_FLAGS(vb2_ioctl_querybuf, 0x01);
KSYMTAB_FUNC(vb2_ioctl_qbuf, "");
SYMBOL_FLAGS(vb2_ioctl_qbuf, 0x01);
KSYMTAB_FUNC(vb2_ioctl_dqbuf, "");
SYMBOL_FLAGS(vb2_ioctl_dqbuf, 0x01);
KSYMTAB_FUNC(vb2_ioctl_streamon, "");
SYMBOL_FLAGS(vb2_ioctl_streamon, 0x01);
KSYMTAB_FUNC(vb2_ioctl_streamoff, "");
SYMBOL_FLAGS(vb2_ioctl_streamoff, 0x01);
KSYMTAB_FUNC(vb2_ioctl_expbuf, "");
SYMBOL_FLAGS(vb2_ioctl_expbuf, 0x01);
KSYMTAB_FUNC(vb2_fop_mmap, "");
SYMBOL_FLAGS(vb2_fop_mmap, 0x01);
KSYMTAB_FUNC(_vb2_fop_release, "");
SYMBOL_FLAGS(_vb2_fop_release, 0x01);
KSYMTAB_FUNC(vb2_fop_release, "");
SYMBOL_FLAGS(vb2_fop_release, 0x01);
KSYMTAB_FUNC(vb2_fop_write, "");
SYMBOL_FLAGS(vb2_fop_write, 0x01);
KSYMTAB_FUNC(vb2_fop_read, "");
SYMBOL_FLAGS(vb2_fop_read, 0x01);
KSYMTAB_FUNC(vb2_fop_poll, "");
SYMBOL_FLAGS(vb2_fop_poll, 0x01);
KSYMTAB_FUNC(vb2_video_unregister_device, "");
SYMBOL_FLAGS(vb2_video_unregister_device, 0x01);
KSYMTAB_FUNC(vb2_request_validate, "");
SYMBOL_FLAGS(vb2_request_validate, 0x01);
KSYMTAB_FUNC(vb2_request_queue, "");
SYMBOL_FLAGS(vb2_request_queue, 0x01);

MODULE_INFO(depends, "videobuf2-common,videodev,mc");

