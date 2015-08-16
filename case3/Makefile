CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0

objects	= case3.o

default: case3

.PHONY: default clean

case3: $(objects)
	$(CC) -o $@ $^

case3.o: case3.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) case3

qemu: case3
	qemu-arm -L /usr/arm-linux-gnueabihf ./case3 -lrt
