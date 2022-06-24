#include "Functions.h"

void userAccount(string userName)
{
	// initializing Varables 
	bool runAccount = true;
	int menuOption = 1;
	char input;
	string name;

	if (userName == "guest")
	{
		string name = "Guest";
	}
	else
	{
		string name = userName;
	}

	cout << "\nWelcome " << name << ".\n";
	while (runAccount == true) {
		//Read complaint_problems userProbCount
		cout << "\nInput 1 to Book a Taxi|Input 2 to Review TOS|Input 3 to View Your rights|Input 4 to Make a Review|Input 5 to Report a Problem|Input 6 to Re-read Pricing Calculation|Input 7 to Re-read Available Areas|Input 8 to Access Lost & Found|Input 9 to go Back to menu\n:";
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				//activate trip booking
				Booking(userName);
				break;
			case 2:
				readTXT("TOS");
				break;
			case 3:
				readTXT("user_rights");
				break;
			case 4:
				dWriteTXT("user_feedback");
				break;
			case 5:
				dWriteTXT("complaint_problems");
				break;
			case 6:
				cout << "\nService Fee is $10\n and each km is $5\n";
				break;
			case 7:
				cout << "\nWe only go from Yoobee to:\nVictoria university kelburn campus,\nBasin Reserve,\nAirport,\nIsland bay,\nand Oriental bay Boat Cafe.\n";
				break;
			case 8:
				readTXT("lost_&_found");
				cout << "\nWould you like enter an item to look for?(y/n)";
				cin >> input;
				if (tolower(input) == 'y') {
					cout << "\nPlease include all the detail you can about your lost item and make sure to inlcude your contact details so we may infrom you if we find your lost item\n";
					Sleep(3000);
					dWriteTXT("lost_&_found");
				}

				break;
			case 9:
				runAccount = false;
				break;
			default:
				throw(menuOption);
				break;
			}
		}
		catch (int menuOption)
		{
			cout << "\nInvalid Input.\nPlease input one of the available options\n";
		}
	}
}