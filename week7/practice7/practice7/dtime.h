//#pragma once
//class dtime
//{
//};

#ifndef  DTIME_H
#define DTIME_H

#include <iostream>
using namespace std;

class DigitalTime
{
public:
	DigitalTime(int theHour, int theMinute);
	DigitalTime();
	//Initializes the time value to 0:00 (whic is midnight

	int getHour() const;
	int getMinute() const;
	void advance(int minutesAdded);
	//Changes the time to minutseAdded minutes later

	void advance(int hoursAdded, int minutesAdded);
	//Changes the time to hoursAdded hours plus minutesAdded minutes later

	friend bool operator == (const DigitalTime& time1,
		const DigitalTime& time2);

	friend istream& operator >>(istream& ins, DigitalTime& theObject);

	friend ostream& operator << (ostream& out, const DigitalTime& theObject);

private:
	int hour;
	int minute;

	static void readHour(int& theHour);

	static void readMinute(int& theMinute);

	static int digitToInt(char c);


};
#endif // ! DTIME_H

