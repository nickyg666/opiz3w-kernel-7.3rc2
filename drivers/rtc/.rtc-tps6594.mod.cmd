savedcmd_drivers/rtc/rtc-tps6594.mod := printf '%s\n'   rtc-tps6594.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-tps6594.mod
