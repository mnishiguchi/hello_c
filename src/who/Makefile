# Makefile for building the who1 program
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

all: who1

who1: who1.o
	$(CC) who1.o -o who1

clean:
	rm -f *.o who1

.PHONEY: all clean
