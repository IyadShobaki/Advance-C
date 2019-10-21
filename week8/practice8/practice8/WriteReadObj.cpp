//#include <iostream>
//#include <fstream>
//using namespace std;
//class Studnet {
//private:
//	char name[30];
//	int age;
//public:
//	void getData(void) {
//		cout << "Enter name: "; cin.getline(name, 30);
//		cout << "Enter age: "; cin >> age;
//	}
//	void showData(void) {
//		cout << "Name: " << name << ", Age: " << age << endl;
//	}
//};
//int main() {
//
//	Studnet s;
//	ofstream file;
//	file.open("aaa.txt", ios::out);
//	if (!file) {
//		cout << "Error in creating file\n";
//		system("pause");
//		return 0;
//	}
//	cout << "File Created\n";
//	s.getData();
//	file.write((char*)& s, sizeof(s)); //write into file
//	file.close();
//
//	ifstream inFile;
//	inFile.open("aaa.txt", ios::in);
//	if (!inFile) {
//		cout << "Error in opening file!!!\n";
//		system("pause");
//		return 0;
//	}
//	inFile.read((char*)& s, sizeof(s));
//
//	s.showData();
//	inFile.close();
//
//	system("pause");
//	return 0;
//}