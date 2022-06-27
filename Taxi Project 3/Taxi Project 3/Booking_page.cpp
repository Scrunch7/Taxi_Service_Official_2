#include "Functions.h"

//calculated ID
int readForID() {
    fstream fileBooking;
    string line;
    int id = 0;


    fileBooking.open("bookings.csv", ios::in);


    if (fileBooking.is_open()) {

        while (getline(fileBooking, line)) {
            id++;
        }
    }
    else {
        cout << "\nNo File Found\n";
    }
    return id + 1;
}
//fuction that might be able to read the booking file
void readBookingFile() {
    //creating our varables
    fstream fileReading;
    vector <vector <string>> content;
    vector <string> row;
    string line, word;

    //assigning the file to read and flag to fileIn
    fileReading.open("booking_file.csv", ios::in);

    //Determine if a file is openm
    if (fileReading.is_open())
    {
        while (getline(fileReading, line))
        {
            row.clear();

            stringstream str(line);

            while (getline(str, word, ','))
                row.push_back(word);
            content.push_back(row);
        }
    }
    else
        cout << "Could not open the file\n";

    for (int i = 0; i < content.size(); i++)
    {
        for (int j = 0; j < content[i].size(); j++)
        {
            cout << content[i][j] << " ";
        }
        cout << "\n";
    }


    return;
}
//sends details to bookings.csv
void bookTaxi(int month, int day, int hour, int minute, string name, string destinationName, double destinationkm, char destinationID, double total) {
    fstream fileBooking;
    int booking_id = readForID();
    fileBooking.open("bookings.csv", ios::out | ios::app);
    if (!fileBooking) {
        cout << "\nWARNING: Cannot open file\n";
        return;
    }



    if (minute < 10) {
        fileBooking << booking_id << ", " << name << ", " << month << ", " << day << ", " << hour << ", 0" << minute << destinationName << ", " << destinationkm << ", " << destinationID << ", " << total << "\n";
    }
    else
    {
        fileBooking << booking_id << ", " << name << ", " << month << ", " << day << ", " << hour << ", " << minute << destinationName << ", " << destinationkm << ", " << destinationID << ", " << total << "\n";
    }

    fileBooking.close();
    cout << "\nYour booking ID is: " << booking_id <<"\nPlease remember it.\n";
}

