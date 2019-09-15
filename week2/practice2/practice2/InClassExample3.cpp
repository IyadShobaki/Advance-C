#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> myVector;
	do {

		cout << "Next Element->";
		int iElement;
		cin >> iElement;
		myVector.push_back(iElement);
		cout << "Size of vector is: " << myVector.size()
			<< endl
			<< "Capacity of the vector="
			<< myVector.capacity()
			<< endl;
		cout << "More elements yes(y). no(n)";
		char cResponse;
		cin >> cResponse;
		if ((cResponse == 'y') || (cResponse == 'Y'))
			continue;
		break;
	} while (true);

	for (int i = 0; i < myVector.size(); i++) {
		cout << myVector[i] << endl;
	}

	system("pause");
	return 0;
}