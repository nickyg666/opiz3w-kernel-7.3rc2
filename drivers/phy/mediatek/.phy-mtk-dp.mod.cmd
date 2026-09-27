savedcmd_drivers/phy/mediatek/phy-mtk-dp.mod := printf '%s\n'   phy-mtk-dp.o | awk '!x[$$0]++ { print("drivers/phy/mediatek/"$$0) }' > drivers/phy/mediatek/phy-mtk-dp.mod
