#include "Functions.h"

void custReg(string customerFile)
{
	DrawLine(15);
	cout << "\nWelcome Customer\n";
	DrawLine(15); cout << "\n";
	openClose(customerFile);
	landing();
}

void openClose(string customerFile) {
	//Creates a new variable file of type output file system (ofstream)
	fstream myFile;

	//Sets file to a file of user defined name
	//If no such file exists, a new one will be created
	myFile.open("customerFile.csv", ios::app);//write

	//Determine if file has opened successfully
	/*if (!myFile.is_open()) {
		std::cout << "\nWARNING: Cannot open file specified\n";
	}*/
	std::cout << "\nFile created and opened successfully\n\n";

	Customer test;
	cout << "Enter your full name: ";
	cin.ignore(); getline(cin, test.fullName);
	cout << "Enter your Contact Number: ";
	cin >> test.contactNumber;
	cout << "Enter your Email: ";
	cin >> test.email;
	cout << "Enter your Street Address: ";
	cin >> test.streetAddress;


	myFile << test.fullName << ","
		<< test.contactNumber << ","
		<< test.email << ","
		<< test.streetAddress << std::endl;

	//Close the file assigned to myFile
	myFile.close();

}