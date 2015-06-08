CPP = g++
CPPFLAGS = -Wall -std=c++11


all: map-key-not-found.out

map-key-not-found.out: map-key-not-found.o
	$(CPP) $(CPPFLAGS) -o map-key-not-found.out map-key-not-found.o

clean:
	-rm map-key-not-found.out map-key-not-found.o