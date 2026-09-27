savedcmd_drivers/leds/flash/built-in.a := rm -f drivers/leds/flash/built-in.a;  printf "drivers/leds/flash/%s " leds-qcom-flash.o | xargs aarch64-linux-gnu-ar cDPrST drivers/leds/flash/built-in.a
