savedcmd_drivers/usb/typec/tcpm/tcpci_mt6360.mod := printf '%s\n'   tcpci_mt6360.o | awk '!x[$$0]++ { print("drivers/usb/typec/tcpm/"$$0) }' > drivers/usb/typec/tcpm/tcpci_mt6360.mod
