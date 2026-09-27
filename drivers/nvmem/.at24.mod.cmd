savedcmd_drivers/nvmem/at24.mod := printf '%s\n'   at24.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/at24.mod
