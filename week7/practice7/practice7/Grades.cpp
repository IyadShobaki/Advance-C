#include "Grades.h"
void Grades::setScore(int gradeScore) {
	score = gradeScore;
}
char Grades::getLetterGrade() {
	if (score >= 90)
		return 'A';
	else if (score >= 80)
		return 'B';
	else if (score >= 70)
		return 'C';
	else if (score >= 60)
		return 'D';
	else
		return 'F';
}