#include "Functions.h"

int permissions;

void customerLogin(); //needs to be edited to read from files and compare
void driverLogin();
void adminLogin();
void readToS();

string userUsername, userPassword, operatorUsername, operatorPassword, adminUsername, adminPassword;
bool userUsernameValid = false, userPasswordValid = false;
bool opUsernameValid = false, opPasswordValid = false;
bool adminUsernameValid = false, adminPasswordValid = false;
bool breakLoop = false;
int landingInput; 	string test = "Testing testing";


string usernameInput;
string passwordInput;

void landing() { //user gives input, validates login and password OR allows user to register which writes relevent info to file for future validation
	Driver driver;

	DrawLine(11); cout << endl;
	cout << "Main Menu *\n";
	DrawLine(11); cout << endl;

	cout << "1. Customer Login\n" << "2. Customer Sign Up\n" << "3. Driver Login\n" << "4. Driver Registration\n" << "5. Admin Options\n" <<"6. Read Terms of Service\n" << "7. Exit\n";
	cout << "Choose: "; cin >> landingInput;

	while (!breakLoop) {
		switch (landingInput)
		{
		case 1: //customer Login
			login('u');
			return;
			break;

		case 2: //customer Sign Up
			custReg("customerFile.csv");
			return;
			break;


		case 3: //driver login
			login('d');
			break;

		case 4: //driver registration
			cout << "Placeholder4\n";
			driverRegistration("driverFile.csv");
			break;

		case 5: //admin login
			login('a');
			break;

		case 6: //ToS
		
			cout << "Testing testing";
			readToS();
			landing();
			break;

		case 7: //exit
			breakLoop = true;
			break;
		default:
			cout << "Invalid Option, please enter 1-6\n\n\n";
			landing();
			break;
		}
	}
}

void readToS() {
	ifstream myFile;
	string myString;

	myFile.open("TermsOfService.txt", ios::in);
	
		if (myFile.is_open()) { // always check whether the file is open
			string ToS;
			while (getline(myFile, ToS)) {
				cout << ToS << "\n\n\n";
			}
		}
	
	myFile.close();
}
