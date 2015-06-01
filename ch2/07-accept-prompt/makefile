CPP = g++
CPPFLAGS = -Wall -std=c++11


all: accept-prompt.out

accept-prompt.out: accept-prompt.o
	$(CPP) $(CPPFLAGS) -o accept-prompt.out accept-prompt.o

clean:
	-rm accept-prompt.out accept-prompt.o