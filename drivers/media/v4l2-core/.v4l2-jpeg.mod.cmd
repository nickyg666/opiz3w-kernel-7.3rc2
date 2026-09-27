savedcmd_drivers/media/v4l2-core/v4l2-jpeg.mod := printf '%s\n'   v4l2-jpeg.o | awk '!x[$$0]++ { print("drivers/media/v4l2-core/"$$0) }' > drivers/media/v4l2-core/v4l2-jpeg.mod
