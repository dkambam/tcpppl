CPP = g++
CPPFLAGS = -Wall -std=c++11


all: custom-input-operator.out

custom-input-operator.out: custom-input-operator.o
	$(CPP) $(CPPFLAGS) -o custom-input-operator.out custom-input-operator.o

clean:
	-rm custom-input-operator.out custom-input-operator.o