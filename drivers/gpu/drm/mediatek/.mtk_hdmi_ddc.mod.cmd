savedcmd_drivers/gpu/drm/mediatek/mtk_hdmi_ddc.mod := printf '%s\n'   mtk_hdmi_ddc.o | awk '!x[$$0]++ { print("drivers/gpu/drm/mediatek/"$$0) }' > drivers/gpu/drm/mediatek/mtk_hdmi_ddc.mod
