//#include <iostream>
//#include <string>
//using namespace std;
//
//int main() {
//
//	//string str1 = "Hello World";
//	//string str2 = "Hello Earth";
//	//char strnew[20];
//	//int len;
//	//cout << str1 << endl;
//	//cout << "Data: " << str1.data() << endl;
//	//len = str1.copy(strnew, 8, 0);
//	////add end of string
//	//strnew[len] = '\0';
//	//cout << "Len: " << len << endl;
//	//cout << "strnew: " << strnew << endl;
//	//cout << "The position of 'World' in the orginal string: " << str1.find("World") << endl;
//	//cout << "String in position 4 to 10 is: " << str1.substr(2, 12) << endl;
//	//if (str1.compare("Hello World") == 0)
//	//	cout << "String are equal" <<  endl;
//	//cout << "The position of First occurance of 'o' " << str1.find_first_of("o") << endl;
//
//	//cout << "The position of Last occurance of 'o' " << str1.find_last_of("o") << endl;
//
//	string str = "Hello World";
//	cout << "Append: " << str.append(", How are you?") << endl;
//	cout << "Insert: " << str.insert(5, " there ") << endl;
//	cout << "Replace: " << str.replace(6, str.length() - 6, "World") << endl;
//
//	cout << str << endl;
//	str.pop_back();
//	cout << str << endl;
//	str.push_back('a');
//	cout << str << endl;
//	str.resize(4);
//	str.shrink_to_fit();
//	cout << str << endl;
//
//
//	char aString[] = "This is my c-string";
//	string stringVar;
//	stringVar = aString;
//	cout << stringVar << endl;
//
//
//	char bString[30];
//	string stringVariable("This is my string data");
//	strcpy_s(bString, stringVariable.c_str());
//	cout << bString << endl;
//
//
//	int i;
//	double d;
//	string s;
//
//	i = stoi("35");
//	i++;
//	cout << i << endl;
//	d = stod("2.5");
//	d += 1.1;
//	cout << d << endl;
//	s = to_string(d * 2);
//	cout << s << endl;
//
//
//
//
//
//	system("pause");
//	return 0;
//}