savedcmd_drivers/pci/controller/cadence/pci-j721e.mod := printf '%s\n'   pci-j721e.o | awk '!x[$$0]++ { print("drivers/pci/controller/cadence/"$$0) }' > drivers/pci/controller/cadence/pci-j721e.mod
