# Makefile for ex1 program
CFLAGS=-Wall -g
CC=cc
FILE=ex1.c

clean:
	rm -f ex1

all: $(FILE)
	$(CC) $(FILE) -o ex1
