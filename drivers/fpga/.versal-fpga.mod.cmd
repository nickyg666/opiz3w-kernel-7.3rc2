savedcmd_drivers/fpga/versal-fpga.mod := printf '%s\n'   versal-fpga.o | awk '!x[$$0]++ { print("drivers/fpga/"$$0) }' > drivers/fpga/versal-fpga.mod
