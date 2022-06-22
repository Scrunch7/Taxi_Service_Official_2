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
			customerLogin();
			break;

		case 2: //customer Sign Up
			custReg("customerFile.csv");
			return;
			break;


		case 3: //driver login
			driverLogin();
			break;

		case 4: //driver registration
			cout << "Placeholder4\n";
			driverRegistration("driverFile.csv");
			break;

		case 5: //admin login
			adminLogin();
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

void customerLogin() {
	cout << "Please Enter your username\n"; cin >> userUsername; //add tolower()
	cout << "Please Enter your password\n"; cin >> userPassword;

	while (true) { //turn into function later
		// read customer username
		if (userUsername == "tester") { //tester is a placeholder until file reading is completed
			userUsernameValid = true;
			break;

			if (userPassword == "password") { //password is a placeholder until file reading is complete
				userPasswordValid = true;
				break;
				//takes user to relevent page
			}
			else {
				cout << "invalid password, try again\n";
			}
		}
		else {
			cout << "Invalid username, please try again\n";

		}

	}
}

void driverLogin() {
	while (true)
	{
		cout << "Please Enter your username\n"; cin >> operatorUsername;
		cout << "Please Enter your password\n"; cin >> operatorPassword;
		// read customer username
		if (operatorUsername == "tester" && operatorPassword == "password") { //tester is a placeholder until file reading is completed
			opUsernameValid = true;
			opPasswordValid = true;
			break;
		}
		else {
			cout << "Invalid username pr password, please try again\n";
		}
	}
	//LogInFunction here();
}

void adminLogin() {
	cout << "Please Enter your username\n"; cin >> adminUsername;
	cout << "Please Enter your password\n"; cin >> adminPassword;
	while (true) { //turn into function later
// read customer username
		if (adminUsername == "admin" || "Admin") {
			adminUsernameValid = true;


			if (adminPassword == "password") { //password is a placeholder until file reading is complete
				adminPasswordValid = true;

				//takes user to relevent page
			}
			else {
				cout << "invalid password, try again\n";
			}
		}
		else {
			cout << "Invalid username, please try again\n";

		}
	}
}