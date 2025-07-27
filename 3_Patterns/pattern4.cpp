#include <iostream>

using namespace std;

// 10101
// 0101
// 101
// 01
// 1
// 1
// 01
// 101
// 0101
// 10101

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + 1 - i; j++) {

            if ((i + j) % 2 == 0) {
                cout << 1;
            }
            else {
                cout << 0;
            }

        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {

            if ((i + j) % 2 == 0) {
                cout << 1;
            }
            else {
                cout << 0;
            }

        }
        cout << endl;
    }
    return 0;
}