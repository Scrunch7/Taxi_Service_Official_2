#include "Functions.h"

<<<<<<< HEAD:Taxi Project/Taxi Project/ReadTXT.cpp


void readTXT(string fileName) {
	ifstream myFile;
	string myLine;

	myFile.open(fileName + ".txt");

	if (!myFile.is_open()) {
=======
void readTXT(string fileName) {
	ifstream myFileTXT;
	string myLineTXT;

	myFileTXT.open(fileName + ".txt");

	if (!myFileTXT.is_open()) {
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/ReadTXT.cpp
		cout << "\nWARNING: File failed to open\n";
		return;
	}
	cout << "\n" << fileName << " opened:\n\n";

<<<<<<< HEAD:Taxi Project/Taxi Project/ReadTXT.cpp
	while (getline(myFile, myLine)) {
		cout << myLine << endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
=======
	while (getline(myFileTXT, myLineTXT)) {
		cout << myLineTXT << endl;
	}

	myFileTXT.close();
	if (!myFileTXT.is_open()) {
>>>>>>> prototype:Taxi Project 3/Taxi Project 3/ReadTXT.cpp
		cout << "\n" << fileName << " closed.\n\n";
	}
}