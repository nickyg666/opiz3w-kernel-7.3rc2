savedcmd_drivers/dma/mediatek/mtk-uart-apdma.mod := printf '%s\n'   mtk-uart-apdma.o | awk '!x[$$0]++ { print("drivers/dma/mediatek/"$$0) }' > drivers/dma/mediatek/mtk-uart-apdma.mod
