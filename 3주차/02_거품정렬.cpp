#include<iostream>
using namespace std;

int main() {

	int arr[] = { 5, 2, 1, 3, 11 };
	int temp(0);

	for (int i = 0; i < size(arr); i++) {
		for (int j = 0;j < size(arr) - (i + 1); j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}

	for (int i : arr) {
		cout << i << " ";
	}

	return 0;
}