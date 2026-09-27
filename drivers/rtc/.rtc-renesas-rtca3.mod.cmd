savedcmd_drivers/rtc/rtc-renesas-rtca3.mod := printf '%s\n'   rtc-renesas-rtca3.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-renesas-rtca3.mod
