savedcmd_drivers/media/cec/i2c/tda9950.mod := printf '%s\n'   tda9950.o | awk '!x[$$0]++ { print("drivers/media/cec/i2c/"$$0) }' > drivers/media/cec/i2c/tda9950.mod
