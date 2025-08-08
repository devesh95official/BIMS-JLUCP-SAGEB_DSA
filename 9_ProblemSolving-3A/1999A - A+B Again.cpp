// Problem link: https://codeforces.com/contest/1999/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1999A - A+B Again
// Problem: Given a two-digit positive integer n, output the sum of its digits.
// Approach: Extract tens (n / 10) and units (n % 10), then print their sum.
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        int tens = n / 10;
        int units = n % 10;
        cout << (tens + units) << "\n";
    }
    return 0;
}
