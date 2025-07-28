#include <iostream>

using namespace std;

// Input
// Input contains an ODD integer N.

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        cout << '#';
        if (i == (n + 1) / 2) {
            int tot = 2 * (n - 2);
            tot -= 5;
            for (int j = 1; j <= tot / 2 + 1; j++) {
                cout << " ";
            }
            cout << "SUMAN";
            for (int j = 1; j <= tot / 2; j++) {
                cout << " ";
            }
        }
        else if (i == 1 || i == n) {
            for (int j = 1; j <= n - 2; j++) {
                cout << " #";
            }
        }
        else {
            for (int j = 1; j <= n - 2; j++) {
                cout << "  ";
            }
        }

        cout << " #";

        cout << endl;
    }

    return 0;
}