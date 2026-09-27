savedcmd_drivers/iio/adc/mt6359-auxadc.mod := printf '%s\n'   mt6359-auxadc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/mt6359-auxadc.mod
