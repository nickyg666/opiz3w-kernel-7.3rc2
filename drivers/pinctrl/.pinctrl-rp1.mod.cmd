savedcmd_drivers/pinctrl/pinctrl-rp1.mod := printf '%s\n'   pinctrl-rp1.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-rp1.mod
