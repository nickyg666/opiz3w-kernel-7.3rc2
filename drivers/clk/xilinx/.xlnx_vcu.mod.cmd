savedcmd_drivers/clk/xilinx/xlnx_vcu.mod := printf '%s\n'   xlnx_vcu.o | awk '!x[$$0]++ { print("drivers/clk/xilinx/"$$0) }' > drivers/clk/xilinx/xlnx_vcu.mod
