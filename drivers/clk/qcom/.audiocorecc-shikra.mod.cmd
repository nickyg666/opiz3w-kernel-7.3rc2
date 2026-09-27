savedcmd_drivers/clk/qcom/audiocorecc-shikra.mod := printf '%s\n'   audiocorecc-shikra.o | awk '!x[$$0]++ { print("drivers/clk/qcom/"$$0) }' > drivers/clk/qcom/audiocorecc-shikra.mod
