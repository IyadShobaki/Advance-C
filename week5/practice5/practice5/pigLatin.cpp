#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;
bool beginWithVowel(char letter);
int main() {

	string ay = "ay";
	string way = "way";
	string x;
	string y;
	vector<int> vStart;
	vector<int> vEnd;
	cout << "Please enter a sentence:\n";
	getline(cin, x);
	//cout << x << endl;
	//cout << x.length() << endl;

	for (int i = 0; i < x.length(); i++) {
		while (x[i] == ' ') {
			x = x.substr(i + 1);
		}
		break;
	}
	
	//cout << x.find_last_not_of(' ') << endl;
	//cout << x.length() << endl;
	int lastChar = x.find_last_not_of(' ');
	if (lastChar != x.length() - 1) {
		x.erase(x.begin() + lastChar, x.end());
	}
	//cout << x.length() << endl;
	vStart.push_back(0);
	bool isOneWord = true;
	for (int i = 0; i < x.length(); i++) {
		if (x[i] != ' ') {
			continue;
		}
		if (x[i] == ' ') {
			vEnd.push_back(i);
			vStart.push_back(i + 1);
			isOneWord = false;
		}
	}
	if (isOneWord)
		vEnd.push_back(x.length());


	
	string word = "";

	for (int i = 0; i < vStart.size(); i++) {
		
		if (i < vEnd.size()) {
			cout << vStart[i] << " <- start and end -> " << vEnd[i] << endl;
			word = x.substr(vStart[i], (vEnd[i]-vStart[i]));
			if (beginWithVowel(word[0])) {
				cout << word + "way" << endl;
			}
			else {
				cout << word.substr(1) + word[0] + "ay\n";
			}
			//cout << x.substr(vStart[i], vEnd[i]) << endl;
		}else{
			cout << "Start " << vStart[i] << endl;
			word = x.substr(vStart[i]);
			if (beginWithVowel(word[0])) {
				cout << word + "way" << endl;
			}
			else {
				cout << word.substr(1) + word[0] + "ay\n";
			}
			//cout << x.substr(vStart[i]) << endl;
		}
		
		word = "";
	}
	
	//
	//int d = 0;
	//
	//char first;
	//
	////char end; = x[vEnd[d]];
	////for (int i = 0; i < vEnd.size(); i++) {
	//do {	
	//	string all;
	//	string al;
	//	first = x[vStart[d]];
	//	if (beginWithVowel(first)) {
	//		if (d < vEnd.size()) {
	//			cout << vStart[d] << " " << vEnd[d] << endl;
	//			all = x.substr(vStart[d], vEnd[d]);
	//			cout << all + "way" << endl;
	//			//y.append(" " + all + way);
	//		}
	//		else {	
	//			cout << vStart[d] << " " <<  endl;
	//			all = x.substr(vStart[d]);
	//			cout << all + "way" << endl;
	//			//y.append(" " + all + way);
	//		}
	//		
	//	

	//	}
	//	else {
	//		if (d < vEnd.size()) {
	//			cout << vStart[d] << " " << vEnd[d] << endl;
	//			al = x.substr((vStart[d] + 1), vEnd[d]);
	//			cout << al + first + "ay" << endl;
	//			//y.append(" " + al + first + ay);
	//		}else{
	//			cout << vStart[d] << " "  << endl;
	//			al = x.substr(vStart[d] + 1);
	//			cout << al + first + "ay" << endl;
	//			//y.append(" " + al + way);
	//		}
	//		
	//	
	//	}
	//	cout << first << endl;
	//	first = ' ';
	//	all = "";
	//	al = "";
	//	d++;
	//} while (d < vStart.size());
	//	
	//	
	//	
	////}
	//cout << y << endl;
	
	system("pause");
	return 0;
}
bool beginWithVowel(char letter) {
	//string test = "aeiou";
	char test[6] = { 'a','e','i','o','u','\0' };
	for (int i = 0; i < strlen(test) ; i++) {
	//for (int i = 0; i < test.length(); i++) {
		if (test[i] == letter) {
			return true;
		}
		
	}
	return false;
}