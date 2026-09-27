savedcmd_drivers/auxdisplay/seg-led-gpio.mod := printf '%s\n'   seg-led-gpio.o | awk '!x[$$0]++ { print("drivers/auxdisplay/"$$0) }' > drivers/auxdisplay/seg-led-gpio.mod
