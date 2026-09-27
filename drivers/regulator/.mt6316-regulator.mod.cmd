savedcmd_drivers/regulator/mt6316-regulator.mod := printf '%s\n'   mt6316-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/mt6316-regulator.mod
