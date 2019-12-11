#ifndef PERSON_H
#define PERSON_H
#include "vehicle.h"
#include <string>

using namespace std;

class Person {

	private:
		string name;
		int vCount;
		Vehicle *vehicles;	

	public:
		Person();
		Person(Person &);
		~Person();

		void setName(string);
		string getName();

		void addVehicles(int);
		Vehicle *getVehicles();	

		Person& operator=(Person &);
		
};

#endif
