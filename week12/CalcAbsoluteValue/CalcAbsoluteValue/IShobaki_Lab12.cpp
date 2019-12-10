/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 12 (Chapter 16 lab) Templates
	11 / 13 / 2019
*/
#include <iostream>
using namespace std;

template<class GenericType>
GenericType maxValue(GenericType a, GenericType b) {

	return abs(a - b);
}

int main() {
	char ans;
	int i1, i2;
	double d1, d2;
	float f1, f2;

	do {


		cout << "Please eneter two integer numbers: ";
		cin >> i1 >> i2;
		cout << "Absolute value of the two integers is: " << maxValue(i1, i2) << endl;

		cout << "Please eneter two double numbers: ";
		cin >> d1 >> d2;
		cout << "Absolute value of the two doubles is: " << maxValue(d1, d2) << endl;

		cout << "Please eneter two float numbers: ";
		cin >> f1 >> f2;
		cout << "Absolute value of the two floats is: " << maxValue(f1, f2) << endl;


		cout << "Would you like to repeat? y/n: ";
		cin >> ans;
		ans = tolower(ans);
	} while (ans == 'y');


	system("pause");
	return 0;
}