#include <iostream>
using namespace std;
#pragma once
struct Date {
	int day, month, year;
};

class Event
{
public:
	void getEventData();
	void getDate(Date& theDate);
	string getEventLocation();
	string getEventInformation();
	Date getEventDate();

private:
	string eventLocation;
	string eventInformation;
	Date eventDate;
};


