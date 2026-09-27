savedcmd_drivers/net/ethernet/renesas/rtsn.mod := printf '%s\n'   rtsn.o | awk '!x[$$0]++ { print("drivers/net/ethernet/renesas/"$$0) }' > drivers/net/ethernet/renesas/rtsn.mod
