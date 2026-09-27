savedcmd_drivers/pci/controller/pcie-apple.mod := printf '%s\n'   pcie-apple.o | awk '!x[$$0]++ { print("drivers/pci/controller/"$$0) }' > drivers/pci/controller/pcie-apple.mod
