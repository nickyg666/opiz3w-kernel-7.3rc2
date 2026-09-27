savedcmd_drivers/rtc/rtc-zynqmp.mod := printf '%s\n'   rtc-zynqmp.o | awk '!x[$$0]++ { print("drivers/rtc/"$$0) }' > drivers/rtc/rtc-zynqmp.mod
