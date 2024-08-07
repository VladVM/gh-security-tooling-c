CC=gcc
CFLAGS=-I.

hello: main.c
	$(CC) -o hello main.c -I.
