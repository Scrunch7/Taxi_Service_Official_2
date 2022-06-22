#include "Functions.h"

int permissions;

void customerLogin(); //needs to be edited to read from files and compare
void driverLogin();
void adminLogin();

string userUsername, userPassword, operatorUsername, operatorPassword, adminUsername, adminPassword;
bool userUsernameValid = false, userPasswordValid = false;
bool opUsernameValid = false, opPasswordValid = false;
bool adminUsernameValid = false, adminPasswordValid = false;
bool breakLoop = false;
int landingInput;

void landing() { //user gives input, validates login and password OR allows user to register which writes relevent info to file for future validation




	Driver driver;

	DrawLine(11); cout << endl;
	cout << "Main Menu *\n";
	DrawLine(11); cout << endl;

	cout << "1. Customer Login\n" << "2. Customer Sign Up\n" << "3. Driver Login\n" << "4. Driver Registration\n" << "5. Admin Options\n" << "6. Exit\n";
	cout << "Choose: "; cin >> landingInput;

	while (breakLoop) {
		switch (landingInput)
		{
		case 1: //customer Login
			login('u');
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

		case 6: //exit
			breakLoop = true;
			break;
		default:
			cout << "Invalid Option, please enter 1-6\n\n\n";
			break;
		}
	}
}

