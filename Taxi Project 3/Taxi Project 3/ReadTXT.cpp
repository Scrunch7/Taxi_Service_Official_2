#include "Functions.h"

void readTXT(string fileName) {
	ifstream myFileTXT;
	string myLineTXT;

	myFileTXT.open(fileName + ".txt");

	if (!myFileTXT.is_open()) {
		cout << "\nWARNING: File failed to open\n";
		return;
	}

	while (getline(myFileTXT, myLineTXT)) {
		cout << myLineTXT << endl;
	}

	myFileTXT.close();

}