#include <iostream>
#include "Event.h"

using namespace std;

int main() {

	Event events[5];

	for (int i = 0; i < 5; i++) {
		cout << "Enter event " << i + 1 << " data:\n";
		events[i].getEventData();

	}
	for (int i = 0; i < 5; i++) {
		cout << "**************************************************\n";
		cout << "The event location: " << events[i].getEventLocation() << endl;
		cout << "The event information: " << events[i].getEventInformation() << endl;
		cout << "The event will be on " << events[i].getEventDate().month
			<< "/" << events[i].getEventDate().day << "/"
			<< events[i].getEventDate().year << endl;

	}
	cout << "**************************************************\n";



	system("pause");
	return 0;
}