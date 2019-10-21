//#include <iostream>
//#include <fstream>
//using namespace std;
//
//
//int main() {
//
//	//fstream file;
//	////open file sample.txt in out(write) mode
//	//file.open("D:/C++Adv/week8/hello/sample.txt", ios::out);
//	//if (!file) {
//	//	cout << "Error in creating file\n";
//	//	system("pause");
//	//	return 0;
//	//}
//	//cout << "File Created\n";
//	//file.close();
//
//	ofstream outFile("D:/C++Adv/week8/hello/sample.txt", ios::out);
//	//outFile << 100 << endl;
//	//outFile << 90 << endl;
//	//outFile << 80 << endl;
//	//outFile << 70 << endl;
//	//outFile << 60 << endl;
//	//outFile << 50 << endl;
//	//outFile.close();
//
//	int grade;
//	for (int i = 1; i < 6; i++) {
//		cout << "Enter a grade: ";
//		cin >> grade;
//		outFile << grade << endl;
//	}
//	outFile.clear();
//	cout << "All finished.\n";
//	system("pause");
//	system("CLS");
//	system("dir D:\\C++Adv\\week8\\hello");
//	system("pause");
//	return 0;
//}