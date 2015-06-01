CPP = g++
CPPFLAGS = -Wall -std=c++11


all: enum-operators.out

enum-operators.out: enum-operators.o
	$(CPP) $(CPPFLAGS) -o enum-operators.out enum-operators.o

clean:
	-rm enum-operators.out enum-operators.o