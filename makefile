CC = gcc
DD= -Wall -g

all: finish

finish: main.o libd.so
	$(CC) $(DD) -o finish main.o libd.so

libd.so: graph.o
	$(CC)  -shared -fPIC -o  libd.so graph.o -lm


main.o: main.c graph.h
	$(CC) $(DD) -c main.c

graph.o: graph.c graph.h
	$(CC) $(DD) -c graph.c

.PHONY: clean

clean:
	rm -f *.o *.a graph all

