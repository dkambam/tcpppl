CPP = g++
CPPFLAGS = -Wall -std=c++11


all: constexpr.out

constexpr.out: constexpr.o
	$(CPP) $(CPPFLAGS) -o constexpr.out constexpr.o

clean:
	-rm constexpr.out constexpr.o