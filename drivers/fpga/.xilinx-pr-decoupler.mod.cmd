savedcmd_drivers/fpga/xilinx-pr-decoupler.mod := printf '%s\n'   xilinx-pr-decoupler.o | awk '!x[$$0]++ { print("drivers/fpga/"$$0) }' > drivers/fpga/xilinx-pr-decoupler.mod
