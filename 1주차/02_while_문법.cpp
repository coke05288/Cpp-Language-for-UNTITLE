#include<iostream>
using namespace std;

int main(void) {

	int i = 0;

	while (i < 10) {
		cout << i << endl; //무한루프 

		i = i + 1; // i++; ++i;
	}

	cout << "반복이 종료되었습니다." << endl;


	return 0;
}

