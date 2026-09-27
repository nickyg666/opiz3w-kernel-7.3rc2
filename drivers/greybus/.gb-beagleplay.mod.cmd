savedcmd_drivers/greybus/gb-beagleplay.mod := printf '%s\n'   gb-beagleplay.o | awk '!x[$$0]++ { print("drivers/greybus/"$$0) }' > drivers/greybus/gb-beagleplay.mod
