savedcmd_drivers/nvmem/at25.mod := printf '%s\n'   at25.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/at25.mod
