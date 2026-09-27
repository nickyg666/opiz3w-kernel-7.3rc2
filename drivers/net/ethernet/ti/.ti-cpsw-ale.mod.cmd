savedcmd_drivers/net/ethernet/ti/ti-cpsw-ale.mod := printf '%s\n'   cpsw_ale.o | awk '!x[$$0]++ { print("drivers/net/ethernet/ti/"$$0) }' > drivers/net/ethernet/ti/ti-cpsw-ale.mod
