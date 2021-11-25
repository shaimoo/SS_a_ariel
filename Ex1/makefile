CC =gcc
DD =-Wall -g
AR=ar
OBJECTS1= basicClassification.o advancedClassificationLoop.o
OBJECTS2= basicClassification.o advancedClassificationRecursion.o
ALL=  mains maindloop maindrec
LIB= libclassloops.a libclassrec.a libclassrec.so libclassloops.so

main.o: main.c NumClass.h
	$(CC) $(DD) -c main.c

basicClassification.o: basicClassification.c NumClass.h
	$(CC)  $(DD) -c  basicClassification.c -lm

advancedClassification.o: advancedClassificationLoop.c NumClass.h
	$(CC)  $(DD) -c  advancedClassificationLoop.c -lm

advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC)  $(DD) -c  advancedClassificationRecursion.c -lm

libclassloops.a: ${OBJECTS1}
	$(AR) -rcs libclassloops.a ${OBJECTS1}

loops: libclassloops.a

libclassrec.a: ${OBJECTS2}
	$(AR) -rcs libclassrec.a ${OBJECTS2}

recursives: libclassrec.a

recursived: libclassrec.so

libclassrec.so: ${OBJECTS2}
	$(CC)  -shared -fPIC -o  libclassrec.so ${OBJECTS2} -lm

loopd: libclassloops.so

libclassloops.so: ${OBJECTS1}
	$(CC)   -shared -fPIC -o libclassloops.so ${OBJECTS1} -lm

mains: libclassrec.a  main.o
	$(CC) $(DD) -o mains main.o libclassrec.a -lm

maindloop: libclassloops.so  main.o
	$(CC) $(DD)  -o  maindloop main.o ./libclassloops.so -lm

maindrec:  main.o libclassrec.a
	$(CC) $(DD) -o  maindrec main.o ./libclassrec.so  -lm

all: $(LIB)  $(ALL)

.PHONY: clean

clean:
	rm -f *.out *.a *.so  mains  maindloop maindrec *.o all















