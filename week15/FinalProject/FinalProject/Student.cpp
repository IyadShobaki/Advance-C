#include "Student.h"



Student::Student(string fname, string lname, int year)
{

	firstName = fname;
	lastName = lname;
	gradeYear = year;


}
Student::Student()
{
	
}
Student::~Student()
{

	clearCourseEnrollment();
}
string Student::getStudentFirstName() {
	return firstName;
}
void Student::courseEnrollment()
{
	int numbers = 0;
	string course;
	cout << "Enter course name ('English', 'Math' 'Science', 'History', ...) to enroll: or S to STOP:" << endl;
	while (1) {
		numbers++;
		cout << numbers << "- COURSE NAME: ";
		do {
			getline(cin, course);
		} while (course.empty());

		transform(course.begin(), course.end(), course.begin(), ::toupper);
		if (course == "S")
		{
			break;
		}
		else {
			courses.push_back(course);
		}
	}


}
void Student::clearCourseEnrollment() {
	courses.clear();
	tuitionBalance = 0.0;
}

void Student::input(string fname, string lname, int year)
{

	firstName = fname;
	lastName = lname;
	gradeYear = year;


}
void Student::setStudentID(int increament) {

	studentID = id + increament;


}
string Student::getStudentID() {
	string str;
	str = to_string(studentID);
	return str;
}
void Student::makePayment()
{
	char ans;
	double amount;
	cout << "Would you like to make a payment? Y or N: ";
	cin >> ans;
	ans = toupper(ans);
	if (ans == 'Y') {
		cout << "Enter amount: $";
		cin >> amount;
		if (amount > 0) {
			payment += amount;
		}
		else {
			cout << "Invalid number!" << endl;
		}
	}
}
double Student::getPaymentInfo() {
	return payment;
}
double Student::getTuitionBalance() {
	tuitionBalance = 0.0;
	for (unsigned int i = 0; i < courses.size(); i++) {
		tuitionBalance = tuitionBalance + costOfCourse;
	}
	return tuitionBalance;
}
void Student::setTuitionBalance(double balance) {
	tuitionBalance = balance;
}
void Student::output()
{
	cout << endl;
	cout << "StudentID: " << getStudentID() << endl;
	cout << "Student first name: " << firstName << endl;
	cout << "Student last name: " + lastName << endl;
	cout << "Student grade year: ";
	switch (gradeYear) {
	case 1:
		cout << "Freshman" << endl;
		break;
	case 2:
		cout << "Sophomore" << endl;
		break;
	case 3:
		cout << "Junior" << endl;
		break;
	case 4:
		cout << "Senior" << endl;
	}
	cout << "Student courses: " << endl;
	for (int counter = 0; counter < courses.size(); counter++)
	{
		cout << left << setw(4) << "";
		cout << to_string(counter + 1) + "-" + courses[counter] << endl;

	}
	cout << "Student tutition balance: " << endl;

	if ((payment > 0)) {
		cout << left << setw(4) << "";
		cout << "Your original tuition balance: $" << tuitionBalance << endl;
		cout << left << setw(4) << "";
		cout << "Your tuition balance after the payment/s of ($" << payment << ") is $" << tuitionBalance - payment << endl;
	}
	else {
		cout << left << setw(4) << "";
		cout << "Your tuition balance: $" << tuitionBalance << endl;
	}

}