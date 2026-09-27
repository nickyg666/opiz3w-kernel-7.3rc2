savedcmd_drivers/net/ethernet/renesas/ravb.mod := printf '%s\n'   ravb_main.o ravb_ptp.o | awk '!x[$$0]++ { print("drivers/net/ethernet/renesas/"$$0) }' > drivers/net/ethernet/renesas/ravb.mod
