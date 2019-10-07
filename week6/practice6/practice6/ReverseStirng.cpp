//#include <iostream>
//using namespace std;
//
//char* ReverseString(char* pString) {
//	if (NULL == pString)
//		return NULL;
//
//	char* pStart = pString;
//	char* pEnd = pStart + strlen(pString) - 1;
//
//
//
//	while (pEnd > pStart) {
//		char temp = *pStart;
//		*pStart = *pEnd;
//		*pEnd = temp;
//
//		pStart++;
//		pEnd--;
//	}
//
//	return pString;
//}
//int main() {
//
//	char str[100] = "ABCD";
//	printf("INPUT: [%s]\r\n", str);
//	printf("OUTPUT: [%s]\r\n", ReverseString(str));
//
//
//	system("pause");
//	return 0;
//}