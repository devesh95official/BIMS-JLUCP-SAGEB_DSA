#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;

    char c = 'a';

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << c;
            c++;
            if (c == 'z' + 1)c = 'a';
        }

        cout << endl;
    }

    return 0;
}