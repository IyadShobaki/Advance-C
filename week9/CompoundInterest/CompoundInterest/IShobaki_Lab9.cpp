/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 9 (Chapter 13 lab) Calculate Compound Interest
	10 / 24 / 2019
*/
#include <iostream>
#include <math.h>
#include<limits>
using namespace std;


bool notHasDecimal(double numberOfYears);

void CalculateCompoundInterest(double amount, double interestRate, int numberOfYears, int number){
	double compoundInterest;
	double iRate = interestRate / 100;

	compoundInterest = amount* pow(iRate + 1, 1);

	cout << "The basic amount + compound interest for the "  << number << " Year: $"<< compoundInterest << endl;
	
	if (numberOfYears == 1) {
		return;
	}
		

	else {
		CalculateCompoundInterest(compoundInterest, interestRate, numberOfYears - 1, number + 1);
	}
}

bool notHasDecimal(double numberOfYears) {

	int x = numberOfYears;
	if (x != numberOfYears)
		return true;

	return false;
}


int main() {

	double amount;
	double interestRate;
	double numberOfYears;
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << " ********* Compund interest calculator ***********\n\n";

	do {
		char ans;
		
		while (1)
		{
			cout << "Enter a amount greater than 0:" << endl;
			cin >> amount;

			if (cin.fail() || amount <=0)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (!cin.fail())
				break;
		}

		while (1)
		{
			cout << "Enter interest rate per year whole number greater than 0:" << endl;
			cin >> interestRate;

			if (cin.fail() || interestRate <= 0 || notHasDecimal(interestRate))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (!cin.fail())
				break;
		}

		while (1)
		{
			cout << "Enter number of years whole number and greater than 0:" << endl;
			cin >> numberOfYears;

			if (cin.fail() || numberOfYears <= 0 || notHasDecimal(numberOfYears))
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (!cin.fail())
				break;
		}


		CalculateCompoundInterest(amount, interestRate, numberOfYears, 1);

		cout << "Would you like to calculate with different values: y/n: ";
		cin >> ans;
		ans = tolower(ans);
		if (ans == 'n')
			break;
		

	} while (true);
	

	system("pause");
	return 0;
}