savedcmd_drivers/mfd/max77759.mod := printf '%s\n'   max77759.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/max77759.mod
