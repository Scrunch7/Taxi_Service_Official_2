#include "logged_in_fuctions.h"




void directWrite(string fileName) {
	ofstream myFile;
	string myLine;
	string userText;

	myFile.open(fileName + ".txt", std::ios::app);

	if (!myFile.is_open()) {
		cout << "\nWARNING: File failed to open\n";
		return;
	}
	cout << "\n" << fileName << " opened:\n\n";

	cout << "(Press 'Enter' to submit your text):\n";
	getline(cin, userText);
	myFile << userText << endl << endl;

	myFile.close();
	if (!myFile.is_open()) {
		cout << "\n" << fileName << " closed.\n\n";
	}