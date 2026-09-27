savedcmd_drivers/i2c/busses/i2c-pasemi-core.mod := printf '%s\n'   i2c-pasemi-core.o | awk '!x[$$0]++ { print("drivers/i2c/busses/"$$0) }' > drivers/i2c/busses/i2c-pasemi-core.mod
