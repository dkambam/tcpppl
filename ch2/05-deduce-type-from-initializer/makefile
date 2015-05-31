CPP = g++
CPPFLAGS = -Wall -std=c++11


all: deduce-type-from-initializer.out

deduce-type-from-initializer.out: deduce-type-from-initializer.o
	$(CPP) $(CPPFLAGS) -o deduce-type-from-initializer.out deduce-type-from-initializer.o

clean:
	-rm deduce-type-from-initializer.out deduce-type-from-initializer.o