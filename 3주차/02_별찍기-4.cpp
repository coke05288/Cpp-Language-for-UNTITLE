#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;

    for (int i = 0; i <= n; i++) {
        for (int p = 0; p < i; p++) {
            cout << " ";
        }
        for (int j = 1; j <= n - i; j++) {
            cout << "*";


        }
        cout << '\n';
    }




}