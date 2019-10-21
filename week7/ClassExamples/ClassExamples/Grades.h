//#pragma once
#ifndef GRADES_H
#define GRADES_H
 



class Grades{
public:
	Grades();
	~Grades();
	void setScore(int);
	char getLetterGrade();
private:
	int score = 0;
	char letterGrade;
};

#endif // !GRADES_H