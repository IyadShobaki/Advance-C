//#include <iostream>
//using namespace std;
//
//typedef int* IntPointer;
//
//void sneaky(IntPointer temp);
//
//int main() {
//	IntPointer p;
//
//	p = new int;
//	*p = 77;
//	cout << p << endl;
//	cout << "Before call to function *p == " << *p << endl;
//
//	sneaky(p);
//
//	cout << "After call to function *P == " << *p << endl;
//	cout << p << endl;
//	system("pause");
//	return 0;
//
//}
//void sneaky(IntPointer temp) {
//	*temp = 99;
//	cout << temp << endl;
//	cout << "Inside function cal *temp == " << *temp << endl;
//}