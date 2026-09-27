savedcmd_drivers/gpu/drm/panel/panel-himax-hx8279.mod := printf '%s\n'   panel-himax-hx8279.o | awk '!x[$$0]++ { print("drivers/gpu/drm/panel/"$$0) }' > drivers/gpu/drm/panel/panel-himax-hx8279.mod
