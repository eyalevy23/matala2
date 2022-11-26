all: connections

main.o:
	gcc -Wall -c main.c

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c

connections: my_mat.o main.o
	gcc -Wall -g main.o my_mat.o -o connections

clean:
	rm -f *.o connections

leakTest: clean connections
	valgrind --leak-check=full  --track-origins=yes --show-leak-kinds=all --error-exitcode=1 ./connections