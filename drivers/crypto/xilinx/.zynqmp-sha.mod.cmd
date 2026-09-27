savedcmd_drivers/crypto/xilinx/zynqmp-sha.mod := printf '%s\n'   zynqmp-sha.o | awk '!x[$$0]++ { print("drivers/crypto/xilinx/"$$0) }' > drivers/crypto/xilinx/zynqmp-sha.mod
