savedcmd_drivers/spi/spi-apple.mod := printf '%s\n'   spi-apple.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-apple.mod
