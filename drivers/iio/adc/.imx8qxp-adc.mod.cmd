savedcmd_drivers/iio/adc/imx8qxp-adc.mod := printf '%s\n'   imx8qxp-adc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/imx8qxp-adc.mod
