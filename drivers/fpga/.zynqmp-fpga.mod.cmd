savedcmd_drivers/fpga/zynqmp-fpga.mod := printf '%s\n'   zynqmp-fpga.o | awk '!x[$$0]++ { print("drivers/fpga/"$$0) }' > drivers/fpga/zynqmp-fpga.mod
