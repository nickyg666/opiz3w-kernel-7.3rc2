savedcmd_drivers/net/pcs/pcs-rzn1-miic.mod := printf '%s\n'   pcs-rzn1-miic.o | awk '!x[$$0]++ { print("drivers/net/pcs/"$$0) }' > drivers/net/pcs/pcs-rzn1-miic.mod
