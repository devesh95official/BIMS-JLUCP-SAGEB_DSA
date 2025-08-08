// Problem link: https://codeforces.com/contest/1971/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1971A - My First Sorting Problem
// Problem: For each test case, given two integers x and y, print the smaller one followed by the larger one.
// Complexity: O(1) per test case.

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x <= y) cout << x << ' ' << y << '\n';
        else cout << y << ' ' << x << '\n';
    }
    return 0;
}


