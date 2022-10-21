dlib_calculator_make : dlcalculator.o
	gcc -o dlib_calculator_make -rdynamic dlcalculator.o -ldl
dlcalculator.o : dlcalculator.c
	gcc -c dlcalculator.c
clean :
	rm -f dlib_calculator_make dlcalculator.o

