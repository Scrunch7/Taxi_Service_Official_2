#include "logged_in_fuctions.h"

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
				//Read trip_booking tripNumber !must be replaced! (t.b.w.n)
				break;
			case 2:
				//Read trip_booking tripUserName !must be replaced! (t.b.w.n)
				break;
			case 3:
				//Read trip_booking tripContactNumb !must be replaced! (t.b.w.n)
				break;
			case 4:
				//Read trip_booking tripStart !must be replaced! (t.b.w.n)
				break;
			case 5:
				//Read trip_booking tripEnd !must be replaced! (t.b.w.n)
				break;
			case 6:
				//Read trip_booking tripTime[0] tripTime[1] tripTime[2] tripTime[4] !must be replaced! (t.b.w.n)
				//		          (month)      (day)         (hour)     (minute)
				break;
			case 7:
				//Toggle availableState !must be replaced! needs strut for boolen
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