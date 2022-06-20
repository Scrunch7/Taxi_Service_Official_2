#include "Functions.h"

void login(char accountType)
{
	// initializing Varables 
	bool runLogged = true;
	string adminPas = "CrazyTaxi";
	string pasInput;
	string userName;
	string driverID;
	//accountID should get the account type from the landing as a Char. 'a' = Admin, 'd' = Driver(operator), 'u' = User.
	cout << "\nInput test type: ";
	cin >> accountType;
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
					admin();
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
		case 'd': {


			//supposed to get total amount of drivers !must be replaced!
			int driverCount = 10;
			// string That Reads A File Or Struct That Holds All Driver Information And Gets The IDList !must be replaced!
			string driverIDlist[10] = { "dr1", "dr2", "dr3", "dr4", "dr5" , "dr6" , "dr7" , "dr8" , "dr9" , "dr10" };
			//place holder for aformentioned File Or Struct but storing passwords!must be replaced!
			string driverpasswordList[10] = { "p1", "p2", "p3", "p4", "p5" , "p6" , "p7" , "p8" , "p9" , "p10" };
			int dCounter = 0;
			try
			{
				cout << "\nPlease enter your Driver ID: ";
				cin >> driverID;
				while (dCounter <= driverCount && search == true)
				{
					if (driverID == driverIDlist[dCounter])
					{
						search = false;
						throw(driverID);
					}
					dCounter++;
				}
				if (dCounter > driverCount)
				{
					cout << "\nNo such ID exists.\n";
				}
				else
				{
					//string userpassword [uCounter];
					string password = driverpasswordList[dCounter];
					cout << "\nPlease Enter your password " << userName << ": ";
					cin >> pasInput;
					for (int i = 0; i < 3; i++)
					{
						if (pasInput == password)
						{
							driver(driverID);
							i = 3;
						}
						else
						{
							cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct password: ";
							cin >> pasInput;
						}
					}
				}
			}
			catch (string userName)
			{
				cout << "\nNo such ID exists.\n";
				runLogged = false;
				break;
			}
			runLogged = false;
			break;
		}
		case 'u': {
			//supposed to get total amount of users!must be replaced!
			int userCount = 10;
			// string That Reads A File Or Struct That Holds All Driver Information And Gets The IDList !must be replaced!
			string userNamesList[10] = { "u1", "u2", "u3", "u4", "u5" , "u6" , "u7" , "u8" , "u9" , "u10" };
			//place holder for aformentioned File Or Struct but storing passwords!must be replaced!
			string userpasswordList[10] = { "p1", "p2", "p3", "p4", "p5" , "p6" , "p7" , "p8" , "p9" , "p10" };
			int uCounter = 0;
			try
			{
				cout << "\nPlease enter you username: ";
				cin >> userName;
				while (uCounter <= userCount && search == true)
				{
					if (userName == userNamesList[uCounter])
					{
						search = false;
					}
					uCounter++;
				}
				if (uCounter > userCount)
				{
					throw(userName);
				}
				else
				{

					//string userpassword [uCounter];
					string password = userpasswordList[uCounter];
					cout << "\nPlease Enter your password " << userName << ": ";
					cin >> pasInput;
					for (int i = 0; i < 3; i++)
					{
						if (pasInput == password)
						{
							user(userName);
							i = 3;
						}
						else
						{
							cout << "\nIncorrect password.\n" << 3 - i << " Tries left \nPlease Enter correct password: ";
							cin >> pasInput;
						}
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