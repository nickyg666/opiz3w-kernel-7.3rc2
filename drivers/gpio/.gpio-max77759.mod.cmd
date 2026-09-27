savedcmd_drivers/gpio/gpio-max77759.mod := printf '%s\n'   gpio-max77759.o | awk '!x[$$0]++ { print("drivers/gpio/"$$0) }' > drivers/gpio/gpio-max77759.mod
