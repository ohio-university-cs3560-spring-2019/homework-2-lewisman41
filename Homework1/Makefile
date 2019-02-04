prog1: main.o functions.a
	g++ -o prog1 ./lib/functions.a
	mv prog1 ./bin

main.o: main.cc functions.h
	g++ -Wall -c main.cc

functions.o: functions.cc functions.h
	g++ -Wall -c functions.cc

functions.a: functions.o
	ar rcv functions.a functions.o main.o
	mv functions.a ./lib
	mv functions.h ./include
