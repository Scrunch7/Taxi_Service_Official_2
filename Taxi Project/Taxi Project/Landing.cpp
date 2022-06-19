#include "Functions.h"

int permissions;
union User{
	Admin a;
	Driver d;
	Customer c;
	
} user;


void customerLogin();
void logIn();

string userUsername, userPassword, operatorUsername, operatorPassword, adminUsername, adminPassword;
bool userUsernameValid = false, userPasswordValid = false;
bool opUsernameValid = false, opPasswordValid = false;
bool adminUsernameValid = false, adminPasswordValid = false;
bool breakLoop = false;
int landingInput;

//When reading user:
//	Read Permissions
//switch (permissions) {
//case 0:
//	User.c* user = new Customer();
//	user = readUser();
//	break;
//
//case 1:
//	User.d* user = new Driver();
//	user = readDriver();
//	break;
//}


void landing() { //user gives input, validates login and password OR allows user to register which writes relevent info to file for future validatioN


	DrawLine(11); cout << endl;
	cout << "Main Menu *\n";
	DrawLine(11); cout << endl;

	cout << "1. Customer Login\n" << "2. Customer Sign Up\n" << "3. Driver Login\n" << "4. Driver Registration\n" << "5. Admin Options\n" << "6. Exit\n";
	cout << "Choose: "; cin >> landingInput;

	while (!breakLoop) {
		switch (landingInput)
		{
		case 1: //customer Login
		
			customerLogin();
		
			break;

		case 2: //customer Sign Up
			cout << "help\n";
			custReg(customerFile + ".csv"); //where to find
			return;
			break;

		case 3: //driver login
			
			//LogInFunction here();
			break;

		case 4: //driver registration
			cout << "Placeholder4\n";

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
	user.c = Login(user.c);
	cout << "Please Enter your username\n"; cin >> userUsername; //add tolower()
	cout << "Please Enter your password\n"; cin >> userPassword;

	while (true) { //turn into function later
		// read customer username
		if (userUsername == "tester") { //tester is a placeholder until file reading is completed
			userUsernameValid = true;
			break;

			if (userPassword == "password") { //password is a placeholder until file reading is complete
				userPasswordValid = true;
				accountType = 'a';
				break;
				logIn();
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
	user.d = Login(user.d);
	while (true)
	{
		cout << "Please Enter your username\n"; cin >> operatorUsername;
		cout << "Please Enter your password\n"; cin >> operatorPassword;
		// read customer username
		if (operatorUsername == "tester" && operatorPassword == "password") { //tester is a placeholder until file reading is completed
			opUsernameValid = true;
			opPasswordValid = true;
			accountType = 'd';
			break;
		}
		else {
			cout << "Invalid username pr password, please try again\n";
		}
	}
	
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
				accountType = 'a';
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
