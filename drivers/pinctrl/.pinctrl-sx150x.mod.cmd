savedcmd_drivers/pinctrl/pinctrl-sx150x.mod := printf '%s\n'   pinctrl-sx150x.o | awk '!x[$$0]++ { print("drivers/pinctrl/"$$0) }' > drivers/pinctrl/pinctrl-sx150x.mod
