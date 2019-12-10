#pragma once
#include <string>
#include <vector>
#include <iomanip>
#include <iostream>
#include <array>
using namespace std;

class Student
{
private:
	string firstName;
	string lastName;
	int gradeYear = 0;
	vector<string> courses;
	double payment = 0.0;
	double tuitionBalance = 0.0;
	const int costOfCourse = 500;
	int id = 1000;
	int studentID = 0;
public:
	Student();
	Student(string fname, string lname, int year);
	~Student();
	void input(string fname, string lname, int year);
	void setStudentID(int increament);
	string getStudentID();
	void courseEnrollment();
	void setTuitionBalance(double balance);
	double getTuitionBalance();
	string getStudentFirstName();
	void makePayment();
	double getPaymentInfo();
	void output();
	void clearCourseEnrollment();
};

