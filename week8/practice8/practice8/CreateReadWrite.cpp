//#include <iostream>
//#include <fstream> 
//
//using namespace std;
//
//int main() {
//
//	// D:/C++Adv/week8/hello/sample.txt
//	fstream file;
//	file.open("D:/C++Adv/week8/hello/sample.txt", ios::out);
//	if (!file) {
//		cout << "Error in creating file\n";
//		system("pause");
//		return 0;
//	}
//	cout << "File Created\n";
//	file << "ABCD";
//	file.close();
//
//	file.open("D:/C++Adv/week8/hello/sample.txt", ios::in);
//	if (!file) {
//		cout << "Error in opening file!!\n";
//		return 0;
//	}
//	char ch; // to read single character
//	cout << "File content: ";
//	while (!file.eof()) {
//		file >> noskipws >> ch; // you can also do without noskipws(no skip whitespace)
//		cout << ch;
//	}
//	cout << endl;
//	file.close();
//	system("pause");
//	return 0;
//}