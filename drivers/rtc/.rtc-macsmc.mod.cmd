savedcmd_drivers/rtc/rtc-macsmc.mod := printf '%s\n'   rtc-macsmc.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-macsmc.mod
