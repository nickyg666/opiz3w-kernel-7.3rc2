savedcmd_drivers/spi/spi-stm32-ospi.mod := printf '%s\n'   spi-stm32-ospi.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-stm32-ospi.mod
