savedcmd_drivers/gpu/drm/stm/lvds.mod := printf '%s\n'   lvds.o | awk '!x[$$0]++ { print("drivers/gpu/drm/stm/"$$0) }' > drivers/gpu/drm/stm/lvds.mod
