CPP = g++
CPPFLAGS = -Wall -std=c++11


all: try-blocked-main.out

try-blocked-main.out: try-blocked-main.o
	$(CPP) $(CPPFLAGS) -o try-blocked-main.out try-blocked-main.o

clean:
	-rm try-blocked-main.out try-blocked-main.o