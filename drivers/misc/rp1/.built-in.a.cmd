savedcmd_drivers/misc/rp1/built-in.a := rm -f drivers/misc/rp1/built-in.a;  printf "drivers/misc/rp1/%s " rp1_pci.o | xargs aarch64-linux-gnu-ar cDPrST drivers/misc/rp1/built-in.a
