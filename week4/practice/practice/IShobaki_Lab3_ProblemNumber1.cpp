//#include <iostream>
//#include <cstdlib>
//#include <string>
//using namespace std;
//
//class Month {
//public:
//	Month(char fLetter, char sLetter, char tLetter);
//
//	Month(int monthValue);
//
//	Month();
//
//	void inputAsInteger();
//	void inputThreeLetters();
//
//	void outputInteger();
//	void outputThreeLetters();
//
//	Month nextMonth() {
//		if (month == 12) {
//			month = 1;
//		}
//		else {
//			month += 1;
//		}
//		return month;
//
//	}
//
//private:
//	int month;
//};
//
//int main() {
//
//	Month month1('a','p','r'), month2(5), month3, monthUserInput, monthUserInput1;
//	cout << "Initialized months:\n";
//	month1.outputInteger(); cout << endl;
//	month1.outputThreeLetters();
//	cout << "Next month:\n";
//	month1.nextMonth();
//	month1.outputInteger(); cout << endl;
//	month1.outputThreeLetters(); cout << endl;
//	
//	cout << "*************************************\n";
//
//	month2.outputInteger(); cout << endl;
//	month2.outputThreeLetters();
//	cout << "Next month:\n";
//	month2.nextMonth();
//	month2.outputInteger(); cout << endl;
//	month2.outputThreeLetters(); cout << endl;
//
//	cout << "*************************************\n";
//
//	month3.outputInteger(); cout << endl;
//	month3.outputThreeLetters();
//	cout << "Next month:\n";
//	month3.nextMonth();
//	month3.outputInteger(); cout << endl;
//	month3.outputThreeLetters(); cout << endl;
//
//	cout << "*************************************\n";
//
//	cout << "Input the month:\n";
//	monthUserInput.inputAsInteger(); 
//	monthUserInput.outputInteger(); cout << endl;
//	monthUserInput.outputThreeLetters();
//	cout << "Next month:\n";
//	monthUserInput.nextMonth();
//	monthUserInput.outputInteger(); cout << endl;
//	monthUserInput.outputThreeLetters(); cout << endl;
//
//	cout << "*************************************\n";
//
//	monthUserInput1.inputThreeLetters();
//	monthUserInput1.outputInteger(); cout << endl;
//	monthUserInput1.outputThreeLetters(); 
//	cout << "Next month:\n";
//	monthUserInput1.nextMonth();
//	monthUserInput1.outputInteger(); cout << endl;
//	monthUserInput1.outputThreeLetters(); cout << endl;
//	
//	system("pause");
//	return 0;
//
//}
//Month::Month(char fLetter, char sLetter, char tLetter)
//{
//	char letters[3] = { fLetter, sLetter, tLetter };
//	string monthString;
//	for (int i = 0; i < 3; i++) {
//		monthString += letters[i];
//	}
//
//	string monthArray[12] = { "jan", "feb", "mar", "apr", "may", "jun",
//		"jul", "aug", "sep", "oct", "nov", "dec" };
//
//	for (int i = 0; i < 12; i++) {
//	
//		if (monthString == monthArray[i]) {
//			month = i + 1;
//			break;
//		}
//		
//	}
//	
//
//}
//Month::Month(int monthValue)
//	: month(monthValue)
//{
//	if ((month < 1) || (month > 12)) {
//		cout << "Illegal month value!\n";
//		exit(1);
//	}
//}
//Month::Month()
//	: month(1)
//{
//
//}
//
//void Month::inputAsInteger() {
//	cout << "Enter a month as integer: ";
//	cin >> month;
//	if ((month < 1) || (month > 12)){
//		cout << "Illegal Month! Program aborted.\n";
//		exit(1);
//	}
//}
//void Month::inputThreeLetters() {
//	char a, b, c;
//	cout << "Enter a month first three letters: ";
//	cin >> a >> b >> c;
//	char letters[3] = { a, b, c };
//	string monthString;
//	for (int i = 0; i < 3; i++) {
//		monthString += letters[i];
//	}
//
//	string monthArray[12] = { "jan", "feb", "mar", "apr", "may", "jun",
//		"jul", "aug", "sep", "oct", "nov", "dec" };
//
//	for (int i = 0; i < 12; i++) {
//
//		if (monthString == monthArray[i]) {
//			month = i + 1;
//			break;
//		}
//		if (monthString != monthArray[i]) {
//			if (i == 11) {
//				cout << "Illegal Month! Program aborted.\n";
//				exit(1);
//			}
//			continue;
//			
//			
//		}
//			
//	}
//
//}
//void Month::outputInteger() {
//	cout << "Month as integer is: " << month;
//}
//void Month::outputThreeLetters() {
//	switch (month)
//	{
//	case 1:
//		cout << "Month as three letters is: Jan\n"; break;
//	case 2:
//		cout << "Month as three letters is: Feb\n"; break;
//	case 3:
//		cout << "Month as three letters is: Mar\n"; break;
//	case 4:
//		cout << "Month as three letters is: Apr\n"; break;
//	case 5:
//		cout << "Month as three letters is: May\n"; break;
//	case 6:
//		cout << "Month as three letters is: Jun\n"; break;
//	case 7:
//		cout << "Month as three letters is: Jul\n"; break;
//	case 8:
//		cout << "Month as three letters is: Aug\n"; break;
//	case 9:
//		cout << "Month as three letters is: Sep\n"; break;
//	case 10:
//		cout << "Month as three letters is: Oct\n"; break;
//	case 11:
//		cout << "Month as three letters is: Nov\n"; break;
//	case 12:
//		cout << "Month as three letters is: Dec\n"; break;
//	default:
//		cout << "Error. Contact software vendor.";
//	}
//}
