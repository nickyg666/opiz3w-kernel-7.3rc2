savedcmd_drivers/clk/aspeed/built-in.a := rm -f drivers/clk/aspeed/built-in.a;  printf "drivers/clk/aspeed/%s " clk-aspeed.o | xargs aarch64-linux-gnu-ar cDPrST drivers/clk/aspeed/built-in.a
