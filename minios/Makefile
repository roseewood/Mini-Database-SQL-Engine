CC = gcc
CFLAGS = -Wall
OBJ = main.o process.o memory.o filesystem.o

minios: $(OBJ)
	$(CC) $(OBJ) -o minios

main.o: main.c
	$(CC) $(CFLAGS) -c main.c

process.o: process.c
	$(CC) $(CFLAGS) -c process.c

memory.o: memory.c
	$(CC) $(CFLAGS) -c memory.c

filesystem.o: filesystem.c
	$(CC) $(CFLAGS) -c filesystem.c

clean:
	rm -f *.o minios