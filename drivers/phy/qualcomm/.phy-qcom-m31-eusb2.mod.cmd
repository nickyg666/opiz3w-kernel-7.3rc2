savedcmd_drivers/phy/qualcomm/phy-qcom-m31-eusb2.mod := printf '%s\n'   phy-qcom-m31-eusb2.o | awk '!x[$$0]++ { print("drivers/phy/qualcomm/"$$0) }' > drivers/phy/qualcomm/phy-qcom-m31-eusb2.mod
