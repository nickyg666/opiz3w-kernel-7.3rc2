savedcmd_drivers/nvmem/nvmem_sec_qfprom.mod := printf '%s\n'   sec-qfprom.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/nvmem_sec_qfprom.mod
