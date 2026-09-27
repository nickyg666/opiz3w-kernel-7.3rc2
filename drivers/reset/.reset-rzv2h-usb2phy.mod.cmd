savedcmd_drivers/reset/reset-rzv2h-usb2phy.mod := printf '%s\n'   reset-rzv2h-usb2phy.o | awk '!x[$$0]++ { print("drivers/reset/"$$0) }' > drivers/reset/reset-rzv2h-usb2phy.mod
