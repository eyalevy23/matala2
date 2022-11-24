

all: connections

libclassw.a: my_mat.o
	ar -rcs libclassw.a my_mat.o

my_mat.o: my_mat.c my_mat.h
	gcc -Wall -c my_mat.c

connections: libclassw.a
	gcc -Wall main.c libclassw.a -o connections

clean:
	rm -f  *.o  *.a *.so connections