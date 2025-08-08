// Problem link: https://codeforces.com/contest/2044/problem/A
#include <bits/stdc++.h>
using namespace std;

// 2044A - Easy Problem
// Problem: Given an integer n, count ordered pairs (a, b) of positive integers such that a = n - b.
// Observation: For each b in [1, n-1], a = n - b is positive. So the count is n - 1.
// Complexity: O(1) per test case.

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n; 
        cin >> n;
        cout << n - 1 << "\n";
    }
    return 0;
}
