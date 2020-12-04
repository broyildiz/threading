BINARIES = flip threaded_basics

cc = gcc
CFLAGS = -Wall -g -c
LDLIBS = -lrt -lm -lpthread

all: $(BINARIES)

clean:
	rm -f *.0 $(BINARIES)

flip: flip.o
flip.o: uint128.h

threaded_basics: threaded_basics.o

threaded_basics.0: uint128.h flip.h