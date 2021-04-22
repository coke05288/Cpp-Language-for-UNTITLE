#include<iostream>
using namespace std;

int sum(int number) {

	// ±âÀú »ç·Ê (Base Case)
	if (number == 1) return 1;

	return number + sum(number - 1);
}

int main() {

	int n(0);
	cin >> n;

	int answer = sum(n);

	cout << answer << endl;

	return 0;
}