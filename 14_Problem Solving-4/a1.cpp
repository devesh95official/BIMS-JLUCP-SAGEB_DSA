//https://www.codechef.com/problems/BOX2

#include <bits/stdc++.h>

using namespace std;


int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, k;
        cin >> a >> b >> k;
        if (a + b < k || abs(a - b) % 2 != k % 2)cout << "-1\n";
        else cout << abs(abs(a - b) - k) / 2 << endl;
    }

    return 0;
}