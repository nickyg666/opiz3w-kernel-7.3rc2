savedcmd_drivers/net/ethernet/broadcom/bgmac.mod := printf '%s\n'   bgmac.o | awk '!x[$$0]++ { print("drivers/net/ethernet/broadcom/"$$0) }' > drivers/net/ethernet/broadcom/bgmac.mod
