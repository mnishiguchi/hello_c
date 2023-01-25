# Makefile for building the calc_distance program
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

all: calc_distance

calc_distance: calc_distance.o io_utils.o
	$(CC) calc_distance.o io_utils.o -o calc_distance

calc_distance.o: calc_distance.c io_utils.h
	$(CC) -c calc_distance.c

io_utils.o: io_utils.c
	$(CC) -c io_utils.c

clean:
	rm -f *.o calc_distance

.PHONEY: all clean
