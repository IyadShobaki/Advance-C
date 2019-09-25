//#include <iostream>
//#include <string>
//#include <cstring>
//using namespace std;
//
//bool beginWithVowel(char letter);
//void splitSentence(string str) {
//	string word = "";
//	for (auto x : str) {
//		if (x == ' ') {
//			cout << word[0] << endl;
//			if (beginWithVowel(word[0])) {
//				cout << word + "way" << endl;
//			}
//			else {
//				cout << word.substr(1) + word[0] + "ay\n" ;
//			}
//			//cout << word << endl;
//			word = "";
//		}
//		else {
//			word = word + x;
//		}
//	}
//	cout << word[0] << endl;
//	if (beginWithVowel(word[0])) {
//		cout << word + "way" << endl;
//	}
//	else {
//		cout << word.substr(1) + word[0] + "ay\n";
//	}
//	//cout << word << endl;
//}
//bool beginWithVowel(char letter) {
//	char test[6] = { 'a','e','i','o','u','\0' };
//	for (int i = 0; i < strlen(test) - 1; i++) {
//		if (test[i] == letter) {
//			return true;
//			
//		}
//		
//	}
//	return false;
//}
//int main() {
//	string str;
//	cout << "Please enter a sentence:\n";
//	getline(cin, str);
//	splitSentence(str);
//
//	system("pause");
//	return 0;
//}