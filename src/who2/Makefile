# Makefile for building the who2 program
#
# Makefile targets:
#
# all           build
# clean         clean build products and intermediates
#
# Variables to override:
#
# CC            C compiler

CC = gcc

all: who2

who2: who2.o
	$(CC) who2.o -o who2

clean:
	rm -f *.o who2

.PHONEY: all clean
