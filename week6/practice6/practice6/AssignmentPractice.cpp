#include <iostream>
using namespace std;

typedef char* IntPtr;
char* ReverseString(char* pString);
int main() {

	char str[100];
	cout << "please enter a string:\n";
	cin.getline(str, 100);

	/*for (int i = 0; i < strlen(str); i++) {
		cout << str[i];
	}
	cout << strlen(str) << endl;*/

	IntPtr head, tail;
	head = &str[0];
	tail = &str[strlen(str)-1];

	cout << *head << endl;
	cout << *tail << endl;


	system("pause");
	return 0;
}

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


////
////using namespace std;
////
////// Function to reverse string and return 
////// reverse string pointer of that 
////char* reverseConstString(char const* str)
////{
////	// find length of string 
////	int n = strlen(str);
////
////	// create dynamic pointer char array 
////	char* rev = new char[n + 1];
////
////	// copy of string to ptr array 
////	strcpy(rev, str);
////
////	// Swap character starting from two 
////	// corners 
////	for (int i = 0, j = n - 1; i < j; i++, j--)
////		swap(rev[i], rev[j]);
////
////	// return pointer of reversed string 
////	return rev;
////}
////
////// Driver code 
////int main(void)
////{
////	const char* s = "GeeksforGeeks";
////	printf("%s", reverseConstString(s));
////	return (0);
////}