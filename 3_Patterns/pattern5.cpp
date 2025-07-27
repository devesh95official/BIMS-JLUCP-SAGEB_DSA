#include <iostream>

using namespace std;

// 1
// 12
// 123
// 1234
// 12345
// 1
// 12
// 321
// 1234
// 54321

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        cout << endl;
    }
    // 1
    // 12
    // 123
    // 1234
    // 12345
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for (int j = 1; j <= i; j++) {
                cout << i - j + 1;
            }
        }
        else{
            for (int j = 1; j <= i; j++) {
                cout << j;
            }
        }
        cout << endl;
    }
    // 1
    // 12
    // 321
    // 1234
    // 54321

    return 0;
}