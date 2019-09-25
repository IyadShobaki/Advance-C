/*  Iyad Shobaki
	Fall 2019 ADVANCED C++ PROGRAMMING - CSE234
	Professor  Steve Morosko
	Week 5 (Chapter 9 lab) Pig latin
	9 / 24 / 2019
	First Solution
*/
#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;
bool beginWithVowel(char letter);
int main() {

	string pigLatin;
	vector<int> vStart;
	vector<int> vEnd;
	cout << "Please enter a sentence:\n";
	getline(cin, pigLatin);

	//remove white spaces from the begining of the sentence
	for (int i = 0; i < pigLatin.length(); i++) {
		while (pigLatin[i] == ' ') {
			pigLatin = pigLatin.substr(i + 1);
		}
		break;
	}

	//trim white spaces from the end of the sentence
	int lastChar = pigLatin.find_last_not_of(' ');
	if (lastChar != pigLatin.length() - 1) {
		pigLatin.erase(pigLatin.begin() + lastChar, pigLatin.end());
	}

	vStart.push_back(0);
	bool isOneWord = true;
	for (int i = 0; i < pigLatin.length(); i++) {
		if (pigLatin[i] != ' ') {
			continue;
		}
		if (pigLatin[i] == ' ') {
			vEnd.push_back(i);
			vStart.push_back(i + 1);
			isOneWord = false;
		}
	}
	if (isOneWord)
		vEnd.push_back(pigLatin.length());


	cout << endl;
	string word = "";

	for (int i = 0; i < vStart.size(); i++) {
		cout << " ";
		if (i < vEnd.size()) {
			word = pigLatin.substr(vStart[i], (vEnd[i] - vStart[i]));
			if (beginWithVowel(word[0])) {
				cout << word + "way" << endl;
			}
			else {
				cout << word.substr(1) + word[0] + "ay\n";
			}

		}
		else {
			word = pigLatin.substr(vStart[i]);
			if (beginWithVowel(word[0])) {
				cout << word + "way" << endl;
			}
			else {
				cout << word.substr(1) + word[0] + "ay\n";
			}

		}
		cout << endl;
		word = "";
	}

	system("pause");
	return 0;
}
bool beginWithVowel(char letter) {

	char test[] = { 'a','e','i','o','u','\0' };

	for (int i = 0; i < strlen(test); i++) {
		if (test[i] == letter) {
			return true;
		}

	}
	return false;
}