void Booking(string username)
{
    //initializing variables
    bool run = true;
    //time details
    int month;
    int day;
    int hour;
    int minute;
    //name of the person using the taxi 
    string name;
    //used in user confermation
    char confirm;
    // handles user choice
    char choice;
    //Price calculation
    double gross;
    double total;
    const double tax = 1.15;
    const double serviceFee = 10;
    const double costKM = 5;
    //User details
    int passengerCount;
    string specialNeed;
    //Destination struct
    struct {
        string name;
        double distance;
    } airport, IslandBay, orientalBayBoatCafe, victoriaUni, basinReserve;

    //puts names into structure
    airport.name = "Airport";
    IslandBay.name = "Island bay";
    orientalBayBoatCafe.name = "Oriental Bay Boat Cafe";
    victoriaUni.name = "Victoria University Kelburn Campus";
    basinReserve.name = "Basin Reserve";
    // Puts distance into structure
    airport.distance = 8.5;
    IslandBay.distance = 7;
    orientalBayBoatCafe.distance = 2.3;
    victoriaUni.distance = 1.9;
    basinReserve.distance = 3.1;
    //Destination details
    double destinationkm;
    string destinationName;
    char destinationID;





    //continues running until user wishes to stop their booking attempt (they do not confirm their inputed information and refuse to try booking again) or finish booking
    while (run == true)
    {
        //explains to user how date is formated
        cout << "\n\nAll dates are stored in number date format\nMonth, Days, Hours, and Minutes (eg Mon/d/h/m)";
        Sleep(3000);
        cout << "\nWe only go from Yoobee to:\nVictoria university kelburn campus, (V)\nBasin Reserve, (B)\nAirport, (A)\nIsland bay, (I)\nOriental bay Boat Cafe, (O)\n";
        Sleep(1000);
        cout << "\n\nPlease choose a date for your trip\n";
        Sleep(1000);
        //gets user input and confirms is valid
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
        Sleep(1000);
        //gets user input and confirms is valid
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
        Sleep(1000);
        //gets user input and confirms is valid
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
        //gets user input and confirms is valid
        Sleep(1000);
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
        Sleep(1000);
        //gets the name for the main user of the taxi to allow drivers to know who is in charge of the trip and improve user interaction 
        cout << "\nPlease enter the name of the Main User\n:";
        cin >> name;
        Sleep(1000);
        cout << "\nWe only go from Yoobee to:\nVictoria university kelburn campus, (V)\nBasin Reserve, (B)\nAirport, (A)\nIsland bay, (I)\nOriental bay Boat Cafe, (O)\n";
        cout << "\nPlease also be aware that we are not liable for any consequences caused by incorrect information being submited as per Terms & Services.";
        Sleep(5000);
        //gets user input and confirms is valid
        cout << "\nPlease enter the corresponding letter to submit your destination\n: ";
        while (true) {
            try {
                cin >> choice;
                if (tolower(choice) != 'v' && tolower(choice) != 'b' && tolower(choice) != 'a' && tolower(choice) != 'i' && tolower(choice) != 'o') {
                    throw(choice);
                }
                else {
                    break;
                }
            }
            catch (char choice)
            {
                cout << "\nInvalid input!\nPlease enter one of the valid Options listed below.\nVictoria university kelburn campus, (V)\nBasin Reserve, (B)\nAirport, (A)\nIsland bay, (I)\nOriental bay Boat Cafe, (O)\n: ";
                Sleep(1000);
            }
        }
        switch (tolower(choice))
        {
        case 'v':
            destinationName = victoriaUni.name;
            destinationkm = victoriaUni.distance;
            break;
        case 'b':
            destinationName = basinReserve.name;
            destinationkm = basinReserve.distance;
            break;
        case 'a':
            destinationName = airport.name;
            destinationkm = airport.distance;
            break;
        case 'i':
            destinationName = IslandBay.name;
            destinationkm = IslandBay.distance;
            break;
        case 'o':
            destinationName = orientalBayBoatCafe.name;
            destinationkm = orientalBayBoatCafe.distance;
            break;
        }
        Sleep(1000);
        //
        destinationID = toupper(choice);
        // calculates total and gross
        gross = serviceFee + (destinationkm * costKM);
        total = gross * tax;
        //asks user if all booking information is correct while displaying it and asks them to confirm if it is correct
        while (true) {
            try {
                if (minute < 10) {
                    cout << "\nBooking time: " << month << " Month on the " << day << " Day at " << hour << ":0" << minute;
                    cout << "\nTrip: " << name << " will be traveling from Yoobee University to " << destinationName << " which is " << destinationkm << " km away.";
                    cout << "\nGross cost(total cost without tax): $" << serviceFee << " Service Fee + (" << destinationkm << "km x $" << costKM << ") = $" << gross;
                    cout << ".\nTotal cost(with tax): $" << gross << " + " << tax * 100 - 100 << "% = $" << setprecision(3) << total << ".\n";
                    Sleep(5000);
                    cout << "\nDo wish to book a taxi with the above information " << username << "?\n(y/n): ";
                }
                else {
                    cout << "\nBooking time: " << month << " Month on the " << day << " Day at " << hour << ":" << minute;
                    cout << "\nTrip: " << name << " will be traveling from Yoobee University to " << destinationName << " which is " << destinationkm << " km away.";
                    cout << "\nGross cost(total cost without tax): $" << serviceFee << " Service Fee + (" << destinationkm << "km x $" << costKM << ") = $" << gross;
                    cout << ".\nTotal cost(with tax): $" << gross << " + " << tax * 100 - 100 << "% = $" << setprecision(3) << total << ".\n";
                    Sleep(5000);
                    cout << "\nDo wish to book a taxi with the above information " << username << "?\n(y/n): ";
                }
                cin >> confirm;
                confirm = tolower(confirm);
                //gets user input and confirms is valid
                if (confirm != 'y' && confirm != 'n') {
                    throw(confirm);
                }
                else if (confirm == 'y')
                {
                    run = false;
                    break;
                }
                else
                {
                    // if the user denind that the information was correct, askes if user wishes to retry booking a taxi 
                    while (true)
                    {
                        try {
                            cout << "\nWould you like to Book with diffrent information?\n(y/n): ";
                            cin >> confirm;
                            //gets user input and confirms is valid
                            confirm = tolower(confirm);
                            if (confirm != 'y' && confirm != 'n') {
                                throw(confirm);
                            }
                            else if (confirm == 'n')
                            {
                                run = false;
                                break;
                            }
                            else
                            {

                                break;
                            }
                            break;
                        }
                        catch (char confirm) {
                            cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
                        }
                    }
                    break;
                }
            }
            catch (char confirm) {
                cout << "\nInvalid input!\nPlease only enter 'y' for yes and 'n' for no.\n";
            }
        }



    }
    //User's information actally gets booked and added to the booking file if they confirmed that the infromation they inputed was correct
    if (confirm == 'y') {
        while(true){
            try {

            }
            catch(char choice){

            }
        }
        bookTaxi(month, day, hour, minute, name, destinationName, destinationkm, destinationID, total);
        cout << "\n\nYour taxi has been booked for the " << month << " Month, on the " << day << " Day, at " << hour << ":" << minute << " for " << name << ",\n Thank you for choosing Black and White cab Co";
    }
}