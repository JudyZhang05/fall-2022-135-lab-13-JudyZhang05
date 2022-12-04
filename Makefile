main: main.o recursion.o
	g++ -o main main.o recursion.o

tests: tests.o recursion.o
	g++ -o tests tests.o recursion.o

main.o: main.cpp funcs.h

recursion.o: recursion.cpp funcs.h

clean:
	rm -f *o