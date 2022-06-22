// Israel_Ethan_Taehg_Taxi_Booking.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include "Functions.h"


int unknownInput; //was landingInput but can't be called landingInput as the name is aready being using in Landing.cpp
struct Driver;
struct Customer;
struct paymentMethod;


int main()
{
	DrawLine(25);
	cout << "\nBlack & White Cab Co." << endl; //business title
	DrawLine(25); cout << endl;
	DrawLine(25); cout << "\n\n";

	cout << "Terms & Conditions:\n";
	DrawLine(25);
	cout << "\nPlease Pay\n\n";
	landing();
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
