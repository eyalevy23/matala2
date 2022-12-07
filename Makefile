CC=gcc
AR = ar
FLAGS= -Wall -g

all: connections

main.o: main.c my_mat.h
	$(CC) $(FLAGS) -c main.c

my_mat.o: my_mat.c my_mat.h
	$(CC) $(FLAGS) -c my_mat.c

libmy_mat.a: my_mat.o main.o
	$(AR) -rcs libmy_mat.a my_mat.o

connections: libmy_mat.a
	$(CC) $(FLAGS) main.o my_mat.o -o connections

clean:
	rm -f *.a *.o connections

leakTest: clean connections
	valgrind --leak-check=full  --track-origins=yes --show-leak-kinds=all --error-exitcode=1 ./connections