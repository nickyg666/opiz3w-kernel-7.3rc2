savedcmd_drivers/dma/stm32/stm32-dma3.mod := printf '%s\n'   stm32-dma3.o | awk '!x[$$0]++ { print("drivers/dma/stm32/"$$0) }' > drivers/dma/stm32/stm32-dma3.mod
