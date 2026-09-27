savedcmd_drivers/gpu/trace/built-in.a := rm -f drivers/gpu/trace/built-in.a;  printf "drivers/gpu/trace/%s " trace_gpu_mem.o | xargs aarch64-linux-gnu-ar cDPrST drivers/gpu/trace/built-in.a
