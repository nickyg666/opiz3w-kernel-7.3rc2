savedcmd_drivers/usb/typec/mux/ps883x.mod := printf '%s\n'   ps883x.o | awk '!x[$$0]++ { print("drivers/usb/typec/mux/"$$0) }' > drivers/usb/typec/mux/ps883x.mod
