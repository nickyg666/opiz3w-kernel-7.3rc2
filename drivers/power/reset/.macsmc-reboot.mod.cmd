savedcmd_drivers/power/reset/macsmc-reboot.mod := printf '%s\n'   macsmc-reboot.o | awk '!x[$$0]++ { print("drivers/power/reset/"$$0) }' > drivers/power/reset/macsmc-reboot.mod
