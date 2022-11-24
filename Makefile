all: connections

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c

connections: my_mat.o
	gcc -Wall -g main.c my_mat.o -o connections

clean:
	rm -f  *.o  *.a *.so connections

leakTest: clean connections
	valgrind --leak-check=full --show-leak-kinds=all ./connections