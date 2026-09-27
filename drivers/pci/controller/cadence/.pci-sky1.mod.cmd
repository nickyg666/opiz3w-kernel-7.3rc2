savedcmd_drivers/pci/controller/cadence/pci-sky1.mod := printf '%s\n'   pci-sky1.o | awk '!x[$$0]++ { print("drivers/pci/controller/cadence/"$$0) }' > drivers/pci/controller/cadence/pci-sky1.mod
