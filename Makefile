CC = g++
RM = rm -f

CFLAGS = -c -Wall -std=c++11
LFLAGS = 


all: main

main: main.o CompareLastName.o CompareMonth.o CompareYear.o Person.o printSortInfo.o readInfo.o printmefirst.o
	$(CC) main.o CompareLastName.o CompareMonth.o CompareYear.o Person.o printSortInfo.o readInfo.o printmefirst.o -o main $(LFLAGS)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

CompareLastName.o: CompareLastName.cpp CompareLastName.h
	$(CC) $(CFLAGS) CompareLastName.cpp
	
CompareMonth.o: CompareMonth.cpp CompareMonth.h
	$(CC) $(CFLAGS) CompareMonth.cpp
	
CompareYear.o: CompareYear.cpp CompareYear.h
	$(CC) $(CFLAGS) CompareYear.cpp
	
Person.o: Person.cpp Person.h
	$(CC) $(CFLAGS) Person.cpp

printSortInfo.o: printSortInfo.cpp printSortInfo.h
	$(CC) $(CFLAGS) printSortInfo.cpp
	
readInfo.o: readInfo.cpp readInfo.h
	$(CC) $(CFLAGS) readInfo.cpp

printmefirst.o: printmefirst.cpp printmefirst.h
	$(CC) $(CFLAGS) printmefirst.cpp

clean:
	$(RM) *.o main
	
run:
	./main
