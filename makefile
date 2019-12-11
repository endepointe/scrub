CF = -std=c++11 -c -g

all: prac

prac: person.o vehicle.o driver.o 
	g++ -g person.o vehicle.o driver.o -o prac

person.o: person.cpp
	g++ $(CF) person.cpp

vehicle.o: vehicle.cpp
	g++ $(CF) vehicle.cpp

driver.o: driver.cpp
	g++ $(CF) driver.cpp

clean:
	rm *.o prac
