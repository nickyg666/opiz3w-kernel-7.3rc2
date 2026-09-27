savedcmd_drivers/spi/spi-zynqmp-gqspi.mod := printf '%s\n'   spi-zynqmp-gqspi.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-zynqmp-gqspi.mod
