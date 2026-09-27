savedcmd_drivers/net/mdio/mdio-gpio.mod := printf '%s\n'   mdio-gpio.o | awk '!x[$$0]++ { print("drivers/net/mdio/"$$0) }' > drivers/net/mdio/mdio-gpio.mod
