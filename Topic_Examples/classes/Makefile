# Purpose: Makefile to build a program that creates a car, and allows the changing
#of the car's color

all: car exec

exec: car
	g++ hw1.cc car.o -o prog

car:
	g++ -c car.cc -o car.o

clean:
	rm -f *.o *.out prog
