#include <iostream>
#include <string>
#include <CMATH>
#include<windows.h>
#include <stdio.h>
#include <vector>
#include <sstream>
#include <fstream>
using namespace std;


int readForID() { //creating our varables
    fstream fileBooking;
    string line;
    int id;

    //assigning the file to read and flag to fileIn
    fileBooking.open("grades.csv", ios::in);

    //Determine if a file is openm
    if (fileBooking.is_open()) {
        //while there is content to copy from fileIn to line, loop
        while (getline(fileBooking, line)) {
            id++;
        }
    }
    else {
        cout << "\nNo File Found\n";
    }
    return id + 1;
}

void bookTaxi(int month, int day, int hour, int minute, string name) {
    fstream fileBooking;
    int ID = readForID();
    fileBooking.open("bookings.csv", ios::out | ios::app);
    if (!fileBooking) {
        cout << "\nWARNING: Cannot open file\n";
        return;
    }

    int ID1;


    if (minute < 10) {
        fileBooking << ", " << name << ", " << month << ", " << day << ", " << hour << ", 0" << minute << "\n";
    }
    else
    {
        fileBooking << ", " << name << ", " << month << ", " << day << ", " << hour << ", " << minute << "\n";
    }

    fileBooking.close();
}

int main()
{
    //initializing variables
    bool run = true;
    int month;
    int day;
    int hour;
    int minute;
    string name;




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
            cout << "\nPlease enter the name of the Main User\n:";
            cin >> name;

            char confirm;
            //condintoal statmente thr reqiures ALOT of information from the booking_file !must be replaced!
            while (true) {
                try {
                    if (minute < 10) {
                        cout << "\nAre you sure you would like to book the " << month << " Month on the" << day << " Day at" << hour << ":0" << minute << " for " << name << "?\n(y/n): ";
                    }
                    else {
                        cout << "\nAre you sure you would like to book the " << month << " Month on the" << day << " Day at" << hour << ":" << minute << " for " << name << "?\n(y/n): ";
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
    bookTaxi(month, day, hour, minute, name);
}
