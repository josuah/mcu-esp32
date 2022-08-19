OBJCOPY = xtensa-objcopy
OBJDUMP = xtensa-objdump
CC = xtensa-gcc

.SUFFIXES: .c .s .S .o .elf .asm .hex
.S.o:

firmware.elf: ${OBJ}
	${CC} ${LDFLAGS} -Wl,-Map=firmware.map -Wl,-Tlibesp32.ld -Wl,--gc-sections -static -nostdlib -o $@ ${OBJ} ${LIBS}

.c.o:
	${CC} ${CFLAGS} -ffunction-sections -fdata-sections -c -o $@ $<

.S.o:
	${CC} ${CFLAGS} -D__ASSEMBLY__ -c -o $@ $<

.elf.asm:
	${OBJDUMP} -z -d $< >$@

.elf.hex:
	${OBJCOPY} -j .text -j .data -O ihex $< $@
