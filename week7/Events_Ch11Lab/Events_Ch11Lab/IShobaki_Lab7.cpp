/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 7 (Chapter 11 lab)
	10 / 08 / 2019
*/
#include <iostream>
#include "Event.h"

using namespace std;

typedef Event* EvnPtr;

void fillArray(Event events[], int size);
void showResult(Event events[], int size);
int main() {

	int arraySize;
	cout << "How many event/s would you like to add? ";
	cin >> arraySize;
	EvnPtr events;
	events = new Event[arraySize];

	fillArray(events, arraySize);

	showResult(events, arraySize);




	delete[] events;
		



	system("pause");
	return 0;
}
void fillArray(Event events[], int size) {

	for (int i = 0; i < size; i++) {
		cout << "Enter event " << i + 1 << " data:\n";
		events[i].getEventData();

	}
}
void showResult(Event events[], int size) {

	for (int i = 0; i < size; i++) {
		cout << "**************************************************\n";
		cout << "The event location: " << events[i].getEventLocation() << endl;
		cout << "The event information: " << events[i].getEventInformation() << endl;
		cout << "The event will be on " << events[i].getEventDate().month
			<< "/" << events[i].getEventDate().day << "/"
			<< events[i].getEventDate().year << endl;

	}
	cout << "**************************************************\n";
}