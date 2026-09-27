savedcmd_drivers/net/ethernet/freescale/fec.mod := printf '%s\n'   fec_main.o fec_ptp.o | awk '!x[$$0]++ { print("drivers/net/ethernet/freescale/"$$0) }' > drivers/net/ethernet/freescale/fec.mod
