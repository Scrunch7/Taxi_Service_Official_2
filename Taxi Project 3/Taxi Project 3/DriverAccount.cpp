#include "Functions.h"

void driverAccount(string driverID)
{
	// initializing Varables 
	bool runAccount = true;
	int menuOption = 1;
	bool availableState;
	int target;

	//should get the driver's name from the driver file or struct using the driverID !must be replaced!
	string driverName = "bob";
	cout << "Welcome Driver, " << driverName;
	//Read file payment_details(get more info from Rob) !must be replaced!
	//Read trip_booking : !must be replaced!
	//Read daily_trip_report(date, number of trips, total earning, and the tax amount) !must be replaced!
	//(calculate tax) tax = total earning - (tax amount). !must be replaced!

	cout << "\nWhat information you would like to review " << driverName << "?\n";
	while (runAccount == true) {
		cout << "\n1 Write Daly Report|2 Read All Trips|3 read spesific trip|4 take a taxi Job|5 Driver payment details|6 Back to menu\nMake sure you have or will write your daily report as per Company Procedure\n:";
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				cout <<"\nRemember: \n1.To include the date as you were trained to.\n2.that the enter button submits the report in it's current state.\n3.To include your Driver ID as you were trained to.\n";
				dWriteTXT("weekly_report");
				// add fuction the writes to daily report herw !must be replaced!

				break;
			case 2:
				readCSV("bookings.csv");
				break;
			case 3:
				cout << "\nWhich trip would you like to look at?\n:";
				while (true) 
				{
					try 
					{
						cin >> target;
						if (target > 1) {
							break;
						}
						else 
						{
							throw(target);
						}
					}
					catch (int target) 
					{
						cout << "\nPlease input a valid number\n:";
					}
				}
				targetedReadCSV("bookings.csv", target);
				break;
			case 4:
				//take a taxi Job
				break;
			case 5:
				//Driver payment details !must be replaced!
				break;
			case 6:
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

void driverPaymentDetails() {
	//read csv
	//find driver payment details (driver bankAccount, driver bankName)
	//output to console
}