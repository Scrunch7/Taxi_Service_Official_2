#pragma once
#include <iostream>
#include <string.h>
#include <time.h> 
#include <CMATH>
#include <time.h> 
#include<windows.h>
#include <stdio.h>
#include <vector>
#include <sstream>
#include<fstream>

using std::srand;

using std::cin;
using std::cout;
using std::string;
using std::ios;
using std::fstream;
using std::endl;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::stringstream;


extern struct paymentMethod
{
	int cardNumber;
	int expMonth;
	int expYear;
	int CVC;
};

extern struct Customer {
	string fullName;
	int contactNumber;
	string email;
	string streetAddress;
	paymentMethod eftposCard;
};

extern struct Driver {
	//new driver detail input, creates a new driver
	string fullName;
	char gender; //male, female, other
	string DoB; //date of birth
	string nationality;
	string licenceNumber;
	string expiryDate; //dd/mm/yyyy
	float yearsDriving; //driving experience
	int contactNumber;
	string email;
	string address; //num, street, suburb, city/region
	int bankAccountNumber;
	string bankName;
	int vehicleRegoNum;
	string vehicleModel;
	string wofExpiryDate;
	int endorsmentNumber; //srand
	string endorsmentExpiry; //6 months from date of registration (date)`
};

extern struct Admin {
	string name = "admin";
};

Customer Login(Customer user) {

	return user;
}
Driver Login(Driver user) {

	return user;
}
Admin Login(Admin user) {

	return user;
}

char accountType;

void DrawLine(int stars);
void landing();
string CSVOpenClose();
string TXTOpenClose();
Driver driverRegistration();

//read and writing file fuctions
void directWriteTXT(string fileName);
void readTXT(string fileName);
void directWriteCSV(string fileName);
void readCSV(string fileName);
//Accounts
void admin();
void driver(string driverID);
void user(string userName);

//customer Registration

void customerRegistration(string customerFile);
void openClose(string customerFile);
void custReg(string customerFile);