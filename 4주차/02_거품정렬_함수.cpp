#include<iostream>
using namespace std;

void swap(int arr[], int j) {

	int temp;

	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
}

int main() {

	int arr[] = { 5, 2, 1, 3, 11 };

	for (int i = 0; i < size(arr); i++) {
		for (int j = 0;j < size(arr) - (i + 1); j++) {
			if (arr[j] > arr[j + 1]) {
				swap(arr, j);
			}
		}
	}

	for (int i : arr) {
		cout << i << " ";
	}

	return 0;
}