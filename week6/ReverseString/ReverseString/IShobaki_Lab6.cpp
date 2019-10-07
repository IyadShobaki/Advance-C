
/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 6 (Chapter 10 lab) Reverse a string
	10 / 3 / 2019
*/

#include <iostream>
using namespace std;

char* ReverseString(char* pString) {
	if (NULL == pString)
		return NULL;

	char* pStart = pString;
	char* pEnd = pStart + strlen(pString) - 1;



	while (pEnd > pStart) {
		char temp = *pStart;
		*pStart = *pEnd;
		*pEnd = temp;

		pStart++;
		pEnd--;
	}

	return pString;
}
int main() {

	char str[100];
	cout << "Please enter a string: ";
	cin.getline(str, 100);

	printf("INPUT : [%s]\r\n", str);
	printf("OUTPUT: [%s]\r\n", ReverseString(str));


	system("pause");
	return 0;
}