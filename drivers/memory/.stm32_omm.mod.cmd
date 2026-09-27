savedcmd_drivers/memory/stm32_omm.mod := printf '%s\n'   stm32_omm.o | awk '!x[$$0]++ { print("drivers/memory/"$$0) }' > drivers/memory/stm32_omm.mod
