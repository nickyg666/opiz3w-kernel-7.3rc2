savedcmd_drivers/gpio/gpio-xilinx.mod := printf '%s\n'   gpio-xilinx.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-xilinx.mod
