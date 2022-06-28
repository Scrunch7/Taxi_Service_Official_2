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
	string firstName;
	string lastName;
	string contactNumber;
	string email;
	string streetAddress;
	paymentMethod eftposCard;
	string username;
	string password;
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

//bool checkUserName(string userName);
bool checkPassword(string input);
bool checkinput(string type, string input);
bool checkUsername(string input);