#include <iostream>
#include <math.h>
using namespace std;

int isPrime(int num);
int main() {
	int n;
	bool flag = false;

	cout << "Please enter a number: ";
	cin >> n;

	for (int i = 2; i < n; i++) {
		if (n % i == 0) {
			flag = true;
			break;
		}

	}
	if (flag == false && n > 1) {
		cout << "Number is prime\n";
	}
	else {
		cout << "Number is not prime\n";
	}

	cout << endl;

	// another way

	cout << isPrime(n) << endl;



	system("pause");
	return 0;
}
int isPrime(int num) {
	int check =1;
	int sqrtNum;
	sqrtNum = sqrt(num);
	if (num % 2 == 0 && num > 2) {
		check = 2;
		return check;
	}
		
	for (int i = 3; i < sqrtNum +1; i++) {
		if (sqrtNum % i == 0) {
			check = 2;
			return check;
		}			
		i++;
	}
	return check;
		
}