//https://www.codechef.com/problems/CUREX

#include <bits/stdc++.h>

using namespace std;



int main() {

    int t;
    cin >> t;
    while (t--) {
        int a1, b1, a2, b2;
        cin >> a1 >> b1 >> a2 >> b2;
        if (5 * a1 + b1 < 5 * a2 + b2)cout << "NO\n";
        else if (abs((5 * a1 + b1) - (5 * a2 + b2)) % 6 == 0) {
            cout << "YES\n";
        }
        else cout << "NO\n";
    }

    return 0;
}