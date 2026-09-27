savedcmd_drivers/iio/adc/sophgo-cv1800b-adc.mod := printf '%s\n'   sophgo-cv1800b-adc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/sophgo-cv1800b-adc.mod
