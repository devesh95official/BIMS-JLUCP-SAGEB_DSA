// Problem link: https://codeforces.com/contest/1915/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1915A - Odd One Out
// Problem: For each test case, three integers a, b, c are given; two are equal and one is different. Output the unique one.
// Complexity: O(1) per test case.

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b) cout << c << '\n';
        else if (a == c) cout << b << '\n';
        else cout << a << '\n';
    }
    return 0;
}


