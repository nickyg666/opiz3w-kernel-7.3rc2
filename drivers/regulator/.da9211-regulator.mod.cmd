savedcmd_drivers/regulator/da9211-regulator.mod := printf '%s\n'   da9211-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/da9211-regulator.mod
