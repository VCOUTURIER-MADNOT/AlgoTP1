CC = gcc -Wall -O3 -ansi -pedantic

all: progTri

progTri: progTri.o tri.o tas.o util.o
	$(CC) -o progTri progTri.o tri.o tas.o util.o

progTri.o: progTri.c tri.h types.h
	$(CC) -o progTri.o -c progTri.c

tri.o: tri.c tri.h tas.h types.h
	$(CC) -o tri.o -c tri.c

tas.o: tas.c tas.h util.h types.h
	$(CC) -o tas.o -c tas.c

util.o: util.c util.h types.h
	$(CC) -o util.o -c util.c

clean:
	rm -rf *.o
			