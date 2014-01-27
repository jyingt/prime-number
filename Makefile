CC=gcc
CFLAGS=-c -Wall
LDFLAGS=
BINARY=prime

all: $(BINARY)

prime: prime.o
	$(CC) $(LDFLAGS) $^ -o $@

prime.o: prime.c
	$(CC) $(CFLAGS) $^ -o $@

.PHONY: clean

clean:
	rm -rf *.o $(BINARY)
