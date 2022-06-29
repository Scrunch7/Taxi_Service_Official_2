#include "Functions.h"

void login(char accountType)
{
	// initializing Varables 
	int counter = 0;
	bool runLogged = true;
	string adminPas = "CrazyTaxi";
	string pasInput;
	string userName;
	string driverID;
	bool result;
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
		switch (accountType) 
		{
		case 'a':
			cout << "\nPlease Enter Admin password: ";
			cin >> pasInput;
			for (int i = 0; i < 3; i++)
			{
				if (pasInput == adminPas)
				{
					adminAccount();
					runLogged = false;
					landing();
				}
				else
				{
					cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct Admin password: ";
					cin >> pasInput;
				}
			}
			runLogged = false;
			landing();
		case 'd':
			try
			{

				cout << "\nPlease Enter your Username: ";
				cin >> userName;

				result = driverCheckUsername(userName);

				if (!result) {
					throw(userName);
				}
				else {
					counter = 0;
					while (counter < 3) {
						cout << "\nPlease Enter your Password " << userName << ": ";
						cin >> pasInput;

						result = driverCheckPassword(pasInput);

						if (!result) {
							cout << "\nIncorrect Password\n" << 3 - counter << " Tries left\n:";
							counter++;
						}
						else
						{
							driverAccount(userName);
							runLogged = false;
							landing();
						}

						counter++;

						if (counter >= 3) {
							counter = 0;
							landing();
						}
					}
				}

			}//try
			catch (string userName)
			{
				cout << "\nThe username '" << userName << "' doesn't exist.\n";
				runLogged = false;
				landing();
			}//catch
			runLogged = false;
			landing();
			//customer
		case 'u':
			try
			{


				cout << "\nPlease enter your username: ";
				cin >> userName;

				result = userCheckUsername(userName);

				if (!result) {
					cout << "user not found";
					throw(userName);
				}
				else {
					//checking password input
					while (counter < 3) {
						cout << "\nPlease Enter your password " << userName << ": ";
						cin >> pasInput;

						result = userCheckPassword(pasInput);

						if (!result) {
							cout << "\nIncorrect Password\n" << 3 - counter << " Tries left\n:";
							counter++;
						}
						else
						{
							userAccount(userName);
							runLogged = false;
							landing();
						}

						if (counter >= 3) {
							runLogged = false;
							landing();
						}
					}
				}

			}
			catch (string userName)
			{
				cout << "\nThe username '" << userName << "' doesn't exist.\n";
				runLogged = false;
				landing();
			}
		default:
			runLogged = false;
			landing();
		}

	}
}

bool userCheckUsername(string input)
{
	bool result;
	string type = "username";
	result = userCheckInput(type, input);
	return result;

}

bool userCheckPassword(string input)
{
	bool result;
	string type = "password";
	result = userCheckInput(type, input);
	return result;

}

bool userCheckInput(string type, string input) {
	//correct
	string firstName;
	string lastName;
	string contactNum;
	string address;
	string email;
	string username;
	string password;
	bool userFound = false;



	fstream file("customerFile.csv", ios::in);

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

//Driver Login------------------------------------

bool driverCheckUsername(string input)
{
	bool result;
	string type = "username";
	result = driverCheckInput(type, input);
	return result;

}

bool driverCheckPassword(string input)
{
	bool result;
	string type = "password";
	result = driverCheckInput(type, input);
	return result;

}

bool driverCheckInput(string type, string input) {
	string username;
	string password;
	string firstName;
	string lastName;
	string gender; 
	string DoB; 
	string nationality;
	string licenceNumber;
	string expiryDate; 
	string yearsDriving; 
	string contactNumber;
	string email;
	string address;
	string bankAccountNumber;
	string bankName;
	string vehicleRegoNum;
	string vehicleMake;
	string vehicleModel;
	string wofExpiryDate;
	string endorsmentNumber; 
	string endorsmentExpiry; 
	bool userFound = false;

	std::fstream file("driverFile.csv", ios::in);

	if (file.is_open()) {

		while (file.good() && !userFound) {
			getline(file, username, ',');
			getline(file, password, ',');
			getline(file, firstName, ',');
			getline(file, lastName, ',');
			getline(file, gender, ',');
			getline(file, DoB, ',');
			getline(file, nationality, ',');
			getline(file, licenceNumber, ',');
			getline(file, expiryDate, ',');
			getline(file, yearsDriving, ',');
			getline(file, contactNumber, ',');
			getline(file, email, ',');
			getline(file, address, ',');
			getline(file, bankAccountNumber, ',');
			getline(file, bankName, ',');
			getline(file, vehicleRegoNum, ',');
			getline(file, vehicleMake, ',');
			getline(file, vehicleModel, ',');
			getline(file, wofExpiryDate, ',');
			getline(file, endorsmentNumber, ',');
			getline(file, endorsmentExpiry, '\n');
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

