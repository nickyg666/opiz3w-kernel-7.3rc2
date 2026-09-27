savedcmd_drivers/gpu/drm/panel/panel-summit.mod := printf '%s\n'   panel-summit.o | awk '!x[$$0]++ { print("drivers/gpu/drm/panel/"$$0) }' > drivers/gpu/drm/panel/panel-summit.mod
