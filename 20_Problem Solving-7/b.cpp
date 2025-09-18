#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        if (n <= 5) {
            if (n == 2)cout << 4 << endl;
            else if (n == 3)cout << 5 << endl;
            else if (n == 4)cout << 8 << endl;
            else cout << 9 << endl;
        }
        else {
            n -= 3;
            int cost = 0;
            cost += (n / 3) * 5;
            if (n % 3 + 3 == 2)cout << cost + 4 << endl;
            else if (n % 3 + 3 == 3)cout << cost + 5 << endl;
            else if (n % 3 + 3 == 4)cout << cost + 8 << endl;
            else if (n % 3 + 3 == 5) cout << cost + 9 << endl;
        }
    }

    return 0;
}