#include <iostream>
using namespace std;

class Person
{
public:

	int ID;
	string name;
	//void display() {
	void virtual display() {
		cout << "ID: " << ID << endl;
		cout << "Name: " << name << endl;
	}
	void InputName(string pname) {
		name = pname;
	}
	
};
class Student : public Person
{
public:
	void display() {
		cout << "Student ID: " << ID << endl;
		cout << "Student Name: " << name << endl;
	}
	void InputName(string pname) {
		name = pname;
	}
						
};
int main() {


	Student stud1;
	Person* per1;

	stud1.ID = 1;
	stud1.InputName("John");
	stud1.display();
	per1 = &stud1;
	per1->display();

	//Person per1;
	//per1.ID = 2;
	//per1.InputName("Mark");
	//per1.display();

	system("pause");
	return 0;
}