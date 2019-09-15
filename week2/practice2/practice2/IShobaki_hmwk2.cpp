//#include <iostream>
//using namespace std;
//
//class counterType {
//public:
//	void input();
//	void output();
//	void set(int count);
//	int getCount();
//	void increaseCount();
//	void decreaseCount();
//private:
//	int count;
//
//};
//
//int main() {
//	char ans;
//	int count;
//	counterType apples;
//
//	apples.input();
//	cout << endl;
//	do {
//
//		cout << "Would you like to change the amount," << endl
//			<< "increase it by 1, or decrease it by 1?" << endl
//			<< "-'C' for change\n-'I' for increase\n-'D' for decrease\n- Anything else to exit" << endl;
//		cin >> ans;
//		ans = toupper(ans);
//
//		switch (ans) {
//		case 'C':
//			do {
//				cout << "Enter a nonnegative whole number: " << endl;
//				cin >> count;
//			} while (count < 0);
//			
//			apples.set(count);
//			break;
//		case 'I':
//			apples.increaseCount();
//			break;
//		case 'D':
//			apples.decreaseCount();
//			break;
//		}
//		
//		apples.output();
//		
//	} while (ans == 'C' || ans == 'I' || ans == 'D');
//	
//
//	
//
//	system("pause");
//	return 0;
//}
//
//void counterType::input() {
//	int amount;
//	do {
//		cout << "Enter a nonnegative whole number of apples: " << endl;
//		cin >> amount;
//		
//	} while (amount < 0);
//	
//	count = amount;
//	cout << "You have " << count << " of apples in your bag." << endl;
//}
//void counterType::set(int newCount) {
//	count = newCount;
//}
//int counterType::getCount() {
//	return count;
//}
//void counterType::increaseCount() {
//	count++;
//}
//void counterType::decreaseCount() {
//	if (count <= 0) {
//		cout << "The number can not be negative!" << endl;
//	}
//	else {
//		count--;
//	}
//	
//}
//void counterType::output() {
//	cout << "Apples current number: " << getCount() << endl;
//}
//
