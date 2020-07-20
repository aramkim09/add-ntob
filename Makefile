all: sum_test

sum_test: sum.o main.o
	g++ -o sum_test sum.o main.o
sum.o: sum.h sum.c
	g++ -c -o sum.o sum.c

main.o: main.c sum.h
	g++ -c -o main.o main.c
clean:
	rm -f sum_test *.o
