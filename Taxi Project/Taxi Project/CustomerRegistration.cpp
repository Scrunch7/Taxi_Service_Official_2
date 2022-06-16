#include "Functions.h"


//function Prototypes


void custReg()
{
	DrawLine(15);
	cout << "Welcome Customer\n";
	DrawLine(15);

}

void writeCSV(string fileName) {
	int field[5];
	std::fstream file(fileName + ".csv", ios::out | ios::app);

	for (int i = 0; i < 5; i++) {
		cout << "please enter information for storing\n";
		cin >> field[i];
	}

	file << field[0] << ","
		<< field[1] << ","
		<< field[2] << ","
		<< field[3] << ","
		<< field[4] << std::endl;
}

void customerRegistration() {
	Customer test;
	cout << "Enter your full name: "; cin >> test.fullName;
	cout << "Enter your Contact Number: "; cin >> test.contactNumber;
	cout << "Enter your Email: "; cin >> test.email;
	cout << "Enter your Street Address: "; cin >> test.streetAddress;
}