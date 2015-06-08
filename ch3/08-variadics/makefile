CPP = g++
CPPFLAGS = -Wall -std=c++11


all: variadics.out

variadics.out: variadics.o
	$(CPP) $(CPPFLAGS) -o variadics.out variadics.o

clean:
	-rm variadics.out variadics.o