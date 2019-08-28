/*--Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 1 Lab (Chapter 1-5) - PART 1 (Student Average)
	8 / 27 / 2019 */

#include <iostream>
using namespace std;
// Function takes an array as an arg
double qualityPoints(int arr[]);
// Function takes double number as an arg
double qualityPoints(double average);
int main() {
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	// Asking the user to input student average
	double studentAverage;
	cout << "Please enter student1 average between (0 - 100): ";
	cin >> studentAverage;
	cout << "Student1 grade is: " << qualityPoints(studentAverage) << endl;
	cout << endl;
	cout << "----------------------------------------" << endl;


	// Passing an existing array to the function and calculate the average of the marks already given
	int studentMarks[] = { 77,88,100,97,90 };
	cout <<"Student2 grade is: " << qualityPoints(studentMarks) << endl;

	system("pause");
	return 0;
}
double qualityPoints(double average) {
	int grade;
	if (average >= 90)
		grade = 4;
	else if (average >= 80)
		grade = 3;
	else if (average >= 70)
		grade = 2;
	else if (average >= 60)
		grade = 1;
	else
		grade = 0;

	return grade;
}

double qualityPoints(int arr[]) {
	double total = 0;
	double  average;
	double grade;
	int arrLength = sizeof(arr);

	cout << "Student2 marks are: " << endl;
	for (unsigned int i = 0; i <= arrLength; i++) {
		cout << i + 1 << "-" << arr[i] << endl;
		total = total + arr[i];
	}
	average = total / (arrLength + 1);
	cout << "Student2 average = " << average << endl;
	if (average >= 90)
		grade = 4;
	else if (average >= 80)
		grade = 3;
	else if (average >= 70)
		grade = 2;
	else if (average >= 60)
		grade = 1;
	else
		grade = 0;
	
	return grade;
}