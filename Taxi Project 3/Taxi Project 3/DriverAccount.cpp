#include "Functions.h"

#include <vector>
#include <sstream>

#include <typeinfo>

using std::vector;

vector<vector<string>> driverAvailability(vector<vector<string>> content, string id)
{
	for (int i = 0; i < content.size(); i++) {
		for (int j = 0; j < content[i].size(); j++) {
			cout << "\n\n\n" << typeid(id).name() << "\n" << typeid(content[i][2]).name() << "\n\n\n";
			if (content[i][2] == id) {
				cout << "hit";
				for (int k = 0; k < content[i].size(); k++) {
					int newVal;
					cin >> newVal;
					content[i][k] = newVal;
				}
			}
		}
	}
	return content;
}//vector

void changeDriverstatus(string fileName, string id);

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
		cout << "\n1 Write Daily and Weekly Report|2 Read All Trips|3 read spesific trip|4 take a taxi Job|5 Driver payment details|6 Back to menu\nMake sure you have or will write your daily report as per Company Procedure\n:";
		cin >> menuOption;
		try
		{
			switch (menuOption)
			{
			case 1:
				cout <<"\nRemember: \n1.To include the date as you were trained to.\n2.that the enter button submits the report in it's current state.\n3.To include your Driver ID as you were trained to.\n\nDaily report: ";
				dWriteTXT("daily_report");
				cout << "\n\nWeekly report: ";
				dWriteTXT("weekly_report");
				break;
			case 2:
				readCSV("bookings");
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
				targetedReadCSV("bookings", target);
				break;
			case 4:
				
				break;
			case 5:
				//Driver payment details !must be replaced!
				readTXT("payment_details");
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

void changeDriverstatus(string fileName, string id) {
}




