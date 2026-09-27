savedcmd_drivers/nvmem/apple_nvmem_spmi.mod := printf '%s\n'   apple-spmi-nvmem.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/apple_nvmem_spmi.mod
