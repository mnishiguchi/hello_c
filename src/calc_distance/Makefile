# -*- Makefile -*-

# ## Usage
#
#   make clean
#   make
#
all: calc_distance

calc_distance: calc_distance.o io_utils.o
	clang calc_distance.o io_utils.o -o calc_distance

calc_distance.o: calc_distance.c io_utils.h
	clang -c calc_distance.c

io_utils.o: io_utils.c
	clang -c io_utils.c

clean:
	rm -f *.o calc_distance
