#include "person.h"
#include <iostream>
#include <string>

using namespace std;


Person::Person() {
	name = "";	
	vehicles = nullptr;
}

Person::~Person() {
	cout << "person removed" << endl;
}


Person::Person(Person &p) {
	cout << "copy cn called" << endl;
	name = p.name;	
}


void Person::setName(string n) {
	name = n;
}


string Person::getName() {
	return name;
}


void Person::addVehicles(int count) {

	Vehicle *newVehicles = new Vehicle[count];
	string s;

	for (int i = 0; i < count; ++i) {
		cout << "enter sponsor: ";
		cin >> s;
	}

	vehicles =  newVehicles;
}


Vehicle *Person::getVehicles() {
	return vehicles;
}

Person &Person::operator=(Person &p) {
	name = p.name;
	return *this;
}


