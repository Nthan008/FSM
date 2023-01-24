all:
	gcc -o mylib.o -c mylib/mylib.c
	gcc -o main.o main.c mylib.o
	./main.o
clear:
	rm *.out
	rm *.o