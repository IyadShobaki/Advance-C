//#include <iostream>
//using namespace std;
//
//class Dog {
//public:
//	Dog(int initialAge); // constructor
//	Dog();
//	int getAge();
//	void setAge(int age);
//	void bark();
//private:
//	int dogAge;
//};
//Dog::Dog(int initialAge) {
//	dogAge = initialAge;
//}
//Dog::Dog() {
//	dogAge = 1;
//}
//int Dog::getAge() {
//	return dogAge;
//}
//void Dog::setAge(int age) {
//	dogAge = age;
//}
//void Dog::bark() {
//	cout << "Roof,Roof!";
//}
//int main() {
//
//	int age;
//	cout << "How old is Krypto? ";
//	cin >> age;
//	Dog Krypto(age);
//	Dog Leo(1);
//	Krypto.bark();
//
//	cout << "Krypto is " << Krypto.getAge() << " years old" << endl;
//	age++;
//	Krypto.setAge(age);
//	cout << "Krypto is " << Krypto.getAge() << " years old" << endl;
//
//	cout << "Krypto is " << Leo.getAge() << " years old" << endl;
//
//	system("Pause");
//	return 0;
//}