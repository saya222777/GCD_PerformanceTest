CC	= arm-linux-gnueabihf-gcc
CFLAGS	= -O0 
objects	= case2.o

default: case2

.PHONY: default clean

case2: $(objects)
	$(CC) -o $@ $^

case2.o: case2.c

%.o: %.c
	$(CC) -c $(CFLAGS) $(LDFLAGS) -o $@ $<

clean:
	rm -f $(objects) case2

qemu: case2
	qemu-arm -L /usr/arm-linux-gnueabihf ./case2 -lrt
