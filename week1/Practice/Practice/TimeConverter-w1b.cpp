///*--Iyad Shobaki
//	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
//	Professor  Steve Morosko
//	Week 1 Lab (Chapter 1-5) - PART 2 ( Convert to standard time )
//	8 / 27 / 2019 */
//
//#include <iostream>
//#include <stdio.h>
//using namespace std;
//
//void userInput(int& hour, int& minute);
//void convertHour(int& hour, char& a);
//void displayTime(int hour, int minute);
//void displayTime(int hour, int minute, char a);
//
//int main() {
//	char ans;
//	int hour = 0;
//	int minute = 0;
//	char type;
//
//	// do while loop to repeat the computation 
//	do {
//
//		
//		userInput(hour, minute);
//
//		cout << "*************************************" << endl;
//		cout << "Time in 24-hour notation: ";
//		displayTime(hour, minute);
//		cout << endl;
//
//		convertHour(hour, type);
//
//		
//		cout << "Time in 12-hour notation: ";
//		displayTime(hour, minute, type);
//		cout << endl;
//
//		cout << "*************************************" << endl;
//		hour = 0;
//		minute = 0;
//		cout << "Try again? (y/n)";
//		cin >> ans;
//		cout << endl;
//
//	} while (ans == 'y' || ans == 'Y');
//
//
//	
//
//	system("pause");
//	return 0;
//}
//// Function to ask the user for input
//void userInput(int& hour, int& minute) {
//	
//
//	do {
//		cout << "Please enter the number of hours between [0 - 23]: ";
//		cin >> hour;
//		if (hour < 0 || hour >= 24)
//			continue;
//		else
//			break;
//	} while (true);
//
//	do {
//		cout << "Please enter the number of minutes between [0 - 59]: ";
//		cin >> minute;
//		if (minute < 0 || minute >= 60)
//			continue;
//		else
//			break;
//	} while (true);
//		
//}
////Function to do the conversion
//void convertHour(int& hour, char& type) {
//	if (hour > 12) {
//		hour = hour - 12;
//		type = 'P';
//	}
//	else if (hour == 12) {
//		type = 'P';
//	}
//	else {
//		type = 'A';
//	}
//		
//}
//// Function to display the time in 24-hour form
//void displayTime(int hour, int minute) {
//	printf("%02d:%02d", hour, minute);
//
//}
//// Function to display the result after the conversion
//void displayTime(int hour,int minute, char type) {
//	
//	if (type == 'A')
//		printf("%02d:%02d A.M.", hour, minute);
//	else
//		printf("%02d:%02d P.M.", hour, minute);
//
//}
