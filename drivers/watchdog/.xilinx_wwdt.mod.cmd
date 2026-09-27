savedcmd_drivers/watchdog/xilinx_wwdt.mod := printf '%s\n'   xilinx_wwdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/xilinx_wwdt.mod
