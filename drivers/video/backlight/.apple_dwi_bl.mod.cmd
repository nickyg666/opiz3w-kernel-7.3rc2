savedcmd_drivers/video/backlight/apple_dwi_bl.mod := printf '%s\n'   apple_dwi_bl.o | awk '!x[$$0]++ { print("drivers/video/backlight/"$$0) }' > drivers/video/backlight/apple_dwi_bl.mod
