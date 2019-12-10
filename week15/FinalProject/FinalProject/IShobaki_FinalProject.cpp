/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Final Project "Student Database"
	12 / 8 / 2019
*/

#include "Student.h"

int main()
{
	char ans;
	int choice;
	string fname;
	string lname;
	int year;
	string answer;
	vector<Student*> vStudent;
	int numberOfStudent = 0;
	int s = 0;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	cout << "\t\t\t\tWelcome to Student Database program!\n";
	cout << endl;
	cout << "Please enter student information:\n";


	while (1) {
		vStudent.push_back(new Student());
		cout << "Enter student first name: ";
		cin >> fname;
		cout << "Enter student last name: ";
		cin >> lname;
		while (1)
		{
			cout << "Enter student garde year:\n1- Freshman\n2- Sophmore\n3- Junior\n4- Senior\n";
			cin >> year;

			if (cin.fail() || year < 1 || year > 4)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (!cin.fail())
				break;
		}


		vStudent[numberOfStudent]->Student::Student(fname, lname, year);
		vStudent[numberOfStudent]->setStudentID(numberOfStudent + 1);
		cout << "*************************" << endl;
		cout << "Student ID: " << vStudent[numberOfStudent]->getStudentID() << endl;
		cout << "*************************" << endl;
		vStudent[numberOfStudent]->courseEnrollment();
		cout << "*************************" << endl;
		cout << "Your tuition balance: $" << vStudent[numberOfStudent]->getTuitionBalance() << endl;
		cout << "*************************" << endl;
		vStudent[numberOfStudent]->makePayment();

		cout << "Would you like to add another student? Y or N: ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {
			numberOfStudent++;

		}
		else {
			break;
		}
	}

	do {

		cout << "*************************" << endl;
		cout << "Search/Update menu: " << endl;
		cout << "*************************" << endl;
		cout << left << setw(4) << "";
		cout << "1-> Show all records" << endl;
		cout << left << setw(4) << "";
		cout << "2-> Search for student by studentID" << endl;
		cout << left << setw(4) << "";
		cout << "3-> Update record" << endl;
		cout << left << setw(4) << "";
		cout << "4-> Delete record" << endl;
		cout << left << setw(4) << "";
		cout << "5-> Add a student" << endl;
		cout << left << setw(4) << "";
		cout << "6-> to exit the program" << endl;
		while (1)
		{
			cout << "Enter a number between 1 - 6: ";
			cin >> choice;

			if (cin.fail() || choice < 1 || choice > 6)
			{
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				continue;
			}
			if (!cin.fail())
				break;
		}
		if (choice == 1) {
			for (int i = 0; i < vStudent.size(); i++) {
				cout << "************************************" << endl;
				if (vStudent[i]->getStudentFirstName() == "") {
					cout << vStudent[i]->getStudentID() << " Deleted record!" << endl;
				}
				else {
					vStudent[i]->output();
				}
				cout << "************************************" << endl;
			}
		}
		if (choice == 2) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[i]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {
				if (vStudent[s]->getStudentFirstName() == "") {
					cout << vStudent[s]->getStudentID() << " Deleted record!" << endl;
				}
				else {
					vStudent[s]->output();
				}
			}
			else {
				cout << "Student not found!" << endl;
			}

		}

		if (choice == 3) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[i]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {
				if (vStudent[s]->getStudentFirstName() == "") {
					cout << vStudent[s]->getStudentID() << " Deleted record! Can not be updated." << endl;
				}
				else {
					
					cout << "Enter student first name: ";
					cin >> fname;
					cout << "Enter student last name: ";
					cin >> lname;
					cout << "Enter student grade year\n1- Freshman\n2- Sophomore\n3- Junior\n4- Senior\n";
					cin >> year;
					vStudent[s]->input(fname, lname, year);
					cout << "Would you like to add course/s, start over or keep the same courses? A, S or K: ";
					cin >> ans;
					ans = toupper(ans);
					if (ans == 'A') {
						vStudent[s]->courseEnrollment();
					}
					else if (ans == 'S') {
						vStudent[s]->clearCourseEnrollment();
						cout << "Enter course/s name/s: " << endl;
						vStudent[s]->courseEnrollment();
					}
					else {
						cout << "Your courses will be the same!" << endl;
					}
					cout << "Your tuition balance: $" << vStudent[s]->getTuitionBalance() << endl;
					if (vStudent[s]->getPaymentInfo() > 0) {
						cout << "You have total of previous payment/s of: $" << vStudent[s]->getPaymentInfo() << endl;
					}
					vStudent[s]->makePayment();
				}

			}
			else {
				cout << "Student not found!" << endl;
			}
		}
		if (choice == 4) {
			cout << "Enter student id: ";
			cin >> answer;
			for (int i = 0; i < vStudent.size(); i++) {
				if (vStudent[s]->getStudentID() == answer) {
					s = i;
					break;
				}
				else {
					s = -1;

				}
			}
			if (s != -1) {

				vStudent[s]->~Student();
				cout << "Record deleted!" << endl;

			}
			else {
				cout << "Student not found!" << endl;
			}

		}
		if (choice == 5) {
			vStudent.push_back(new Student());
			numberOfStudent++;
			cout << "Enter student first name: ";
			cin >> fname;
			cout << "Enter student last name: ";
			cin >> lname;
			while (1)
			{
				cout << "Enter student garde year:\n1- Freshman\n2- Sophomore\n3- Junior\n4- Senior\n";
				cin >> year;

				if (cin.fail() || year < 1 || year > 4)
				{
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
					continue;
				}
				if (!cin.fail())
					break;
			}

			vStudent[numberOfStudent]->Student::Student(fname, lname, year);
			vStudent[numberOfStudent]->setStudentID(numberOfStudent + 1);
			cout << "*************************" << endl;
			cout << "Student ID: " << vStudent[numberOfStudent]->getStudentID() << endl;
			cout << "*************************" << endl;
			vStudent[numberOfStudent]->courseEnrollment();
			cout << "*************************" << endl;
			cout << "Your tuition balance: $" << vStudent[numberOfStudent]->getTuitionBalance() << endl;
			cout << "*************************" << endl;
			vStudent[numberOfStudent]->makePayment();
		}
		if (choice == 6) {
			cout << "\t\t\t\tThank you!\n";
			cout << "\t\t\t\tGoodbye!\n";
			break;
		}
		cout << "Return Search/Update menu? (Y) or (N to exit the program): ";
		cin >> ans;
		ans = toupper(ans);
		if (ans == 'Y') {

		}
		else {
			break;
		}
	} while (1);


	for (vector< Student*>::iterator it = vStudent.begin(); it != vStudent.end(); ++it)
	{
		delete (*it);
	}
	vStudent.clear();

	system("pause");
	return 0;
}
