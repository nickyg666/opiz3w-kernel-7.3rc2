savedcmd_drivers/nvmem/nvmem-apple-efuses.mod := printf '%s\n'   apple-efuses.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/nvmem-apple-efuses.mod
