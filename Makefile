CC=g++ -std=c++11
CFLAGS=-Wall -pedantic -ggdb
OBJ=main.o lexan.o lexicalsymbol.o
DEPS=lexan.h lexicalsymbol.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

frontend: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o frontend
