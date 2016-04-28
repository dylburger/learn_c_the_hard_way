# Makefile for ex1 program
CFLAGS=-Wall -g
CC=cc

clean:
	rm -f ex1
	rm -f ex3

all:
	$(CC) ex1.c -o ex1
	$(CC) ex3.c -o ex3
