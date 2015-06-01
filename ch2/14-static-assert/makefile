CPP = g++
CPPFLAGS = -Wall -std=c++11


all: static-assert.out

static-assert.out: static-assert.o
	$(CPP) $(CPPFLAGS) -o static-assert.out static-assert.o

clean:
	-rm static-assert.out static-assert.o