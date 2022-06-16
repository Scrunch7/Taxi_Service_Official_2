#include "Functions.h"

#include "Functions.h"

void AdminLogin();

std::string AdminUsername, AdminPassword;
//int Credentials = AdminUsername && AdminPassword;
bool success = false;

void LoggedInAdmin() { //cannot use main

	DrawLine(25);
	std::cout << "\nAdministration Login\n";
	DrawLine(25); std::cout << "\n\n";

	AdminLogin();
}

void AdminLogin() {

	string adminUsername, adminPassword;
	bool tryAgain = true;
	bool adminUsernameValid = false;
	bool adminPasswordValid = false;


	//try {
	DrawLine(15);
	//admin login

	std::cout << "\nUsername: ";
	std::cin >> adminUsername;
	std::cout << std::endl;

	DrawLine(15);

	std::cout << "\nPasswod: ";
	std::cin >> adminPassword;
	std::cout << std::endl;
	while (tryAgain == true) { //turn into function later
	// read customer username
		if (adminUsername == "admin" || "Admin") {
			adminUsernameValid = true;
			tryAgain = false;

			if (adminPassword == "password") { //password is a placeholder until file reading is complete
				adminPasswordValid = true;
				tryAgain = false;
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