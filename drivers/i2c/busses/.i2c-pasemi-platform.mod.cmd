savedcmd_drivers/i2c/busses/i2c-pasemi-platform.mod := printf '%s\n'   i2c-pasemi-platform.o | awk '!x[$$0]++ { print("drivers/i2c/busses/"$$0) }' > drivers/i2c/busses/i2c-pasemi-platform.mod
