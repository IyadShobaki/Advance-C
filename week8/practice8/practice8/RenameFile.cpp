////Assuming that the files are 
////in the same folder as the program
//
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//#include <stdbool.h>
//using namespace std;
//
////A function to get the file size
//unsigned long long int fileSize(const char* filename) {
//	//open the file
//	FILE* fh = fopen(filename, "rb");
//	fseek(fh, 0, SEEK_END);
//	unsigned long long int size = ftell(fh);
//	fclose(fh);
//	
//	return (size);
//}
////A function to check if the file exists or not
//bool fileExists(const char* fname) {
//	FILE* file;
//	if (file = fopen(fname, "r")) {
//		fclose(file);
//		return (true);
//	}
//	return (false);
//}
//
//int main() {
//
//	printf("%llu Bytes\n", fileSize("Passwords.txt"));
//	printf("%llu Bytes\n", fileSize("Notes.docx"));
//
//	if (fileExists("OldData.txt") == true)
//		printf("The file exists\n");
//	else
//		printf("The file doesn't exist\n");
//
//	rename("Videos", "English_Videos");
//	rename("Songs", "English_Songs");
//
//	remove("OldData.txt");
//	remove("Notes.docx");
//
//	if (fileExists("OldData.txt") == true)
//		printf("The file exists\n");
//	else
//		printf("The file doesn't exist\n");
//
//	system("pause");
//	return 0;
//
//}