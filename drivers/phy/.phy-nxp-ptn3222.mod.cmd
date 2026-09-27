savedcmd_drivers/phy/phy-nxp-ptn3222.mod := printf '%s\n'   phy-nxp-ptn3222.o | awk '!x[$$0]++ { print("drivers/phy/"$$0) }' > drivers/phy/phy-nxp-ptn3222.mod
