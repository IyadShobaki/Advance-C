//#include <iostream>
//#include <math.h>
//#include <iomanip>
//#include<limits>
//using namespace std;
//
////int counter();
//
//bool notHasDecimal(double numberOfYears);
//
//void CalculateCompoundInterest(double amount, double interestRate, int numberOfYears, int number){
//	double compoundInterest;
//	
//	compoundInterest = amount* pow(interestRate + 1, 1);
//
//	cout << "The basic amount + compound interest for the "  << number << " Year: $"<< compoundInterest << endl;
//	
//	if (numberOfYears == 1) {
//		return;
//	}
//		
//
//	else {
//		CalculateCompoundInterest(compoundInterest, interestRate, numberOfYears - 1, number + 1);
//	}
//}
//
//bool notHasDecimal(double numberOfYears) {
//
//	int x = numberOfYears;
//	if (x != numberOfYears)
//		return true;
//
//	return false;
//}
////int counter() {
////	static unsigned int call_count = 1;
////	return call_count++;
////}
//
//int main() {
//
//	double amount;
//	double interestRate;
//	double numberOfYears;
//	
//	cout.setf(ios::fixed);
//	cout.setf(ios::showpoint);
//	cout.precision(2);
//
//	//CalculateCompoundInterest(1000, 0.10, 3);
//	do {
//		char ans;
//		cout << "Compund interest calculator\n";
//		/*cout << "Please Enter amount:\n";
//		cin >> amount;*/
//		while (1)
//		{
//			cout << "Enter a amount greater than 0:" << endl;
//			cin >> amount;
//
//			if (cin.fail() || amount <=0)
//			{
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				continue;
//			}
//			if (!cin.fail())
//				break;
//		}
//
//		/*while (amount <= 0) {
//			cout << "Enter amount greater 0:\n";
//			cin >> amount;
//		}*/
//		
//		/*cout << "Enter interest rate per year:\n";
//		cin >> interestRate;*/
//		while (1)
//		{
//			cout << "Enter interest rate per year greater than 0:" << endl;
//			cin >> interestRate;
//			if (cin.fail() || interestRate <= 0)
//			{
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				continue;
//			}
//			if (!cin.fail())
//				break;
//		}
//		/*while (interestRate <= 0) {
//			cout << "Enter interest rate greater 0:\n";
//			cin >> interestRate;
//		}*/
//	/*	cout << "Enter number of years:\n";
//		cin >> numberOfYears;*/
//		while (1)
//		{
//			cout << "Enter number of years whole number and greater than 0:" << endl;
//			cin >> numberOfYears;
//
//			if (cin.fail() || numberOfYears <= 0 || notHasDecimal(numberOfYears))
//			{
//				cin.clear();
//				cin.ignore(numeric_limits<streamsize>::max(), '\n');
//				continue;
//			}
//			if (!cin.fail())
//				break;
//		}
//		/*while (numberOfYears <= 0 || numberOfYears != static_cast<int>(numberOfYears)) {
//			cout << "Enter a whole number greater 0:\n";
//			cin >> numberOfYears;
//		}*/
//
//		CalculateCompoundInterest(amount, interestRate, numberOfYears, 1);
//
//		cout << "Would you like to calculate with different values: y/n: ";
//		cin >> ans;
//		ans = tolower(ans);
//		if (ans == 'n')
//			break;
//		
//
//	} while (true);
//	
//
//	system("pause");
//	return 0;
//}