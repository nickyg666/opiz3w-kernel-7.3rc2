savedcmd_drivers/watchdog/of_xilinx_wdt.mod := printf '%s\n'   of_xilinx_wdt.o | awk '!x[$$0]++ { print("drivers/watchdog/"$$0) }' > drivers/watchdog/of_xilinx_wdt.mod
