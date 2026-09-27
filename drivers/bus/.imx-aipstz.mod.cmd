savedcmd_drivers/bus/imx-aipstz.mod := printf '%s\n'   imx-aipstz.o | awk '!x[$$0]++ { print("drivers/bus/"$$0) }' > drivers/bus/imx-aipstz.mod
