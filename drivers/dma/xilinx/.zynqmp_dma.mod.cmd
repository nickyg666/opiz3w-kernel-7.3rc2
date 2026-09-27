savedcmd_drivers/dma/xilinx/zynqmp_dma.mod := printf '%s\n'   zynqmp_dma.o | awk '!x[$$0]++ { print("drivers/dma/xilinx/"$$0) }' > drivers/dma/xilinx/zynqmp_dma.mod
