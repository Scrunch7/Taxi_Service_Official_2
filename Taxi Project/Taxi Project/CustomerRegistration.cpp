#include "Functions.h"

struct paymentMethod
{
	int cardNumber;
	int expMonth;
	int expYear;
	int CVC;
};

struct newCustomer { //new driver detail input, creates a new driver
	string fullName;
	int contactNumber;
	string email;
	string streetAddress;
	paymentMethod eftposCard;
};
//function Prototypes


int custReg()
{
	DrawLine(15);
	cout << "Welcome Customer\n";
	DrawLine(15);
}

void customerRegistration() {
	newCustomer test;
	cout << "Enter your full name: "; cin >> test.fullName;
	cout << "Enter your Contact Number: "; cin >> test.contactNumber;
	cout << "Enter your Email: "; cin >> test.email;
	cout << "Enter your Street Address: "; cin >> test.streetAddress;
	test.eftposCard.card;
}