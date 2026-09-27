savedcmd_drivers/net/phy/dp83tg720.mod := printf '%s\n'   dp83tg720.o | awk '!x[$$0]++ { print("drivers/net/phy/"$$0) }' > drivers/net/phy/dp83tg720.mod
