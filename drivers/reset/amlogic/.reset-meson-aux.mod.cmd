savedcmd_drivers/reset/amlogic/reset-meson-aux.mod := printf '%s\n'   reset-meson-aux.o | awk '!x[$$0]++ { print("drivers/reset/amlogic/"$$0) }' > drivers/reset/amlogic/reset-meson-aux.mod
