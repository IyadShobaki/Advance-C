#include <iostream>
 

using namespace std;

int main() {

	double* p, v;
	p = &v;

	*p = 99.99;

	cout << v << endl;
	cout << p << endl;
	system("pause");
	return 0;
}