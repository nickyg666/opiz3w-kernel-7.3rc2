savedcmd_drivers/firmware/google/cbmem.mod := printf '%s\n'   cbmem.o | awk '!x[$$0]++ { print("drivers/firmware/google/"$$0) }' > drivers/firmware/google/cbmem.mod
