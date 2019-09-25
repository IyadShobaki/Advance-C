//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//bool beginWithVowel(char letter);
//int main() {
//
//
//	int start = 0;
//	int end = 0;
//	char cString[100] = "\0";
//	
//	cout << "Enter a sentence\n";
//	cin.getline(cString, 100);
//
//	
//	for (int i = 0; i < strlen(cString)-1; i++) {
//		if (cString[i] == ' ') {
//			end = i;
//			if (beginWithVowel(cString[start])) {
//				int begin = start + 1;
//				for (begin; begin <= end -1; begin++) {
//					cout << cString[begin];
//				}
//				cout << cString[start] << "ay\n";	
//				
//			}
//			start = i;
//		}		
//	}
//
//
//	
//
//	system("pause");
//	return 0;
//}
//
//bool beginWithVowel(char letter) {
//	char test[10] = { 'a','e','i','o','u','\0' };
//	for (int i = 0; i < strlen(test) - 1; i++) {
//		if (test[i] == letter) {
//			return true;
//		}
//		else {
//			return false;
//		}
//	}
//	
//}