#include "logged_in_fuctions.h"



void readTXT(string fileName) {
	ifstream myFile;
	string myLine;

	myFile.open(fileName + ".txt");

	if (!myFile.is_open()) {
		cout << "\nWARNING: File failed to open\n";
		return;
	}
	cout << "\n" << fileName << " opened:\n\n";

	while (getline(myFile, myLine)) {
		cout << myLine << endl;
	}

	myFile.close();
	if (!myFile.is_open()) {
		cout << "\n" << fileName << " closed.\n\n";
	}
}