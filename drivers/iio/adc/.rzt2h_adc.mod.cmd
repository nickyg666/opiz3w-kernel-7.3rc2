savedcmd_drivers/iio/adc/rzt2h_adc.mod := printf '%s\n'   rzt2h_adc.o | awk '!x[$$0]++ { print("drivers/iio/adc/"$$0) }' > drivers/iio/adc/rzt2h_adc.mod
