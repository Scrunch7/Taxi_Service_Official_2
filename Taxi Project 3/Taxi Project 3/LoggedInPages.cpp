#include "Functions.h"

void login(char accountType)
{
	// initializing Varables 
	int uCounter = 0;
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
							driverAccount(driverID);
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
				//customer login -----------------------------------------------------------------------------------------------------
		case 'u': {
			bool result;

			try
			{

				//while loop checking username input
				while (uCounter < 3) {
					cout << "\nPlease enter you username: ";
					cin >> userName;

					result = checkUsername(userName);

					if (!result) {
						cout << "user not found\n";
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
						cout << "password not found\n";
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
}
