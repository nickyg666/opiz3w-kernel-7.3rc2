savedcmd_drivers/usb/typec/mux/it5205.mod := printf '%s\n'   it5205.o | awk '!x[$$0]++ { print("drivers/usb/typec/mux/"$$0) }' > drivers/usb/typec/mux/it5205.mod
