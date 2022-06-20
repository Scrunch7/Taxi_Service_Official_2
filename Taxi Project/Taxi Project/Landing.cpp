#include "Functions.h"

int permissions;
union User{
	Driver d;
	Customer c;
};

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



void landing() { //user gives input, validates login and password OR allows user to register which writes relevent info to file for future validation
	string userUsername, userPassword, operatorUsername, operatorPassword, adminUsername, adminPassword;
	bool userUsernameValid = false, userPasswordValid = false;
	bool opUsernameValid = false, opPasswordValid = false;
	bool adminUsernameValid = false, adminPasswordValid = false;
	bool breakLoop = false;
	int landingInput;

 

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
			break;

		case 2: //customer Sign Up
			custReg(customerFile + ".csv");
			return;
			break;
		

		case 3: //driver login
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
			break;

		case 4: //driver registration
			cout << "Placeholder4\n";
			driver = driverRegistration();
			break;

		case 5: //admin login
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