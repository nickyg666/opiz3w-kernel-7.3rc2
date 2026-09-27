savedcmd_drivers/nvmem/nvmem-max77759.mod := printf '%s\n'   max77759-nvmem.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/nvmem-max77759.mod
