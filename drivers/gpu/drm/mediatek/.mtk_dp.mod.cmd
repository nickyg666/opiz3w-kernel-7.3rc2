savedcmd_drivers/gpu/drm/mediatek/mtk_dp.mod := printf '%s\n'   mtk_dp.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mediatek/"$$0) }' > drivers/gpu/drm/mediatek/mtk_dp.mod
