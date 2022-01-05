CC= gcc
DD= -Wall -g
AR= ar

libd.a: graph.o
        $(AR) -rcs   libd.a graph.o

finish: libd.a
        $(CC) $(DD) -o finish main.o libd.a



main.o: main.c graph.h
        $(CC) $(DD) -c main.c

graph.o: graph.c graph.h
        $(CC) $(DD) -c graph.c

all: finish


.PHONY: clean

clean:
        rm -f *.o *.a graph all
