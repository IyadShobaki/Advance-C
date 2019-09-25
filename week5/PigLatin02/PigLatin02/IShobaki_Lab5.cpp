/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 5 (Chapter 9 lab) Pig latin
	9 / 24 / 2019
	Second Solution
*/

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

bool beginWithVowel(char letter);
void splitSentence(string str);


int main() {
	string str;
	cout << "Please enter a sentence:\n";
	getline(cin, str);
	splitSentence(str);

	system("pause");
	return 0;
}

void splitSentence(string str) {
	string word = "";
	for (auto x : str) {
		
		if (x == ' ') {
			
			if (beginWithVowel(word[0])) {
				cout << word + "way" << endl;
			}
			else {
				cout << word.substr(1) + word[0] + "ay\n";
			}
			word = "";
		}
		else {
			word = word + x;
		}
		
	}
	
	if (beginWithVowel(word[0])) {
		cout << word + "way" << endl;
	}
	else {
		cout << word.substr(1) + word[0] + "ay\n";
	}
	
}

bool beginWithVowel(char letter) {
	char test[6] = { 'a','e','i','o','u','\0' };
	for (int i = 0; i < strlen(test); i++) {
		if (test[i] == letter) {
			return true;

		}

	}
	return false;
}