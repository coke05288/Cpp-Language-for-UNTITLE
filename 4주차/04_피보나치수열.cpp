#include<iostream>
using namespace std;

int main() {

	int n(0);
	cin >> n;

	int val1 = 0;
	int val2 = 1;
	int print_val = 0;

	for (int i = 0; i < n; i++) {
		cout << print_val << " ";
		print_val = val2;
		val2 += val1;
		val1 = print_val;
	}
	

	return 0;
}