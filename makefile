CC =gcc
DD =-Wall -g
OBJECTS1= main.o my_prog.h
OBJECTS2= my_prog.o
ALL=  main.o

main.o: main.c my_prog.h
	$(CC) $(DD) -c main.c

my_prog.o: my_prog.c
	$(CC) $(DD) -c my_prog.c

libd.so: ${OBJECTS2}
	$(CC)  -shared -fPIC -o  libd.so ${OBJECTS2} -lm


stringProg: libd.so  main.o
	$(CC) $(DD)  -o  stringProg main.o ./libd.so -lm

all: $(OBJECTS2) $(ALL) libd.so stringProg

.PHONY: clean

clean:
	rm -f *.out *.a *.so  stringProg *.save   *.o all

clean_windows:
	del /f *.out *.a *.so  stringProg *.save   *.o all














