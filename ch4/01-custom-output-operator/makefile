CPP = g++
CPPFLAGS = -Wall -std=c++11


all: custom-output-operator.out

custom-output-operator.out: custom-output-operator.o
	$(CPP) $(CPPFLAGS) -o custom-output-operator.out custom-output-operator.o

clean:
	-rm custom-output-operator.out custom-output-operator.o