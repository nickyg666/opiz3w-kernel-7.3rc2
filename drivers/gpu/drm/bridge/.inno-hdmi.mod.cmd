savedcmd_drivers/gpu/drm/bridge/inno-hdmi.mod := printf '%s\n'   inno-hdmi.o | awk '!x[$$0]++ { print("drivers/gpu/drm/bridge/"$$0) }' > drivers/gpu/drm/bridge/inno-hdmi.mod
