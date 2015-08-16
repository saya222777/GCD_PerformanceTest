CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0 

objects	= case1.o

default: case1

.PHONY: default clean

case1: $(objects)
	$(CC) -o $@ $^

case1.o: case1.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) case1

qemu: case1
	qemu-arm -L /usr/arm-linux-gnueabihf ./case1 -lrt
