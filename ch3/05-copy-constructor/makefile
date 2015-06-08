CPP = g++
CPPFLAGS = -Wall -std=c++11


all: copy-constructor.out

copy-constructor.out: copy-constructor.o
	$(CPP) $(CPPFLAGS) -o copy-constructor.out copy-constructor.o

clean:
	-rm copy-constructor.out copy-constructor.o