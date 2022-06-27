#include "Functions.h"

//function Prototypes
bool eligiblityCheck();
bool eligible;

void driverRegistration(string driverFile) {
	cout << endl;
	DrawLine(15);
	cout << "\nWelcome New Driver\n";
	DrawLine(15);
	cout << "\nPlease fill out the following check:\n";
	filloutDriverRego("driverFile.csv");
	//eligiblityCheck();
	//if (eligible) {
	//	return filloutDriverRego(driverFile);
	//	filloutDriverRego("driverFile.csv");
	//}
	landing();
}

bool eligiblityCheck() {
	int licenceType;
	float yearsDriven;
	float carAge;
	float driverAge;
	cout << "What kind of licence do you have:\n, 1. Learners\n 2. Restricted\n 3. Full\n 4. None\nChoose:"; cin >> licenceType;
	cout << "\nHow many years have you driven: "; cin >> yearsDriven;
	cout << "\nHow many years old is your car? "; cin >> carAge;
	cout << "\nHow many years old are you: "; cin >> driverAge;

	if (licenceType == 3 && yearsDriven > 2 && carAge <= 10 && driverAge > 20) {
		eligible = true;
	}
	return eligible;
}


void filloutDriverRego(string driverFile) {
	string enterPw;
	string repeatPw; //var for checking that user entered password correctly twice
	bool pwMatch = false;
	fstream myFile;

	myFile.open("driverFile.csv", ios::app);

	cout << "\nFile created and opened successfully\n\n";
	
	Driver test; //to test the ability to fill out form, replace with proper mechanics
	cout << "\nEnter your First Name: "; cin >> test.firstName;
	cout << "\n Enter your Last Name: "; cin >> test.lastName;
	cout << "\nEnter your Gender (m, f, o "; cin >> test.gender;
	cout << "\nEnter your Date of Birth (dd mm yyyy, include spaces) "; cin >> test.DoB_Day; cin >> test.DoB_Month; cin >> test.DoB_Year;
	test.DoB = test.DoB_Day + "/" + test.DoB_Month + "/" + test.DoB_Year;
	cout << "\nEnter your Nationality: "; cin >> test.nationality;
	cout << "\nEnter your Licence Number "; cin >> test.licenceNumber;
	cout << "\nEnter your licence Date of Expiry "; cin >> test.expiryDate;
	cout << "\nEnter your years of Driving:  "; cin >> test.yearsDriving;
	cout << "\nEnter your contact number "; cin >> test.contactNumber;
	cout << "\nEnter your Email "; cin >> test.email;
	cout << "\nEnter your Bank Account number (16 digits): "; cin >> test.bankAccountNumber;
	cout << "\nEnter your Bank's Name: "; cin >> test.bankName;
	cout << "\nEnter your Vehicle Registration Number "; cin >> test.vehicleRegoNum;
	cout << "\nEnter your Vehicle's Make: "; cin >> test.vehicleMake;
	cout << "\nEnter you Vehicle's Model: "; cin >> test.vehicleModel;
	cout << "\nEnter your WoF Expiry Date "; cin >> test.wofExpiryDate;

	srand((time(NULL)));
	for (int i = 100000; i < 999999; i++) {
		test.endorsmentNumber = (rand() % 999999) + 1;
	}

	test.endorsmentExpiry = "9/06/2024"; //find way to generate random
	
	DrawLine(15);
	test.driverUsername = test.lastName + test.firstName + test.DoB_Day; //creates username
	cout << "\nYour username is your last+first name and your DoB day: " << test.driverUsername << endl;
	while (!pwMatch) {
		cout << "\nPlease Enter a password: "; cin >> enterPw;
		cout << "\nPlease Re-enter password: "; cin >> repeatPw;

		if(enterPw==repeatPw){
			cout << "\n Passwords match!\n";
			test.driverPassword = enterPw;
			pwMatch = false;
			break;
		}
		cout << "\nPasswords Do Not Match\nPlease re-enter passwword\n";
	}
	
	myFile << test.firstName << ","
		<< test.lastName << ","
		<< test.gender << ","
		<< test.DoB << ","
		<< test.nationality << ","
		<< test.licenceNumber << ","
		<< test.expiryDate << ","
		<< test.yearsDriving << ","
		<< test.contactNumber << ","
		<< test.email << ","
		<< test.bankAccountNumber << ","
		<< test.bankName << ","
		<< test.vehicleRegoNum << ","
		<< test.vehicleMake << ","
		<< test.vehicleModel << ","
		<< test.wofExpiryDate << ","
		<< test.endorsmentNumber << ","
		<< test.endorsmentExpiry << "," 
		<< test.driverUsername<< ","
		<< test.driverPassword << endl;

	myFile.close();

	if (myFile.is_open()) {
		cout << "\nFile failed to close\n";
	}
	cout << "\nFile closed successfully\n\n";
} //will need way of chossing inputs for mutliple drive
