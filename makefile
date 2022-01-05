CC= gcc
DD= -Wall -g
AR= ar

graph: libd.a main.o
	$(CC) $(DD) -o graph main.o libd.a

libd.a: graph.o
	$(AR) -rcs   libd.a graph.o

main.o: main.c graph.h
	$(CC) $(DD) -c main.c

graph.o: graph.c graph.h
	$(CC) $(DD) -c graph.c

all: finish



.PHONY: clean

clean:
	rm -f *.o *.a finish
