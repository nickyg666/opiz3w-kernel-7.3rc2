savedcmd_drivers/dma/apple-admac.mod := printf '%s\n'   apple-admac.o | awk '!x[$$0]++ { print("drivers/dma/"$$0) }' > drivers/dma/apple-admac.mod
