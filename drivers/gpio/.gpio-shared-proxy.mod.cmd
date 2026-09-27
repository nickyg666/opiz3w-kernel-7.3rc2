savedcmd_drivers/gpio/gpio-shared-proxy.mod := printf '%s\n'   gpio-shared-proxy.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-shared-proxy.mod
