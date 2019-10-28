#include <iostream>
using namespace std;
int factorial(int n) {
	if (n <= 0)
		return 1;
	else
		return factorial(n - 1) * n;
}
int main() {

	for (int count = 0; count < 10000; ++count) {
		cout << factorial(count) << endl;
	}
	system("pause");
	return 0;
}