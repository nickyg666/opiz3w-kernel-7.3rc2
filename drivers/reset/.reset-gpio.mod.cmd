savedcmd_drivers/reset/reset-gpio.mod := printf '%s\n'   reset-gpio.o | awk '!x[$$0]++ { print("drivers/reset/"$$0) }' > drivers/reset/reset-gpio.mod
