savedcmd_drivers/regulator/max20411-regulator.mod := printf '%s\n'   max20411-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/max20411-regulator.mod
