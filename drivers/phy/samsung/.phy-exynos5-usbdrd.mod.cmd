savedcmd_drivers/phy/samsung/phy-exynos5-usbdrd.mod := printf '%s\n'   phy-exynos5-usbdrd.o | awk '!x[$$0]++ { print("drivers/phy/samsung/"$$0) }' > drivers/phy/samsung/phy-exynos5-usbdrd.mod
