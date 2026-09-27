savedcmd_drivers/power/reset/tdx-ec-poweroff.mod := printf '%s\n'   tdx-ec-poweroff.o | awk '!x[$$0]++ { print("drivers/power/reset/"$$0) }' > drivers/power/reset/tdx-ec-poweroff.mod
