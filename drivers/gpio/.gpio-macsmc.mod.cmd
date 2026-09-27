savedcmd_drivers/gpio/gpio-macsmc.mod := printf '%s\n'   gpio-macsmc.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-macsmc.mod
