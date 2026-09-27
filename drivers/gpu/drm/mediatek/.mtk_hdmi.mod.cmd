savedcmd_drivers/gpu/drm/mediatek/mtk_hdmi.mod := printf '%s\n'   mtk_hdmi.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mediatek/"$$0) }' > drivers/gpu/drm/mediatek/mtk_hdmi.mod
