savedcmd_drivers/net/ethernet/ti/davinci_mdio.mod := printf '%s\n'   davinci_mdio.o | awk '!x[$$0]++ { print("drivers/net/ethernet/ti/"$$0) }' > drivers/net/ethernet/ti/davinci_mdio.mod
