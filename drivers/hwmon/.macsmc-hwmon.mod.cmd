savedcmd_drivers/hwmon/macsmc-hwmon.mod := printf '%s\n'   macsmc-hwmon.o | awk '!x[$$0]++ { print("drivers/hwmon/"$$0) }' > drivers/hwmon/macsmc-hwmon.mod
