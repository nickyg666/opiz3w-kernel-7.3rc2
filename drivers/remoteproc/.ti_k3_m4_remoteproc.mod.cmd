savedcmd_drivers/remoteproc/ti_k3_m4_remoteproc.mod := printf '%s\n'   ti_k3_m4_remoteproc.o | awk '!x[$$0]++ { print("drivers/remoteproc/"$$0) }' > drivers/remoteproc/ti_k3_m4_remoteproc.mod
