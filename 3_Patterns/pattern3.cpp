#include <iostream>

using namespace std;

// 1
// 01
// 101
// 0101
// 10101

int main() {
    int n;
    cin >> n;
    //1st pattern
    for (int i = 1; i <= n; i++) {
        if (i % 2) {
            for (int j = 1; j <= i; j++) {
                if (j % 2) {
                    cout << "1";
                }
                else {
                    cout << "0";
                }
            }
        }
        else {
            for (int j = 1; j <= i; j++) {
                if (j % 2 == 0) {
                    cout << "1";
                }
                else {
                    cout << "0";
                }
            }
        }
        cout << endl;
    }
    //2nd pattern
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