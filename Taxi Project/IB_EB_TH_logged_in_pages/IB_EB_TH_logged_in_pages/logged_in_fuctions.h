#pragma once
#include<fstream>
#include<iostream>
#include <string>
#include <vector>
#include <stdio.h>
#include <sstream>
#include<windows.h>
#include <time.h> 

using std::cin;
using std::cout;
using std::string;
using std::ios;
using std::fstream;
using std::endl;
using std::getline;
using std::ifstream;
using std::ofstream;
using std::vector;
using std::stringstream;

string CSVOpenClose();

string TXTOpenClose();

//read and writing file fuctions
void directWriteTXT(string fileName);
void readTXT(string fileName);
void directWriteCSV(string fileName);
void readCSV(string fileName);
//Accounts
void admin();
void driver(string driverID);
void user(string userName);