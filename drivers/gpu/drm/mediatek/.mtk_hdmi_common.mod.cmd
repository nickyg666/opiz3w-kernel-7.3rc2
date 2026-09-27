savedcmd_drivers/gpu/drm/mediatek/mtk_hdmi_common.mod := printf '%s\n'   mtk_hdmi_common.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mediatek/"$$0) }' > drivers/gpu/drm/mediatek/mtk_hdmi_common.mod
