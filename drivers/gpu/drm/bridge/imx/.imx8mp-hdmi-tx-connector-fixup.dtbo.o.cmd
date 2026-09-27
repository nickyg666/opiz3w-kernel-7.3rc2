savedcmd_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o := aarch64-linux-gnu-gcc -Wp,-MMD,drivers/gpu/drm/bridge/imx/.imx8mp-hdmi-tx-connector-fixup.dtbo.o.d -nostdinc -I./arch/arm64/include -I./arch/arm64/include/generated -I./include -I./include -I./bsp/include -I./arch/arm64/include/uapi -I./arch/arm64/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -DKASAN_SHADOW_SCALE_SHIFT= -D__ASSEMBLY__ -fno-PIE -mabi=lp64 -fno-asynchronous-unwind-tables -fno-unwind-tables -DKASAN_SHADOW_SCALE_SHIFT= -g    -DKBUILD_MODFILE='"drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo"' -DKBUILD_MODNAME='"imx8mp_hdmi_tx_connector_fixup.dtbo"' -D__KBUILD_MODNAME=imx8mp_hdmi_tx_connector_fixup.dtbo -c -o drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.S 

source_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o := drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.S

deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o := \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/asm-generic/vmlinux.lds.h \
    $(wildcard include/config/FUNCTION_ALIGNMENT) \
    $(wildcard include/config/HAVE_DYNAMIC_FTRACE_NO_PATCHABLE) \
    $(wildcard include/config/ARCH_SUPPORTS_CFI) \
    $(wildcard include/config/DYNAMIC_FTRACE) \
    $(wildcard include/config/FUNCTION_TRACER) \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/KPROBES) \
    $(wildcard include/config/FUNCTION_ERROR_INJECTION) \
    $(wildcard include/config/EVENT_TRACING) \
    $(wildcard include/config/TRACING) \
    $(wildcard include/config/FTRACE_SYSCALLS) \
    $(wildcard include/config/BPF_EVENTS) \
    $(wildcard include/config/SERIAL_EARLYCON) \
    $(wildcard include/config/SECURITY) \
    $(wildcard include/config/TIMER_OF) \
    $(wildcard include/config/IRQCHIP) \
    $(wildcard include/config/COMMON_CLK) \
    $(wildcard include/config/OF_RESERVED_MEM) \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/CPU_IDLE) \
    $(wildcard include/config/ACPI) \
    $(wildcard include/config/THERMAL) \
    $(wildcard include/config/HAVE_STATIC_CALL_INLINE) \
    $(wildcard include/config/ARCH_USES_CFI_TRAPS) \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/CONSTRUCTORS) \
    $(wildcard include/config/KLP_BUILD) \
    $(wildcard include/config/GENERIC_BUG) \
    $(wildcard include/config/UNWINDER_ORC) \
    $(wildcard include/config/FW_LOADER) \
    $(wildcard include/config/PM_TRACE) \
    $(wildcard include/config/PRINTK_INDEX) \
    $(wildcard include/config/BLK_DEV_INITRD) \
    $(wildcard include/config/AMD_MEM_ENCRYPT) \
    $(wildcard include/config/PROPELLER_CLANG) \
    $(wildcard include/config/UNWIND_TABLES) \
    $(wildcard include/config/GCOV_KERNEL) \
    $(wildcard include/config/KASAN_GENERIC) \
    $(wildcard include/config/KCSAN) \
  include/asm-generic/codetag.lds.h \
    $(wildcard include/config/MEM_ALLOC_PROFILING) \

drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o: $(deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o)

$(deps_drivers/gpu/drm/bridge/imx/imx8mp-hdmi-tx-connector-fixup.dtbo.o):
