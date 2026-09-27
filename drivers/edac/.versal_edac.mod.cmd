savedcmd_drivers/edac/versal_edac.mod := printf '%s\n'   versal_edac.o | awk '!x[$$0]++ { print("drivers/edac/"$$0) }' > drivers/edac/versal_edac.mod
