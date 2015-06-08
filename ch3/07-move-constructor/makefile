CPP = g++
CPPFLAGS = -Wall -std=c++11


all: move-constructor.out

move-constructor.out: move-constructor.o
	$(CPP) $(CPPFLAGS) -o move-constructor.out move-constructor.o

clean:
	-rm move-constructor.out move-constructor.o