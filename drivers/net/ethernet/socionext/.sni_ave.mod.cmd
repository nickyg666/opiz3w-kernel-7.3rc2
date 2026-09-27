savedcmd_drivers/net/ethernet/socionext/sni_ave.mod := printf '%s\n'   sni_ave.o | awk '!x[$$0]++ { print("drivers/net/ethernet/socionext/"$$0) }' > drivers/net/ethernet/socionext/sni_ave.mod
