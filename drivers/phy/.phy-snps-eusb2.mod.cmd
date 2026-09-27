savedcmd_drivers/phy/phy-snps-eusb2.mod := printf '%s\n'   phy-snps-eusb2.o | awk '!x[$$0]++ { print("drivers/phy/"$$0) }' > drivers/phy/phy-snps-eusb2.mod
