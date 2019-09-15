#include <iostream>
#include <string>

using namespace std;

struct Date{
	int day, month, year;
};
struct Event {
	string location;
	string information;
	Date eventDate;
};
void getEventData(Event& thEvent);
void getDate(Date& theDate);

int main() {

	Event events[5];
	for (int i = 0; i < 5; i++) {
		cout << "Enter event " << i + 1 << " data:\n";
		getEventData(events[i]);

	}
	for (int i = 0; i < 5; i++) {
		cout << "The event location: " << events[i].location << endl;
		cout << "The event information: " << events[i].information << endl;
		cout << "The even will be on " << events[i].eventDate.month
			<< "-" << events[i].eventDate.day << "-"
			<< events[i].eventDate.year << endl;
	}

	

	system("pause");
	return 0;
}

void getEventData(Event& theEvent) {
	cout << "Enter the event location: ";
	do {
		getline(cin, theEvent.location);
	} while (theEvent.location.empty());
	//cin >> theEvent.location;
	cout << "Enter Event information: ";
	do {
		getline(cin, theEvent.information);
	} while (theEvent.information.empty());
	//cin >> theEvent.information;
	cout << "Enter the event date:\n";
	getDate(theEvent.eventDate);

}

void getDate(Date& theDate) {
	cout << "Enter month: ";
	cin >> theDate.month;
	cout << "Enter day: ";
	cin >> theDate.day;
	cout << "Enter year: ";
	cin >> theDate.year;
}