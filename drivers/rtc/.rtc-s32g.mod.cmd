savedcmd_drivers/rtc/rtc-s32g.mod := printf '%s\n'   rtc-s32g.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-s32g.mod
