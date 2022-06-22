#include <iostream>
#include <string>
#include <CMATH>
#include<windows.h>
#include <stdio.h>
using namespace std;

void ageCheck() {
	try {
		int age;
		std::cout << "Please enter your age: ";
		std::cin >> age;

		if (age >= 18) {
			std::cout << "\nSuccess";
		}
		else {
			std::cout << "\nFail";
			throw(age);

		}
	}
	catch (int age) {
		std::cout << "Age does not meet requirements.\nMust be 18 or over.\nYour age: " << age;
	}

}



int main()
{
	ageCheck();
	int menuOption;
	//DrawLine()
	cout << "1 for Admin login|2 for Operator login|3 for User login|4 to go back to menu\n";
	//DrawLine()

	while (true) {
		try
		{
			int menuOption;
			cin >> menuOption;
			if (menuOption >= 1 && menuOption <= 4)
			{
				cout << "\nCheck1\n";
				break;
			}
			else {
				throw(menuOption);
				break;
			}
		}
		catch (...)
		{
			cout << "\nInvaild input!\nYou must a valid number corosponding to the avalable options\n";
			cin >> menuOption;
		}
	}
	cout << "\nCheck2\n";


}