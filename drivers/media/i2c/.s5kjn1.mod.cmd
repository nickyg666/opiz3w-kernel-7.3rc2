savedcmd_drivers/media/i2c/s5kjn1.mod := printf '%s\n'   s5kjn1.o | awk '!x[$$0]++ { print("drivers/media/i2c/"$$0) }' > drivers/media/i2c/s5kjn1.mod
