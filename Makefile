# Makefile for ex1 program
CFLAGS=-Wall -g
CC=clang

clean:
	rm -f ex1
	rm -f ex3
	rm -f ex4
	rm -f ex5

all:
	$(CC) $(CFLAGS) ex1.c -o ex1
	$(CC) $(CFLAGS) ex3.c -o ex3
	$(CC) $(CFLAGS) ex4.c -o ex4
	$(CC) $(CFLAGS) ex5.c -o ex5
