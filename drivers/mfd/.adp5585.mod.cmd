savedcmd_drivers/mfd/adp5585.mod := printf '%s\n'   adp5585.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/adp5585.mod
