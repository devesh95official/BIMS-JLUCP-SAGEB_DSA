#include <iostream>

using namespace std;


int main() {

    int n;
    cin >> n;

    string c = "Suman Rahul Ankita ";
    int k = 0;

    for (int i = 1; i <= n; i++) {

        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << c[k];
            k++;
            if (k == c.size())k = 0;
        }

        cout << endl;
    }

    return 0;
}