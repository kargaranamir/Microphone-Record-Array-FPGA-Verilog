all: build sim 

build:
	iverilog -o adc_bin cs_adcs_tb.v cs5361_dev.v ../cs5361.v ../ft245r_fifo.v

sim:
	vvp adc_bin -vcd

show:
	gtkwave dump.vcd 2>&1 >/dev/null &

clean:
	rm -fr adc_bin dump.vcd


