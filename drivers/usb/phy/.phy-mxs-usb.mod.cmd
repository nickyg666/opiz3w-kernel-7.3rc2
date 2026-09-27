savedcmd_drivers/usb/phy/phy-mxs-usb.mod := printf '%s\n'   phy-mxs-usb.o | awk '!x[$$0]++ { print("drivers/usb/phy/"$$0) }' > drivers/usb/phy/phy-mxs-usb.mod
