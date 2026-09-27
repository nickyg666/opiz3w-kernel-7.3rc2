savedcmd_drivers/misc/rp1/rp1_pci.mod := printf '%s\n'   rp1_pci.o | awk '!x[$$0]++ { print("drivers/misc/rp1/"$$0) }' > drivers/misc/rp1/rp1_pci.mod
