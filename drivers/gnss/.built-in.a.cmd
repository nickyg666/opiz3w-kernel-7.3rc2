savedcmd_drivers/gnss/built-in.a := rm -f drivers/gnss/built-in.a;  printf "drivers/gnss/%s " core.o serial.o mtk.o | xargs aarch64-linux-gnu-ar cDPrST drivers/gnss/built-in.a
