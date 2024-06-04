CXX := g++
CFLAGS := -I./ -g -Og -std=c++14
LDFLAGS :=

all: oops

task: oops.cpp oops.h
	$(CXX) $(CFLAGS) $(LDFLAGS) oops -o oops

run: oops
	./oops

.PHONY: clean

clean:
	-rm -fr oops *~ *.o key.* letter
