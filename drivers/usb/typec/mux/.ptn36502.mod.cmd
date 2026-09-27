savedcmd_drivers/usb/typec/mux/ptn36502.mod := printf '%s\n'   ptn36502.o | awk '!x[$$0]++ { print("drivers/usb/typec/mux/"$$0) }' > drivers/usb/typec/mux/ptn36502.mod
