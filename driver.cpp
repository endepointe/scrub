#include "person.h"
#include "vehicle.h"
#include <iostream>

using namespace std;

void printPersonInfo(Person p) {
	cout << "person info" << endl;
	cout << "Name: " << p.getName() << endl;
}

int main() {
	
	Person p;
	string n;
	int num;

	cout << "Enter person's name: ";

	cin >> n;

	p.setName(n);

	cout << "Enter the number of cars that " << n << " has: ";

	cin >> num;

	p.addVehicles(num);

	printPersonInfo(p);

	return 0;  

}
