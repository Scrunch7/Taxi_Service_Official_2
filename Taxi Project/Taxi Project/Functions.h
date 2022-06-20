#pragma once
#include<windows.h>
#include <stdio.h>
#include <iomanip>
#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include <sstream>
#include <time.h> 
#include <ctime>
#include <CMATH>
#include <stdio.h>

//stds
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
using std::setprecision;
using std::srand;
using std::time;

<<<<<<< Updated upstream
struct newDriver {
=======
// structs
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
>>>>>>> Stashed changes
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

<<<<<<< Updated upstream
void DrawLine(int stars);
void landing();

newDriver driverRegistration();
=======


//functions
void DrawLine(int stars);
void landing();


//open and close
string CSVOpenClose();
string TXTOpenClose();
//read and writing file fuctions
void directWriteTXT(string fileName);
void readTXT(string fileName);
void directWriteCSV(string fileName);
void readCSV(string fileName);
//Accounts
void admin();
void driver(string driverID);
void user(string userName);
//Pages
void Booking(string userName);
Driver driverRegistration();
void login(char accountType);
>>>>>>> Stashed changes
