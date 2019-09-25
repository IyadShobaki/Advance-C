//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int main() {
//	//char example[6] = { 'w','o','r','l','d','\0' };
//	//cout << example << endl;
//
//	//char example1[] = { 'w','o','r','l','d','\0' };
//	//cout << example1 << endl;
//
//	//char aString[10];
//	////aString = 'wolrd'; //bad 
//	//strcpy_s(aString, "world");
//	//cout << aString << endl;
//	//
//	//char nString[10];
//	//strncpy_s(nString, "world", 9);
//	//cout << nString << endl;
//
//	//if (strcmp(aString, nString)) {
//	//	cout << "Not the same\n";
//	//}
//	//else {
//	//	cout << "The same\n";
//	//}
//	//cout << "Length is : " << strlen(aString) << endl;
//
//	//strcat_s(aString, " hi");
//	//cout << aString << endl;
//
//
//	//char bString[100];
//	//cout << "Enter your full name\n";
//	//cin.getline(bString, 100);
//	//cout << "Your name is: " << bString << endl;
//
///*	char symbol;
//	do {
//		cin.get(symbol);
//		cout << symbol;
//	} while (symbol != '\n');*/
//	/*
//	cout << "Enter a number:\n";
//	int number;
//	char symbol;
//	cin >> number;
//	cout << "Enter a letter:\n";
//	cin.ignore(); // important to be able to enter a letter
//	cin.get(symbol);
//	cout << "Number: " << number << endl;
//	cout << "Letter: " << symbol << endl;
//	*/
//
//	//string yourname;
//	//cout << "Enter your full name:" << endl;
//	////getline(cin, yourname, 'k');
//	//getline(cin, yourname);
//	//cout << "Your full name is: " << yourname << endl;
//
//	//for (int i = yourname.length() - 1; i >= 0; i--) {
//	//	cout << yourname[i];
//	//}
//	//cout << endl;
//
//	string str = "Hello World";
//	cout << str << endl;
//	cout << "Size: " << str.size() << endl;
//	cout << "Length: " << str.length() << endl;
//	cout << "Max Size: " << str.max_size() << endl;
//	cout << "Capacity: " << str.capacity() << endl;
//	str.clear();
//	cout << "Clear: " << str << endl;
//	if (str.empty()) {
//		cout << "String is empty" << endl;
//
//	}
//	else {
//		cout << "String is not empty" << endl;
//	}
//
//	system("pause");
//	return 0;
//}