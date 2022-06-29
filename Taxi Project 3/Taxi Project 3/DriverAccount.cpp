#include "Functions.h"

#include <vector>
#include <sstream>

#include <typeinfo>

using std::vector;


string firstName, lastName, gender, DoB, DoB_Day, DoB_Month, DoB_Year, nationality, licenceNumber, expiryDate, yearsDriving, contactNumber, email;
string address, bankAccountNumber, bankName, vehicleRegoNum, vehicleMake, vehicleModel, wofExpiryDate, endorsmentNumber, endorsmentExpiry, driverUsername, driverPassword, availablity;

string driverUsername1;

int index, new_availablity, count = 0, i;
string line, word;
vector<string> row;

int inputOptions;

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
				cout << "\nBooking ID|Main Passenger Name|Month|Day|Hour|Minute|Destination Name|Distance km|Destination ID|Total Payment|Passenger Count|Special Needs|Luggage|Payment Status\n";
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
				cout << "\nBooking ID|Main Passenger Name|Month|Day|Hour|Minute|Destination Name|Distance km|Destination ID|Total Payment|Passenger Count|Special Needs|Luggage|Payment Status\n";
				targetedReadCSV("bookings", target);
				break;
			case 4:
				changeDriverstatus("driverFile.csv", driverUsername);
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

		// File pointer
		fstream fileIn, fileOut;

		// Open an existing record
		fileIn.open("driverFile.csv", ios::in);

		// Create a new file to store updated data
		fileOut.open("driverFileNew.csv", ios::out);

		


		Driver test;
		// Get the roll number from the user
		cout << "you are currently " << test.availablity;
		cout << "Enter your username in order to change availablity: ";
		cin >> driverUsername;

		// Get the data to be updated
		cout << "Change driver status to: \n1. Available\n2. Unavailable\n";
		cin >> inputOptions;

		// Determine the index
			index = 14;
		

		// Get the new marks
		//cout << "Enter new availablity: ";
		//cin >> new_availablity;

		switch (inputOptions) {

		case 1:
			availablity = "available";
			break;
		case 2:
			availablity = "unavailable";
			break;

		default:
			break;
		}

		// Traverse the file
		while (!fileIn.eof()) {

			row.clear();

			getline(fileIn, line);
			stringstream s(line);

			while (getline(s, word, ',')) {
				row.push_back(word);
			}

			//driverUsername = (row[0]);//*
			int row_size = row.size();

			if (driverUsername1 == driverUsername) {
				count = 1;
				stringstream convert;

				// sending a number as a stream into output string
				convert << availablity;

				// the str() converts number into string
				row[index] = convert.str();

				if (!fileIn.eof()) {
					for (i = 0; i < row_size - 1; i++) {

						// write the updated data
						// into a new file 'reportcardnew.csv'
						// using fout
						fileOut << row[i] << ", ";
					}

					fileOut << row[row_size - 1] << "\n";
				}
			}
			else {
				if (!fileIn.eof()) {
					for (i = 0; i < row_size - 1; i++) {

						// writing other existing records
						// into the new file using fileOut.
						fileOut << row[i] << ", ";
					}

					// the last column data ends with a '\n'
					fileOut << row[row_size - 1] << "\n";
				}
			}
			if (fileIn.eof())
				break;
		}
		if (count == 0)
			cout << "Record not found\n";

		fileIn.close();
		fileOut.close();

		// removing the existing file
		remove("driverFile.csv");

		// renaming the updated file with the existing file name
		rename("driverFileNew.csv", "driverFile.csv");

}




