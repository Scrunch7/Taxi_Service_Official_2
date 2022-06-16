#include "Functions.h"

void tripBooking() //cannot use main
{
	//initializing variables
	bool run = true;
	int month;
	int day;
	int hour;
	int minute;

	while (run == true)
	{
		cout << "\nHere are all avaliable dates:\n\n";
		//read Read Trip_booking !must be replaced!
		cout << "\n\nAll dates are stored in number date format\nMonth, Days, Hours, and Minutes (eg Mon/d/h/m)";
		cout << "\n\nPlease choose an available date\n";
		while (true)
		{

			while (true) {
				try {
					cout << "\nMonth: ";
					cin >> month;
					if (month >= 1 && month <= 12)
					{
						break;
					}
					else
					{
						throw(month);
					}
				}
				catch (int month) {
					cout << "\nInvalid input!\n" << month << " is not a valid month.\nPlease enter a valid month\n";
				}
			}
			while (true) {
				try {
					cout << "\nDay: ";
					cin >> day;
					if (day >= 1 && day <= 31)
					{
						break;
					}
					else
					{
						throw(day);
					}
				}
				catch (int day) {
					cout << "\nInvalid input!\n" << day << " is not a valid day.\nPlease enter a valid month.\n";
				}
			}
			while (true) {
				try {
					cout << "\nHour (24 style, 1-12 is AM 13-24 is PM): ";
					cin >> hour;
					if (hour >= 1 && hour <= 24)
					{
						break;
					}
					else
					{
						throw(hour);
					}
				}
				catch (int hour) {
					cout << "\nInvalid input!\n" << hour << " is not a valid time.\nPlease enter a valid hour.\n";
				}
			}
			while (true) {
				try {
					cout << "\nMinute: ";
					cin >> minute;
					if (minute >= 0 && minute <= 60)
					{
						break;
					}
					else
					{
						throw(minute);
					}
				}
				catch (int minute) {
					cout << "\nInvalid input!\n" << minute << " is not a valid time.\nPlease enter a valid minute.\n";
				}
			}
			char confirm;
			//condintoal statmente thr reqiures ALOT of information from the booking_file !must be replaced!
			while (true) {
				try {
					if (minute < 10) {
						cout << "\nAre you sure you would like to book the " << month << " Month on the" << day << " Day at" << hour << ":0" << minute << "?\n(y/n): ";
					}
					else {
						cout << "\nAre you sure you would like to book the " << month << " Month on the" << day << " Day at" << hour << ":" << minute << "?\n(y/n): ";
					}
					cin >> confirm;
					confirm = tolower(confirm);
					if (confirm != 'y' && confirm != 'n') {
						throw(confirm);
					}
					else if (confirm == 'y')
					{
						run = true;
						break;
					}
					else
					{
						break;
					}
				}
				catch (char confirm) {
					cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
				}
			}
		}


	}
	// this is where all the information should be transfered to the booking_file !must be replaced!
	int booking_file_ID = rand() % 10 + 1; //!must be replaced!
	int booking_file_month = month; //!must be replaced!
	int booking_file_day = day; //!must be replaced!
	int booking_file_hour = hour; //!must be replaced!
	int booking_file_minute = minute; //!must be replaced!
}