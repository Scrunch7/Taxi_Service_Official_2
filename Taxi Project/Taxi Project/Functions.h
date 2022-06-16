#pragma once
#include <iostream>
#include <string.h>
#include <ctime>
#include <CMATH>
#include <time.h> 
#include<windows.h>
#include <stdio.h>

using std::srand;

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::time;

struct newDriver {
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

void DrawLine(int stars);
void landing();

newDriver driverRegistration();