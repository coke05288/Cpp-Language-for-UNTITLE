#include<iostream>
using namespace std;

int main() {

	int sum = 0;
	int arr[4] = { 90, 20, 10, 30 };

	for (int i = 0; i < 4; i++) {
		sum += arr[i];
	}

	cout << sum << endl;

	return 0;
}