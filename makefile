all: main.o 
	gcc -o program main.o

main.o: main.c headers.h
	gcc -c main.c

run: 
	./program.exe

clean:
	rm *.o
	rm program
	rm *~