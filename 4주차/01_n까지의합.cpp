#include<iostream>
using namespace std;

int sum(int number) {

	int answer(0);

	for (int i = 1; i <= number; i++) {
		answer += i;
	}

	return answer;
}

int main() {

	int n(0);
	cin >> n;

	int answer = sum(n);

	cout << answer << endl;

	return 0;
}