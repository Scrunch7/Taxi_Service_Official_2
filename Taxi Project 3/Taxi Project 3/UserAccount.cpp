#include "Functions.h"

<<<<<<< HEAD:Taxi Project/Taxi Project/UserAccount.cpp
#include <time.h> 
void user(string userName)
=======
void userAccount(string userName)
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/UserAccount.cpp
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
<<<<<<< HEAD:Taxi Project/Taxi Project/UserAccount.cpp
		cout << "\nInput 1 to Book a Taxi|Input 2 to Review TOS|Input 3 to View Your rights|Input 4 to Make a Review|Input 5 to Report a Problem|Input 6 to Re-read Pricing Calculation|Input 7 to Re-read Available Areas|Input 8 to Access Lost & Found|Input 9 to create a new account|Input 10 to go Back to menu\n:";
=======
		cout << "\nInput 1 to Book a Taxi|Input 2 to Review TOS|Input 3 to View Your rights|Input 4 to Make a Review|Input 5 to Report a Problem|Input 6 to Re-read Pricing Calculation|Input 7 to Re-read Available Areas|Input 8 to Access Lost & Found|Input 9 to go Back to menu\n:";
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/UserAccount.cpp
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				//activate trip booking
<<<<<<< HEAD:Taxi Project/Taxi Project/UserAccount.cpp
				break;
			case 2:
				//change to cout
				readTXT("TOS");
				break;
			case 3:
				//change to cout
				readTXT("user_rights");
				break;
			case 4:
				directWriteTXT("user_feedback");
				break;
			case 5:
				directWriteTXT("complaint_problems");
=======
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
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/UserAccount.cpp
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
<<<<<<< HEAD:Taxi Project/Taxi Project/UserAccount.cpp
					directWriteTXT("lost_&_found");
				}

				break;
			case 9:
				//Write user resgstration
				break;
			case 10:
=======
					dWriteTXT("lost_&_found");
				}
				break;
			case 9:
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/UserAccount.cpp
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