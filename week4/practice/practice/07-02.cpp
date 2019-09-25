//#include <iostream>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//
//class BankAccount {
//public:
//	BankAccount(double balance, double rate);
//
//	BankAccount(int dollars, int cents, double rate);
//
//	BankAccount(int dollars, double rate);
//
//	BankAccount();
//
//	void update();
//
//	void input();
//	void output();
//	double getBalance();
//	int getDollars();
//	int getCents();
//	double getRate();
//
//	void setBalance(double balance);
//	void setBalance(int dollars, int cents);
//
//	void setRate(double newRate);
//
//private:
//	int accountDollars;
//	int accountCents;
//	double rate;
//
//	int dollarsPart(double amount);
//	int centsPart(double amount);
//	int round(double number);
//
//	double fraction(double percent);
//};
//
//int main() {
//
//}
//BankAccount::BankAccount(double balance, double rate)
//	:accountDollars(dollarsPart(balance)), accountCents(centsPart(balance)) {
//	setRate(rate);
//}
//BankAccount::BankAccount(int dollars,int cents, double rate) {
//	setBalance(dollars, cents);
//	setRate(rate);
//}
//BankAccount::BankAccount(int dollars, double rate) 
//:{
//	setBalance(dollars, cents);
//	setRate(rate);
//}