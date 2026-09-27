savedcmd_drivers/pinctrl/tegra/pinctrl-tegra238.mod := printf '%s\n'   pinctrl-tegra238.o | awk '!x[$$0]++ { print("drivers/pinctrl/tegra/"$$0) }' > drivers/pinctrl/tegra/pinctrl-tegra238.mod
