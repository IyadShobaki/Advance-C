//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//
//	fstream file;
//	file.open("aaa.txt", ios::out);
//	if (!file) {
//		cout << "Error in creating file\n";
//		system("pause");
//		return 0;
//	}
//	cout << "File Created\n";
//	file << "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
//	cout << "Current Position is: " << file.tellp() << endl;
//	file.close();
//
//	ifstream inFile;
//	inFile.open("aaa.txt", ios::in);
//	if (!inFile) {
//		cout << "Error in opening file!!!\n";
//		system("pause");
//		return 0;
//	}
//	cout << "After opening file position is: " << inFile.tellg() << endl;
//	char ch;
//	while (!inFile.eof()) {
//		cout << "At position:" << inFile.tellg();
//		inFile >> ch;
//		cout << "Character \"" << ch << "\"" << endl;
//	}
//	inFile.close();
//
//	system("pause");
//	return 0;
//}