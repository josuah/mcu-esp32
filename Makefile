CFLAGS = -Wall -Wextra -std=c99 -pedantic -ggdb
OBJ = example.o

all: firmware.hex

clean:
	rm -f *.[os] *.elf *.map *.hex
ocd:
	${OPENOCD}
gdb:
	${GDB} -x script.gdb

include libesp32.mk
