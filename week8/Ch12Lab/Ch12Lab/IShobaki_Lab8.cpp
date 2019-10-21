/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 8 (Chapter 12 lab)
	10 / 16 / 2019
*/
#include <iostream>
#include <fstream> 

using namespace std;

int main() {

	// C:/testFiles/input-1.txt
	// C:/testFiles/input-2.txt
	// C:/testFiles/output.txt

	int grade;
	ifstream inFile, inFile2;
	ofstream outFile;
	outFile.open("C:/testFiles/output.txt", ios::app);
	inFile.open("C:/testFiles/input-1.txt", ios::in);

	cout << "The following numbers has been added to output.txt:\n";
	while (inFile >> grade) {

		outFile << grade << endl;
		cout << grade << endl;

	}
	inFile2.open("C:/testFiles/input-2.txt", ios::in);
	while (inFile2 >> grade) {

		outFile << grade << endl;
		cout << grade << endl;

	}

	outFile.close();
	inFile2.close();
	inFile.close();
	system("pause");
	return 0;
}