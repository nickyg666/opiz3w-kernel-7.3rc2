savedcmd_drivers/input/touchscreen/apple_z2.mod := printf '%s\n'   apple_z2.o | awk '!x[$$0]++ { print("drivers/input/touchscreen/"$$0) }' > drivers/input/touchscreen/apple_z2.mod
