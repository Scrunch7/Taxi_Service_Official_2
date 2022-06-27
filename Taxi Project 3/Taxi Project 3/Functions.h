#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <CMATH>
#include <time.h> 
#include <windows.h>
#include <stdio.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include <sstream>

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
using std::size;

//structs
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
	string DoB;
	string DoB_Day;
	string DoB_Month;//date of birth
	string DoB_Year;
	string nationality;
	string licenceNumber;
	string expiryDate; //dd/mm/yyyy
	string yearsDriving; //driving experience
	string contactNumber;
	string email;
	string address; //num, street, suburb, city/region
	string bankAccountNumber;
	string bankName;
	string vehicleRegoNum;
	string vehicleMake;
	string vehicleModel;
	string wofExpiryDate;
	int endorsmentNumber; //srand
	string endorsmentExpiry; //6 months from date of registration (date)`
	string driverUsername;
	string driverPassword;
};

//Functions
//open anc close
string CSVOpenClose();
string TXTOpenClose();
//read and writing file fuctions
void dWriteTXT(string fileName);
void readTXT(string fileName);
void directWriteCSV(string fileName);
void readCSV(string fileName);
void writeCSV(string fileName);
void targetedReadCSV(string fileName, int target);
//Accounts
void adminAccount();
void driverAccount(string driverID);
void userAccount(string userName);
//Pages
void Booking(string username);
void login(char accountType);
//unsorted
void DrawLine(int stars);
void landing();

void driverRegistration();
void customerRegistration(string customerFile);
void openClose(string customerFile);
void custReg(string customerFile);
void driverRegistration(string driverFile);
void filloutDriverRego(string driverFile);