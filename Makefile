CC=g++
CFLAGS=-Wall -pedantic -ggdb
OBJ=main.o lexan.o
DEPS=lexan.h

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

frontend: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean
clean:
	rm -f *.o frontend
