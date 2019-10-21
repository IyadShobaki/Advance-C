/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 7 (Chapter 11 lab) Security assignment 
	10 / 11 / 2019
*/

#include <iostream>
using namespace std;
#include "Security.h"
#include "Administrator.h"
#include "User.h"

int main() {
	/*string uName = "costello";
	string pWord = "tuesday";*/
	do {
		string uName;
		string pWord;
		char ans;

		cout << "Enter username: ";
		cin >> uName;
		cout << "Enter password: ";
		cin >> pWord;

		if (Administrator::Login(uName, pWord)) {
			cout << "Username and password have administrator clearance.\n";
		}
		else {
			cout << "Username and password have not administrator clearance.\n";
		}

		if (User::Login(uName, pWord)) {
			cout << "Username and password have either user administrator clearance.\n";
		}
		else {
			cout << "Username and password have neither user administrator clearance.\n";
		}

		cout << "Would you like to try again? Y or N: ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'N')
			break;

	} while (1);
	
	system("pause");
	return 0;

}


