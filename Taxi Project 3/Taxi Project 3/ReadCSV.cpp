#include "Functions.h"

<<<<<<< HEAD:Taxi Project/Taxi Project/ReadCSV.cpp


void readTXT(string fileName) {
	ifstream myFile;
	string myLine;

	myFile.open(fileName + ".csv");

	if (!myFile.is_open()) {
=======
void readCSV(string fileName) {
	ifstream myFileCSV;
	string myLineCSV;

	myFileCSV.open(fileName + ".csv");

	if (!myFileCSV.is_open()) {
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/ReadCSV.cpp
		cout << "\nWARNING: File failed to open\n";
		return;
	}
	cout << "\n" << fileName << " opened:\n\n";

<<<<<<< HEAD:Taxi Project/Taxi Project/ReadCSV.cpp
	while (getline(myFile, myLine)) {
		cout << myLine << endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
=======
	while (getline(myFileCSV, myLineCSV)) {
		cout << myLineCSV << endl;
	}

	myFileCSV.close();
	if (!myFileCSV.is_open()) {
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/ReadCSV.cpp
		cout << "\n" << fileName << " closed.\n\n";
	}
}