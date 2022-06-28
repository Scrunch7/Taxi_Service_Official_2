#include "Functions.h"

void login(char accountType)
{
	// initializing Varables 
	bool runLogged = true;
	string adminPas = "CrazyTaxi";
	string pasInput;
	string userName;
	string driverID;
	//accountType should get the account type from the landing as a Char. 'a' = Admin, 'd' = Driver(operator), 'u' = User.
	while (runLogged == true)
	{
		bool search = true;
		try
		{
			if (accountType != 'a' && accountType != 'd' && accountType != 'u')
			{
				throw(accountType);
			}
		}
		catch (char accountType)
		{
			cout << "\nERROR: accountType Invalid";
		}
		switch (accountType) {
		case 'a':
			cout << "\nPlease Enter Admin password: ";
			cin >> pasInput;
			for (int i = 0; i < 3; i++)
			{
				if (pasInput == adminPas)
				{
					adminAccount();
					i = 3;
				}
				else
				{
					cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct Admin password: ";
					cin >> pasInput;
				}
			}
			runLogged = false;
			break;

			//driver
		case 'd': {
			int dCounter = 0;
			bool result;

			try {
				while (ucounter < 3)
			}

		}

		//customer
		case 'u': {

			int uCounter = 0;

			bool result;

			try
			{

				//while loop checking username input
				while (uCounter < 3) {
					cout << "\nPlease enter you username: ";
					cin >> userName;

					result = checkUsername(userName);

					if (!result) {
						cout << "user not found";
					}
					if (result) break;

					uCounter++;

					if (uCounter >= 3) {
						uCounter = 0;
						landing();
					}
				}

				//checking password input
				uCounter = 0;
				while (uCounter < 3) {
					cout << "\nPlease Enter your password " << userName << ": ";
					cin >> pasInput;

					result = checkPassword(pasInput);

					if (!result) {
						cout << "password not found";
					}
					if (result) break;

					uCounter++;

					if (uCounter >= 3) {
						uCounter = 0;
						landing();
					}
				}
			}
			catch (string userName)
			{
				cout << "\nThe username '" << userName << "' doesn't exist.\n";
				runLogged = false;
				break;
			}
			//
			for (int i = 0; i < 3; i++)
			{

			}
			runLogged = false;
			break;
		}
		default:
			runLogged = false;
			break;
		}
	}
	//For observation perpouses, remove  once code is ready
	while (true)
	{
		cout << "\nwait\n";
		int wait;
		cin >> wait;
	}
}

//functions
bool checkUsername(string input)
{
	bool result;
	string type = "username";
	result = checkinput(type, input);
	return result;
}

bool checkPassword(string input)
{
	bool result;
	string type = "password";
	result = checkinput(type, input);
	return result;
}

bool checkinput(string type, string input) {

	string firstName;
	string lastName;
	string contactNum;
	string address;
	string email;
	string username;
	string password;
	bool userFound = false;



	std::fstream file("customerFile.csv", ios::in);

	if (file.is_open()) {

		while (file.good() && !userFound) {
			getline(file, firstName, ',');
			getline(file, lastName, ',');
			getline(file, contactNum, ',');
			getline(file, address, ',');
			getline(file, email, ',');
			getline(file, username, ',');
			getline(file, password, '\n');
			if (type == "username") {
				if (input == username) {
					userFound = true;

				}
			}
			if (type == "password") {
				if (input == password) {
					userFound = true;

				}
			}

		}
	}
	else {
		cout << "failed to open file\n";
	}

	return userFound;
}