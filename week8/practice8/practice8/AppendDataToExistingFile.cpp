//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include <string>
//
//using namespace std;
//
//int main() {
//	int grade;
//	string fileName;
//	char cont = 'y';
//
//	// D:/C++Adv/week8/hello/sample.txt
//
//	cout << "Enter a file name: ";
//	getline(cin, fileName);
//	ofstream outFile(fileName.c_str(), ios::app);
//
//	// the following it doesn't work and if the file not exist will create a new file ---- iyad to find solution
//	if (!outFile) {
//		cout << "Could not open file.\n";
//		system("pause");
//		exit(1);
//	}
//	do {
//		cout << "Enter a grade: ";
//		cin >> grade;
//		outFile << grade << endl;
//		cout << "Enter another grade? (y/n)";
//		cin >> cont;
//	} while (cont == 'y');
//
//	outFile.close();
//	system("pause");
//	return 0;
//}