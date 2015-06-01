CPP = g++
CPPFLAGS = -Wall -std=c++11


all: namespace.out

namespace.out: namespace.o
	$(CPP) $(CPPFLAGS) -o namespace.out namespace.o

clean:
	-rm namespace.out namespace.o