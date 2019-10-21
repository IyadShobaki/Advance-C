#include <iostream>
using namespace std;
#define PI 3.14159
#define MIN(a,b) (((a)<(b))?a:b) // uniary operator return a if its true and b if its false

#define MKSTR(x) #x
#define concat(a,b) a##b

int main(){

	//int dogNum;

	//cout << "Enter how many dog do you want to add: ";
	//cin >> dogNum;
	
	string arr[5];
	

	for (int i = 0; i < 5; i++) {
		int xi = 100;
	
		arr[i] = concat(x, i);
	}
	for (int i = 0; i < 5; i++) {
	

		cout << arr[i] << endl;
	}
	
	
	int xy = 100;
	int xz = 200;

	cout << concat(x, y) << endl;
	cout << concat(x, z) << endl;

	cout << MKSTR(Hello C++) << endl;

	/*int i, j;
	i = 100;
	j = 30;

	cout << "Minimum is: " << MIN(i, j) << endl;


	cout << "Value of PI:" << PI << endl;*/

	system("pause");
	return 0;
}