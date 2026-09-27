savedcmd_drivers/char/hw_random/xilinx-trng.mod := printf '%s\n'   xilinx-trng.o | awk '!x[$$0]++ { print("drivers/char/hw_random/"$$0) }' > drivers/char/hw_random/xilinx-trng.mod
