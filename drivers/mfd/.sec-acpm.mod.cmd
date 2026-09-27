savedcmd_drivers/mfd/sec-acpm.mod := printf '%s\n'   sec-acpm.o | awk '!x[$$0]++ { print("drivers/mfd/"$$0) }' > drivers/mfd/sec-acpm.mod
