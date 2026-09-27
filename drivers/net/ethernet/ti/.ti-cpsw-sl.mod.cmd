savedcmd_drivers/net/ethernet/ti/ti-cpsw-sl.mod := printf '%s\n'   cpsw_sl.o | awk '!x[$$0]++ { print("drivers/net/ethernet/ti/"$$0) }' > drivers/net/ethernet/ti/ti-cpsw-sl.mod
