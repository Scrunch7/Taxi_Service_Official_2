#include "Functions.h"

void readCSV(string fileName) {
	ifstream myFileCSV;
	string myLineCSV;

	myFileCSV.open(fileName + ".csv");

	if (!myFileCSV.is_open()) {
		cout << "\nWARNING: File failed to open\n";
		return;
	}

	while (getline(myFileCSV, myLineCSV)) {
		cout << myLineCSV << endl;
	}

	myFileCSV.close();

}