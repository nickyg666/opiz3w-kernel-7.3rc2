savedcmd_drivers/mfd/macsmc.mod := printf '%s\n'   macsmc.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/macsmc.mod
