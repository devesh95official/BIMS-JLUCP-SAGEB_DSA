// Problem link: https://codeforces.com/contest/1692/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1692A - Marathon
// Problem: Given distances a (Timur), b, c, d (others), count how many are strictly greater than a.
// Approach: Compare b, c, d against a and count the number of greater values.
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c, d; 
        cin >> a >> b >> c >> d;
        int cnt = 0;
        if (b > a) cnt++;
        if (c > a) cnt++;
        if (d > a) cnt++;
        cout << cnt << "\n";
    }
    return 0;
}
