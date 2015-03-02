CXX=g++
CXXFLAGS =-std=c++11 -Wall -pedantic -ggdb
OBJ=main.o lexan.o lexicalsymbol.o
DEPS=lexan.h lexicalsymbol.h

%.o: %.c $(DEPS)
	$(CXX) -c -o $@ $<

frontend: $(OBJ)
	$(CXX) -o $@ $^

.PHONY: clean
clean:
	rm -f *.o frontend
