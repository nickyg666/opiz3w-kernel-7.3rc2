savedcmd_drivers/spi/spi-rzv2h-rspi.mod := printf '%s\n'   spi-rzv2h-rspi.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-rzv2h-rspi.mod
