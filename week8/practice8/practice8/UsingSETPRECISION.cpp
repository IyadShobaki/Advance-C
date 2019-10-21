//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//
//	float val = 123.456f;
//	cout << "Value of val with different setprecision parameters:\n";
//	cout << setprecision(3) << val << endl;
//	cout << setprecision(4) << val << endl;
//	cout << setprecision(5) << val << endl;
//	cout << setprecision(6) << val << endl;
//	cout << setprecision(7) << val << endl;
//	cout << setprecision(8) << val << endl;
//	cout << "Left padded values:\n";
//	cout << setw(7)<< setfill('0') << setprecision(3) << val << endl;
//	cout << setw(7) << setfill('0') << setprecision(4) << val << endl;
//	cout << setw(7) << setfill('0') << setprecision(5) << val << endl;
//	cout << setw(7) << setfill('0') << setprecision(6) << val << endl;
//	cout << setw(7) << setfill('0') << setprecision(7) << val << endl;
//	cout << setw(7) << setfill('0') << setprecision(8) << val << endl;
//
//	// Using of setbase
//	cout << endl;
//
//	int x = 12349;
//	cout << "Octal        value is: " << setbase(8) << x << endl;
//	cout << "Decimal      value is: " << setbase(10) << x << endl;
//	cout << "Hexadecimal  value is: " << setbase(16) << x << endl;
//
//	system("pause");
//	return 0;
//}