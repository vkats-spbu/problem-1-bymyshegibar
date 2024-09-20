all: total

total: main.o hello.o
	g++ -Wall  main.o hello.o -o total

main.o: main.cpp
	g++ -c main.cpp

hello.o: hello.cpp
	g++ -c hello.cpp

clean:
	rm -rf *.o total
