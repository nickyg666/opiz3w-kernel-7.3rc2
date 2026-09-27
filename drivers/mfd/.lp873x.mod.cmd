savedcmd_drivers/mfd/lp873x.mod := printf '%s\n'   lp873x.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/lp873x.mod
