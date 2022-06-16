#include "Functions.h"


//function Prototypes


void custReg()
{
	DrawLine(15);
	cout << "Welcome Customer\n";
	DrawLine(15);

}

void customerRegistration() {
	Customer test;
	cout << "Enter your full name: "; cin >> test.fullName;
	cout << "Enter your Contact Number: "; cin >> test.contactNumber;
	cout << "Enter your Email: "; cin >> test.email;
	cout << "Enter your Street Address: "; cin >> test.streetAddress;
}