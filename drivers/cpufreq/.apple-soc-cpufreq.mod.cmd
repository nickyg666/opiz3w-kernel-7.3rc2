savedcmd_drivers/cpufreq/apple-soc-cpufreq.mod := printf '%s\n'   apple-soc-cpufreq.o | awk '!x[$$0]++ { print("drivers/cpufreq/"$$0) }' > drivers/cpufreq/apple-soc-cpufreq.mod
