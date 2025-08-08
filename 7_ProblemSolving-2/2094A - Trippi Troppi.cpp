// Problem link: https://codeforces.com/contest/2094/problem/A
#include <bits/stdc++.h>
using namespace std;

// 2094A - Trippi Troppi
// For each test case, read three strings and output the concatenation of their first characters.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string a, b, c;
        cin >> a >> b >> c;
        string ans;
        ans += a[0];
        ans += b[0];
        ans += c[0];
        cout << ans << '\n';
    }
    return 0;
}



