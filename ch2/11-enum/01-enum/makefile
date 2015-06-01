CPP = g++
CPPFLAGS = -Wall -std=c++11


all: enum.out

enum.out: enum.o
	$(CPP) $(CPPFLAGS) -o enum.out enum.o

clean:
	-rm enum.out enum.o