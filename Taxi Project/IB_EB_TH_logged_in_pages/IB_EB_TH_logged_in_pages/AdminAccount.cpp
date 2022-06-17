#include "logged_in_fuctions.h"


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
				//Function for reading and editing customer_account !must be replaced! (t.b.w.n)

				break;
			case 2:
				//Function for reading and editing driver_account !must be replaced! (t.b.w.n)
				break;
			case 3:
				readTXT("complaint_problems");
				break;
			case 4:
				readTXT("user_feedback");
				break;
			case 5:
				//Read weeky_report !must be replaced! (t.b.w.n)
				break;
			case 6:
				//Get current date !must be replaced! (t.b.w.n)
				//Read weeky_report day[current date] !must be replaced! (t.b.w.n)
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
							readCSV("cancellation_report");
							break;
						case 2:
							readCSV("registration_report");
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
				//(I don’t think we have to do anything for this but we still need to have the placeholder)
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