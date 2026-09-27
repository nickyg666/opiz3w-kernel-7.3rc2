savedcmd_drivers/phy/renesas/phy-rzg3e-usb3.mod := printf '%s\n'   phy-rzg3e-usb3.o | awk '!x[$$0]++ { print("drivers/phy/renesas/"$$0) }' > drivers/phy/renesas/phy-rzg3e-usb3.mod
