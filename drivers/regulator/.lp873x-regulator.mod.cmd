savedcmd_drivers/regulator/lp873x-regulator.mod := printf '%s\n'   lp873x-regulator.o | awk '!x[$$0]++ { print("drivers/regulator/"$$0) }' > drivers/regulator/lp873x-regulator.mod
