savedcmd_drivers/pinctrl/tegra/pinctrl-tegra264.mod := printf '%s\n'   pinctrl-tegra264.o | awk '!x[$$0]++ { print("drivers/pinctrl/tegra/"$$0) }' > drivers/pinctrl/tegra/pinctrl-tegra264.mod
