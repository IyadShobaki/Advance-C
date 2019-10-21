//#include <iostream>
//#include <fstream>
//using namespace std;
//
//int main() {
//	char name[30];
//	int age;
//	fstream file;
//	file.open("aaa.txt", ios::out);
//	if (!file) {
//		cout << "Error in creating file\n";
//		system("pause");
//		return 0;
//	}
//
//	cout << "File Created\n";
//	cout << "Enter your name: ";
//	cin.getline(name, 30);
//	cout << "Enter your age: ";
//	cin >> age;
//	file << name << " " << age << endl;
//	file.close();
//	file.open("aaa.txt", ios::in);
//	if (!file) {
//		cout << "Error in opening file!!!\n";
//		system("pause");
//		return 0;
//	}
//	file >> name;
//	file >> age;
//
//	cout << "Name: " << name << ", Age: " << age << endl;
//	file.close();
//
//	system("pause");
//	return 0;
//}