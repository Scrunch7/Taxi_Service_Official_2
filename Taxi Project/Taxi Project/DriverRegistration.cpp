#include "Functions.h"

//function Prototypes
bool eligiblityCheck();
Driver filloutDriverRego();


bool eligible;

Driver driverRegistration() {
	DrawLine(15);
	cout << "Welcome New Driver\n";
	DrawLine(15);
	cout << "Please fill out the following check:\n";
	eligiblityCheck();
	if (eligible) {
		return filloutDriverRego();
	}
	return Driver();
}

bool eligiblityCheck() {
	int licenceType;
	float yearsDriven;
	float carAge;
	float driverAge;
	cout << "What kind of licence do you have:\n, 1. Learners\n 2. Restricted\n 3.Full\n 4. None\nChoose:"; cin >> licenceType;
	cout << "\nHow many years have you driven: "; cin >> yearsDriven;
	cout << "\nHow many years old is your car? "; cin >> carAge;
	cout << "How many years old are you: "; cin >> driverAge;

	if (licenceType == 4 && yearsDriven > 2 && carAge <= 10 && driverAge > 20) {
		eligible = true;
	}
	return eligible;
}


Driver filloutDriverRego() {
	int randomNumber;
	Driver test; //to test the ability to fill out form, replace with proper mechanics
	cout << "\nEnter your First and last name (e.g John Smith): "; cin >> test.fullName;
	cout << "\nEnter your Gender (m, f, o "; cin >> test.gender;
	cout << "\nEnter your Date of Birth (dd/mm/yyyy) "; cin >> test.DoB;
	cout << "\nEnter your Nationality: "; cin >> test.nationality;
	cout << "\nEnter your Licence Number "; cin >> test.licenceNumber;
	cout << "\nEnter your licence Date of Expiry "; cin >> test.expiryDate;
	cout << "\nEnter your years of Driving:  "; cin >> test.yearsDriving;
	cout << "\nEnter your contact number "; cin >> test.contactNumber;
	cout << "\nEnter your Email "; cin >> test.email;
	cout << "\nEnter your Bank Account number (16 digits): "; cin >> test.bankAccountNumber;
	cout << "\nEnter your Bank's Name: "; cin >> test.bankName;
	cout << "\nEnter your Vehicle Registration Number "; cin >> test.vehicleRegoNum;
	cout << "\nEnter your WoF Expiry Date "; cin >> test.wofExpiryDate;

	srand((time(NULL)));
	for (int i = 100000; i < 999999; i++) {
		test.endorsmentNumber = (rand() % 10) + 1;
	}

	test.endorsmentExpiry = "9/06/2024"; //find way to generate random
	return test;
} //will need way of chossing inputs for mutliple drivers