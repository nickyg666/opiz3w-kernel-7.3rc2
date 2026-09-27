savedcmd_drivers/phy/mediatek/phy-mtk-pcie.mod := printf '%s\n'   phy-mtk-pcie.o | awk '!x[$$0]++ { print("drivers/phy/mediatek/"$$0) }' > drivers/phy/mediatek/phy-mtk-pcie.mod
