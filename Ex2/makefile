CC =gcc
DD =-Wall -g
OBJECTS1= main.o my_mat.h
OBJECTS2= my_mat.o
ALL=  main.o

main.o: main.c my_mat.h
	$(CC) $(DD) -c main.c

my_mat.o: my_mat.c
	$(CC) $(DD) -c my_mat.c

libd.so: ${OBJECTS2}
	$(CC)  -shared -fPIC -o  libd.so ${OBJECTS2} -lm


connections: libd.so  main.o
	$(CC) $(DD)  -o  connections main.o ./libd.so -lm

all: $(OBJECTS2) $(ALL) libd.so connections

.PHONY: clean

clean:
	rm -f *.out *.a *.so  connections *.save *.txt *.text  *.o all















