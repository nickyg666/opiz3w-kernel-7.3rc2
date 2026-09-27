savedcmd_drivers/spi/spi-xilinx.mod := printf '%s\n'   spi-xilinx.o | awk '!x[$$0]++ { print("drivers/spi/"$$0) }' > drivers/spi/spi-xilinx.mod
