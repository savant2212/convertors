CROSS_COMPILE=

CC=$(CROSS_COMPILE)gcc
LD=$(CROSS_COMPILE)ld

SOURCE = byteconv.o timeconv.o

all:  byteconv timeconv

byteconv: $(SOURCE)
	$(CC) byteconv.o -o byteconv
timeconv: $(SOURCE)
	$(CC) timeconv.o -o timeconv

.PHONY: clean

clean:
	rm -f *.o byteconv timeconv