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
		cout << "\nInput 1 to Book a Taxi|Input 2 to Review TOS|Input 3 to View Your rights|Input 4 to Make a Review|Input 5 to Report a Problem|Input 6 to Re-read Pricing Calculation|Input 7 to Re-read Available Areas|Input 8 to Access Lost & Found|Input 9 to go Back to menu|Input 10 to Cancel a Booking\n:";
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
				readTXT("TermsOfService");
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
			case 10:
				bookingCancel( fileName, target);
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

void bookingCancel(string fileName, int target)
{
	ifstream file;
	file.open("bookings.csv");
	string line;
	int counter = 0;//counter


	while (getline(file, line)) {
		counter++;
		if (counter == target) {
			cout << line << endl;
			break;
		}

	}
}



//void cancelBooking() {
//	fstream fileIn, fileOut;
//
//	// Open the existing file
//	fileIn.open("bookings.csv", ios::in);
//
//	// Create a new file to store the non-deleted data
//	fileOut.open("bookingsNew.csv", ios::out);
//
//	int month, day, hour, minute, i, count = 0;
//	string name, name1, destinationName;
//	double destinationkm;
//	char destinationID;
//	double total;
//	int passengerCount;
//	string specialNeeds;
//	char Luggage;
//	string paymentStatus;
//	int index;
//	string line, word;
//	vector<string> row;
//
//	// Get the roll number
//	// to decide the data to be deleted
//	cout << "Enter the name of the booking to be deleted: ";
//	cin >> name;
//
//	// Check if this record exists
//	// If exists, leave it and
//	// add all other data to the new file
//	while (!fileIn.eof()) {
//
//		row.clear();
//		getline(fileIn, line);
//		stringstream s(line);
//
//		while (getline(s, word, ',')) {
//			row.push_back(word);
//		}
//
//		int row_size = row.size();
//		name1 = stoi(row[0]);
//
//		// writing all records,
//		// except the record to be deleted,
//		// into the new file 'reportcardnew.csv'
//		// using fileOut pointer
//		if (name1 != name) {
//			if (!fileIn.eof()) {
//				for (i = 0; i < row_size - 1; i++) {
//					fileOut << row[i] << ", ";
//				}
//				fileOut << row[row_size - 1] << "\n";
//			}
//		}
//		else {
//			count = 1;
//		}
//		if (fileIn.eof())
//			break;
//	}
//	if (count == 1)
//		cout << "Record deleted\n";
//	else
//		cout << "Record not found\n";
//
//	// Close the pointers
//	fileIn.close();
//	fileOut.close();
//
//	// removing the existing file
//	remove("bookings.csv");
//
//	// renaming the new file with the existing file name
//	rename("bookingsNew.csv", "bookings.csv");
//}