//#include <iostream>
//#include <fstream>
//#include <string>
//#define FILE_NAME "emp.dat";
//using namespace std;
//
//class Employee {
//private:
//	int empID;
//	char empName[100];
//	char designation[100];
//	int ddj, mmj, yyj;
//	int ddb, mmb, yyb;
//public:
//	void readEmployee() {
//		cout << "Employee Details\n";
//		cout << "Enter Employee ID: "; cin >> empID; cin.ignore(1);
//
//		cout << "Enter Employee Name: "; cin.getline(empName, 100);
//
//		cout << "Enter Designation: "; cin.getline(designation, 100);
//
//		cout << "Enter Date Of Join:\n";
//		cout << "Day: "; cin >> ddj;
//		cout << "Month: "; cin >> mmj;
//		cout << "Year: "; cin >> yyj;
//
//		cout << "Enter Date Of Birth:\n";
//		cout << "Day: "; cin >> ddb;
//		cout << "Month: "; cin >> mmb;
//		cout << "Year: "; cin >> yyb;
//
//	}
//	//function to write employee details
//	void displayEmployee() {
//		cout << "Employee ID: " << empID << endl
//			<< "Employee Name: " << empName << endl
//			<< "Designation: " << designation << endl
//			<< "Date Of Join: " << ddj << "/" << mmj << "/" << yyj << endl
//			<< "Date Of Birth: " << ddb << "/" << mmb << "/" << yyb << endl;
//	}
//};
//int main() {
//
//	Employee emp;
//	emp.readEmployee();
//	fstream file;
//	//open file in out(write) mode
//	file.open("aaa.txt", ios::out | ios::binary);
//	if (!file) {
//		cout << "Error in creating file\n";
//		system("pause");
//		return 0;
//	}
//	cout << "File Created\n";
//	file.write((char*)& emp, sizeof(emp));
//	file.close();
//
//	ifstream inFile;
//	//open file in read mode
//	inFile.open("aaa.txt", ios::in | ios::binary);
//	if (!inFile) {
//		cout << "Error in opening file!!!\n";
//		system("pause");
//		return 0;
//	}
//	if (inFile.read((char*)& emp, sizeof(emp))) {
//		cout << endl << endl;
//		cout << "Data extracted from file..\n";
//		//print the object
//		emp.displayEmployee();
//	}
//	else {
//		cout << "Error in reading data from file...\n";
//		return -1;
//	}
//	inFile.close();
//	system("pause");
//	return 0;
//}