#include "vehicle.h"
#include <string>

using namespace std;

Vehicle::Vehicle() {
	sponsor = "";
}

Vehicle::Vehicle(Vehicle &v) {
	sponsor = v.sponsor;
}
		
Vehicle::~Vehicle() {
	// delete when needed
}

void Vehicle::setSponsor(string s) {
	sponsor = s;
}
	
string Vehicle::getSponsor() {
	return sponsor;
}
