savedcmd_drivers/remoteproc/ti_k3_common.mod := printf '%s\n'   ti_k3_common.o | awk '!x[$$0]++ { print("drivers/remoteproc/"$$0) }' > drivers/remoteproc/ti_k3_common.mod
