savedcmd_drivers/nvmem/nvmem_zynqmp_nvmem.mod := printf '%s\n'   zynqmp_nvmem.o | awk '!x[$$0]++ { print("drivers/nvmem/"$$0) }' > drivers/nvmem/nvmem_zynqmp_nvmem.mod
