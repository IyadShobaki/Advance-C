#include <iostream>
using namespace std;

void insertionSort(int a[], int n);
int main() {

	int arr[] = { 2,4,1,5,9 };
	cout << "[";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ",";
	}
	cout << "]\n";

	insertionSort(arr, 5);
	cout << "[";
	for (int i = 0; i < 5; i++) {
		cout << arr[i] << ",";
	}
	cout << "]\n";

	system("pause");
	return 0;
}

void insertionSort(int a[], int n) {
	int i, value, index;
	for (i = 1; i < n; i++) {
		value = a[i];
		index = i;
		while (index > 0 && a[index - 1] > value) {
			a[index] = a[index - 1];
			index = index - 1;
		}
		a[index] = value;
	}
}