// Problem link: https://codeforces.com/contest/2009/problem/A
#include <bits/stdc++.h>
using namespace std;

// 2009A - Minimize
// Problem: Given integers a <= b, minimize (c - a) + (b - c) over integer c with a <= c <= b.
// Observation: Expression simplifies to b - a, independent of c. Answer is b - a.
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b; 
        cin >> a >> b;
        cout << (b - a) << "\n";
    }
    return 0;
}
