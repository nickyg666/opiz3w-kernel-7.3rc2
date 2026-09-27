savedcmd_drivers/pinctrl/pinctrl-apple-gpio.mod := printf '%s\n'   pinctrl-apple-gpio.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-apple-gpio.mod
