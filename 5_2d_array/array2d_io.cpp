// Topic: 2D array (fixed size) — input/output
#include <iostream>
using namespace std;

int main() {
    int a[3][4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> a[i][j];
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << a[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}


