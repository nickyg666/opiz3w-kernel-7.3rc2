savedcmd_drivers/dma/xilinx/xilinx_dpdma.mod := printf '%s\n'   xilinx_dpdma.o | awk '!x[$$0]++ { print("drivers/dma/xilinx/"$$0) }' > drivers/dma/xilinx/xilinx_dpdma.mod
