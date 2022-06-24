#include "Functions.h"

void weeklyReport() {

}

void adminAccount()
{
	// initializing Varables 
	bool runAccount = true;
	bool runAccount2 = true;
	int menuOption = 1;


	while (runAccount == true) {
		//Read complaint_problems userProbCount !must be replaced!
		cout << "\n1 View and edit Customer Accounts|2 View and edit Driver Accounts|3 View Compliants and Problems|4 User Feedback|5 Weekly Report|6 Cancellation & Registration report|7 System|8 Back to menu\n:";
		cin >> menuOption;
		try {
			switch (menuOption)
			{
			case 1:
				//Function for reading
				readCSV("customerFile");
				//Function for editing
				//Function add for editing here !must be replaced!
				break;
			case 2:
				//Function for reading
				readCSV("driverFile");
				//Function for editing
				//Function add for editing here !must be replaced!
				break;
			case 3:
				readTXT("complaint_problems");
				break;
			case 4:
				readTXT("user_feedback");
				break;
			case 5:
				readTXT("weekly_report");
				break;
			case 6:
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
			case 7:
				//(I don’t think we have to do anything for this but we still need to have the placeholder)
				break;
			case 8:
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