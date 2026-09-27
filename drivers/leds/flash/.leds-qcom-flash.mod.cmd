savedcmd_drivers/leds/flash/leds-qcom-flash.mod := printf '%s\n'   leds-qcom-flash.o | awk '!x[$$0]++ { print("drivers/leds/flash/"$$0) }' > drivers/leds/flash/leds-qcom-flash.mod
