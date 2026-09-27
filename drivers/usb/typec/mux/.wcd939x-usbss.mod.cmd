savedcmd_drivers/usb/typec/mux/wcd939x-usbss.mod := printf '%s\n'   wcd939x-usbss.o | awk '!x[$$0]++ { print("drivers/usb/typec/mux/"$$0) }' > drivers/usb/typec/mux/wcd939x-usbss.mod
