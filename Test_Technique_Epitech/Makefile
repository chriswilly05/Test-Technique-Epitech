CC=gcc
CFLAGS=-Wall -ansi
OBJ=star.o 

exe : $(OBJ)
	$(CC) -o exe $(OBJ) $(CFLAGS)

star.o : star.c 
	$(CC) -c star.c $(CFLAGS)

clean: 
	rm -f *.o
	rm -f *~