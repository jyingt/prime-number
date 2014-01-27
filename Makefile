CC=gcc
CFLAGS=-c -Wall
LDFLAGS=

all: prime

prime: prime.o
	$(CC) $(LDFLAGS) prime.o -o $@

prime.o: prime.c
	$(CC) $(CFLAGS) prime.c -o $@

.PHONY: clean

clean:
	rm -rf *.o prime