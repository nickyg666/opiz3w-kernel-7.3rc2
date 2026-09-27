savedcmd_drivers/iio/adc/industrialio-adc.mod := printf '%s\n'   industrialio-adc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/industrialio-adc.mod
