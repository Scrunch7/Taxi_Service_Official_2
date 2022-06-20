#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <CMATH>
#include <time.h> 
#include <windows.h>
#include <stdio.h>
#include <fstream>

using std::srand;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::time;
using std::fstream;
using std::ios;


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
	string firstName;
	string lastName;
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
	string vehicleMake;
	string vehicleModel;
	string wofExpiryDate;
	int endorsmentNumber; //srand
	string endorsmentExpiry; //6 months from date of registration (date)`
};




void DrawLine(int stars);
void landing();
void writeCSV(string fileName);

void driverRegistration();

void customerRegistration(string customerFile);
void openClose(string customerFile);
void custReg(string customerFile);

void driverRegistration(string driverFile);
void filloutDriverRego(string driverFile);