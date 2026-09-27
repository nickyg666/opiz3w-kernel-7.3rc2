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

KSYMTAB_FUNC(vb2_buffer_in_use, "");
SYMBOL_FLAGS(vb2_buffer_in_use, 0x00);
KSYMTAB_FUNC(vb2_core_querybuf, "");
SYMBOL_FLAGS(vb2_core_querybuf, 0x01);
KSYMTAB_FUNC(vb2_verify_memory_type, "");
SYMBOL_FLAGS(vb2_verify_memory_type, 0x00);
KSYMTAB_FUNC(vb2_core_reqbufs, "");
SYMBOL_FLAGS(vb2_core_reqbufs, 0x01);
KSYMTAB_FUNC(vb2_core_create_bufs, "");
SYMBOL_FLAGS(vb2_core_create_bufs, 0x01);
KSYMTAB_FUNC(vb2_plane_vaddr, "");
SYMBOL_FLAGS(vb2_plane_vaddr, 0x01);
KSYMTAB_FUNC(vb2_plane_cookie, "");
SYMBOL_FLAGS(vb2_plane_cookie, 0x01);
KSYMTAB_FUNC(vb2_buffer_done, "");
SYMBOL_FLAGS(vb2_buffer_done, 0x01);
KSYMTAB_FUNC(vb2_discard_done, "");
SYMBOL_FLAGS(vb2_discard_done, 0x01);
KSYMTAB_FUNC(vb2_request_object_is_buffer, "");
SYMBOL_FLAGS(vb2_request_object_is_buffer, 0x01);
KSYMTAB_FUNC(vb2_request_buffer_cnt, "");
SYMBOL_FLAGS(vb2_request_buffer_cnt, 0x01);
KSYMTAB_FUNC(vb2_core_prepare_buf, "");
SYMBOL_FLAGS(vb2_core_prepare_buf, 0x01);
KSYMTAB_FUNC(vb2_core_remove_bufs, "");
SYMBOL_FLAGS(vb2_core_remove_bufs, 0x01);
KSYMTAB_FUNC(vb2_core_qbuf, "");
SYMBOL_FLAGS(vb2_core_qbuf, 0x01);
KSYMTAB_FUNC(vb2_wait_for_all_buffers, "");
SYMBOL_FLAGS(vb2_wait_for_all_buffers, 0x01);
KSYMTAB_FUNC(vb2_core_dqbuf, "");
SYMBOL_FLAGS(vb2_core_dqbuf, 0x01);
KSYMTAB_FUNC(vb2_core_streamon, "");
SYMBOL_FLAGS(vb2_core_streamon, 0x01);
KSYMTAB_FUNC(vb2_queue_error, "");
SYMBOL_FLAGS(vb2_queue_error, 0x01);
KSYMTAB_FUNC(vb2_core_streamoff, "");
SYMBOL_FLAGS(vb2_core_streamoff, 0x01);
KSYMTAB_FUNC(vb2_core_expbuf, "");
SYMBOL_FLAGS(vb2_core_expbuf, 0x01);
KSYMTAB_FUNC(vb2_mmap, "");
SYMBOL_FLAGS(vb2_mmap, 0x01);
KSYMTAB_FUNC(vb2_core_queue_init, "");
SYMBOL_FLAGS(vb2_core_queue_init, 0x01);
KSYMTAB_FUNC(vb2_core_queue_release, "");
SYMBOL_FLAGS(vb2_core_queue_release, 0x01);
KSYMTAB_FUNC(vb2_core_poll, "");
SYMBOL_FLAGS(vb2_core_poll, 0x01);
KSYMTAB_FUNC(vb2_read, "");
SYMBOL_FLAGS(vb2_read, 0x01);
KSYMTAB_FUNC(vb2_write, "");
SYMBOL_FLAGS(vb2_write, 0x01);
KSYMTAB_FUNC(vb2_thread_start, "");
SYMBOL_FLAGS(vb2_thread_start, 0x01);
KSYMTAB_FUNC(vb2_thread_stop, "");
SYMBOL_FLAGS(vb2_thread_stop, 0x01);
KSYMTAB_FUNC(get_vaddr_frames, "");
SYMBOL_FLAGS(get_vaddr_frames, 0x00);
KSYMTAB_FUNC(put_vaddr_frames, "");
SYMBOL_FLAGS(put_vaddr_frames, 0x00);
KSYMTAB_FUNC(frame_vector_to_pages, "");
SYMBOL_FLAGS(frame_vector_to_pages, 0x00);
KSYMTAB_FUNC(frame_vector_to_pfns, "");
SYMBOL_FLAGS(frame_vector_to_pfns, 0x00);
KSYMTAB_FUNC(frame_vector_create, "");
SYMBOL_FLAGS(frame_vector_create, 0x00);
KSYMTAB_FUNC(frame_vector_destroy, "");
SYMBOL_FLAGS(frame_vector_destroy, 0x00);

MODULE_INFO(depends, "mc");

