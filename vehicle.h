#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include <iostream>

using namespace std;

class Vehicle {
	
	private:
		string sponsor;

	public:
		Vehicle();
		Vehicle(Vehicle &);
		~Vehicle();

		void setSponsor(string);
		string getSponsor();
};
#endif
