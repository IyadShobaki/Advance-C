#pragma once
class Grades
{
public:
	void setScore(int);
	char getLetterGrade();
private:
	int score = 0;
	char letterGrade;
};

