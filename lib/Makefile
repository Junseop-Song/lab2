libcalculation.a : add.o minus.o multi.o divide.o
	ar rcs libcalculation.a add.o minus.o multi.o divide.o

add.o : add.c
	gcc -c add.c

minus.o : minus.c
	gcc -c minus.c

multi.o : multi.c
	gcc -c multi.c

divide.o : divide.c
	gcc -c divide.c

clean :
	rm -f libcalculaion.a add.o minus.o multi.o divide.o
