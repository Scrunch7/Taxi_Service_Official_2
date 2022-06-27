#include "Functions.h"

void targetedReadCSV(string fileName, int target)
{
    ifstream file;
    file.open(fileName + ".txt");
    string line;
    int counter = 0;//counter


    while (getline(file, line)) {
        counter++;
        if (counter == target + 1) {
            cout << line << endl;
            break;
        }

    }
}