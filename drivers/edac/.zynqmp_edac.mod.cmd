savedcmd_drivers/edac/zynqmp_edac.mod := printf '%s\n'   zynqmp_edac.o | awk '!x[$$0]++ { print("drivers/edac/"$$0) }' > drivers/edac/zynqmp_edac.mod
