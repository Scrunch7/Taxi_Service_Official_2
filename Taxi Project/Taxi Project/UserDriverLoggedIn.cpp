#include "Functions.h"

#include <iostream>
#include <string>
#include <CMATH>
#include <time.h> 
#include <windows.h>
#include <stdio.h>
using namespace std;



//accounts
void admin()
{
	// initializing Varables 
	bool runAccount = true;
	bool runAccount2 = true;
	int menuOption = 1;

	//Read weeky_report !must be replaced!
	//Get current date !must be replaced!
	//Read weeky_report day[current date] !must be replaced!

	while (runAccount == true) {
		//Read complaint_problems userProbCount !must be replaced!
		cout << "\n1 View and edit Customer Accounts|2 View and edit Driver Accounts|3 View Compliants and Problems|4 User Feedback|5 Weekly Report|6 Daily Report|7 Cancellation & Registration report|8 System|9 Back to menu\n:";
		cin >> menuOption;
		try {
			switch (menuOption)
			{
			case 1:
				//Function for reading and editing customer_account !must be replaced!
				break;
			case 2:
				//Function for reading and editing driver_account !must be replaced!
				break;
			case 3:
				//Read Write complaint_problems !must be replaced!
				break;
			case 4:
				//Read user_feedback !must be replaced!
				break;
			case 5:
				//Read weeky_report !must be replaced!
				break;
			case 6:
				//Get current date !must be replaced!
				//Read weeky_report day[current date] !must be replaced!
				break;
			case 7:
				runAccount2 = true;
				while (runAccount2 == true)
				{
					try
					{
						cout << "\n1 Cancellation Report|2 Registration Report|3 Back a step\n:";
						cin >> menuOption;
						switch (menuOption)
						{
						case 1:
							//Read cancellation_report !must be replaced!
							break;
						case 2:
							//Read registration_report !must be replaced!
							break;
						case 3:
							runAccount2 = false;
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

				break;
			case 8:
				//(I don�t think we have to do anything for this but we still need to have the placeholder)
				break;
			case 9:
				runAccount = false;
				break;
			default:
				throw(menuOption);
				break;
			}
		}
		catch (int menuOption) {
			cout << "\nInvalid Input.\nPlease input one of the available options\n";
		}
	}
}
void driver(string driverID)
{
	// initializing Varables 
	bool runAccount = true;
	int menuOption = 1;
	bool availableState;

	//should get the driver's name from the driver file or struct using the driverID !must be replaced!
	string driverName = "bob";
	cout << "Welcome Driver, " << driverName;
	//Read file payment_details(get more info from Rob) !must be replaced!
	//Read trip_booking : !must be replaced!
	//Read daily_trip_report(date, number of trips, total earning, and the tax amount) !must be replaced!
	//(calculate tax) tax = total earning - (tax amount). !must be replaced!

	cout << "\nWhat information you would like to review " << driverName << "?\n";
	while (runAccount == true) {
		cout << "\n1 Trip Number|2 Customer Name|3 Contact number|4 Starting place|5 Destination|6 Date and Time|7 Toggle Available state|9 Back to menu\n:";
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				//Read trip_booking tripNumber !must be replaced!
				break;
			case 2:
				//Read trip_booking tripUserName !must be replaced!
				break;
			case 3:
				//Read trip_booking tripContactNumb !must be replaced!
				break;
			case 4:
				//Read trip_booking tripStart !must be replaced!
				break;
			case 5:
				//Read trip_booking tripEnd !must be replaced!
				break;
			case 6:
				//Read trip_booking tripTime[0] tripTime[1] tripTime[2] tripTime[4] !must be replaced!
				//		          (month)      (day)         (hour)     (minute)
				break;
			case 7:
				//Toggle availableState !must be replaced!
				break;
			case 8:
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
void user(string userName)
{
	// initializing Varables 
	bool runAccount = true;
	int menuOption = 1;
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
		cout << "\nInput 1 to Book a Taxi|Input 2 to Review TOS|Input 3 to View Your rights|Input 4 to Make a Review|Input 5 to Report a Problem|Input 6 to Re-read Pricing Calculation|Input 7 to Re-read Available Areas|Input 8 to Access Lost & Found|Input 9 to create a new account|Input 10 to go Back to menu\n:";
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				//Write Trip_booking
				//Read Trip_booking
				//Ask user to confirm
				break;
			case 2:
				//Read terms_of_service
				break;
			case 3:
				//Read user_rights
				break;
			case 4:
				//Write user_feedback
				break;
			case 5:
				//Write complaint_problems 
				break;
			case 6:
				//Read pricing_calculation 
				break;
			case 7:
				//Read available_areas
				break;
			case 8:
				//Write or read lost_&_found
				break;
			case 9:
				//Write customer_account
				break;
			case 10:
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

void login()
{
	// initializing Varables 
	bool runLogged = true;
	string adminPas = "CrazyTaxi";
	string pasInput;
	string userName;
	string driverID;
	//accountID should get the account type from the main menu as a Char. 'a' = Admin, 'd' = Driver(operator), 'u' = User. !must be replaced!
	char accountType = 'x';
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
			int dCounter = 0;
			cout << "\nPlease enter your Driver ID: ";
			cin >> driverID;
			while (dCounter <= driverCount && search == true)
			{
				if (driverID == driverIDlist[dCounter])
				{
					search = false;
				}
				dCounter++;
			}
			if (dCounter > driverCount)
			{
				cout << "\nNo such ID exists.\n";
			}
			else
			{
				driver(driverID);
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
				if (uCounter > userCount)
				{
					throw(userName);
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