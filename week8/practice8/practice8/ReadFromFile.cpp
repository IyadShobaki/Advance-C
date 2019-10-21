//#include <iostream>
//#include <fstream> //for file handling
//#include <cstdlib> //for error checking
//#include <string> //for getline
//using namespace std;
//
//int main() {
//
//	// D:/C++Adv/week8/hello/sample.txt
//	int grade, total, count;
//	double average;
//	count = 0;
//	total = 0;
//	string fileName;
//	cout << "Enter a file name: ";
//	getline(cin, fileName);
//	ifstream inFile(fileName.c_str(), ios::in);
//if (!inFile) {
//	cout << " File not found!\n";
//	system("pause");
//	exit(1);
//}
//	while (!inFile.eof()) {
//		inFile >> grade;
//		total += grade;
//		++count;
//		cout << grade << endl;
//
//	}
//	average = total / count;
//	cout << "The average grade is: " << average << endl;
//
//	inFile.close();
//	system("pause");
//	return 0;
//}