savedcmd_drivers/dma/xilinx/xilinx_dma.mod := printf '%s\n'   xilinx_dma.o | awk '!x[$$0]++ { print("drivers/dma/xilinx/"$$0) }' > drivers/dma/xilinx/xilinx_dma.mod
