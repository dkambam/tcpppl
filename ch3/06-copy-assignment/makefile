CPP = g++
CPPFLAGS = -Wall -std=c++11


all: copy-assignment.out

copy-assignment.out: copy-assignment.o
	$(CPP) $(CPPFLAGS) -o copy-assignment.out copy-assignment.o

clean:
	-rm copy-assignment.out copy-assignment.o