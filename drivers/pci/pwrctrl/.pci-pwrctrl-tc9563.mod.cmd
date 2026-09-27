savedcmd_drivers/pci/pwrctrl/pci-pwrctrl-tc9563.mod := printf '%s\n'   pci-pwrctrl-tc9563.o | awk '!x[$$0]++ { print("drivers/pci/pwrctrl/"$$0) }' > drivers/pci/pwrctrl/pci-pwrctrl-tc9563.mod
