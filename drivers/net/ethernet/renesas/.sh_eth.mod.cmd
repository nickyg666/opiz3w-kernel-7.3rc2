savedcmd_drivers/net/ethernet/renesas/sh_eth.mod := printf '%s\n'   sh_eth.o | awk '!x[$$0]++ { print("drivers/net/ethernet/renesas/"$$0) }' > drivers/net/ethernet/renesas/sh_eth.mod
