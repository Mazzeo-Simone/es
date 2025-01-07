$CC=gcc
$CFLAGS=-Wall

all: somma_incrementale

clean: somma_incrementale somma_incrementale_*.o
	rm -f somma_incrementale somma_incrementale_*.o

somma_incrementale: somma_incrementale_a.o somma_incrementale_b.o
	gcc -o somma_incrementale somma_incrementale_a.o somma_incrementale_b.o

somma_incrementale_a.o: somma_incrementale.h somma_incrementale_a.c
	gcc -c -o somma_incrementale_a.o somma_incrementale_a.c

somma_incrementale_b.o: somma_incrementale.h somma_incrementale_b.c
	gcc -c -o somma_incrementale_b.o somma_incrementale_b.c
