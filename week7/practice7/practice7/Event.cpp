#include "Event.h"
#include <iostream>
#include <string>

using namespace std;

void Event::getEventData() {
	cout << "Enter the event location: ";
	do {
		getline(cin, eventLocation);
	} while (eventLocation.empty());
	
	cout << "Enter Event information (Wedding, celebration,...) : ";
	do {
		getline(cin, eventInformation);
	} while (eventInformation.empty());
	
	cout << "Enter the event date:\n";
	getDate(eventDate);

}
void Event::getDate(Date& theDate) {
	cout << "Enter month: ";
	cin >> theDate.month;
	cout << "Enter day: ";
	cin >> theDate.day;
	cout << "Enter year: ";
	cin >> theDate.year;
}
string Event::getEventLocation() {
	return eventLocation;
}
string Event::getEventInformation() {
	return eventInformation;
}
Date Event::getEventDate() {
	return eventDate;
}
