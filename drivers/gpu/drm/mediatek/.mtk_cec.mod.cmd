savedcmd_drivers/gpu/drm/mediatek/mtk_cec.mod := printf '%s\n'   mtk_cec.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mediatek/"$$0) }' > drivers/gpu/drm/mediatek/mtk_cec.mod
