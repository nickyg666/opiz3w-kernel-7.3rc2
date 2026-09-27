savedcmd_drivers/net/pcs/pcs-lynx.mod := printf '%s\n'   pcs-lynx.o | awk '!x[$$0]++ { print("drivers/net/pcs/"$$0) }' > drivers/net/pcs/pcs-lynx.mod
