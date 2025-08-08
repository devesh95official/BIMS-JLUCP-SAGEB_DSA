// Problem link: https://codeforces.com/contest/1950/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1950A - Stair, Peak or Neither
// Problem: Given three integers a, b, c, classify the pattern of b relative to a and c.
// If a < b < c -> "STAIR". If a < b and b > c -> "PEAK". Else -> "NONE".
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, c; 
        cin >> a >> b >> c;
        if (a < b && b < c) cout << "STAIR\n";
        else if (a < b && b > c) cout << "PEAK\n";
        else cout << "NONE\n";
    }
    return 0;
}
