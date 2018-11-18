#include "pch.h"
#include <iostream>
#include <string>
#include "Helicopter.h"
using namespace std;

int main()
{
	// Create object.
	Helicopter A("Mi24", 25, 345.45, 12, "Houston");

	// Output.
	cout << A.getName() << endl;
	cout << A.getNumberOfPassengers() << endl;
	cout << A.getMaxV() << endl;
	cout << A.getTable() << endl;
	cout << A.getType() << endl;
	cout << A.getH() << endl;
	cout << A.getNamePilot() << endl;
	
	Helicopter B("Mi2", 15, 240.98, 12, "Houston");
	cout << B.getName() << endl;
	cout << B.getNumberOfPassengers() << endl;
	cout << B.getMaxV() << endl;
	cout << B.getTable() << endl;
	cout << B.getType() << endl;
	cout << B.getH() << endl;
	cout << B.getNamePilot() << endl;
	

	Helicopter C("Mi8", 30, 345.1, 12, "Houston");
	cout << C.getName() << endl;
	cout << C.getNumberOfPassengers() << endl;
	cout << C.getMaxV() << endl;
	cout << C.getTable() << endl;
	cout << C.getType() << endl;
	cout << C.getH() << endl;
	cout << C.getNamePilot() << endl;
}



