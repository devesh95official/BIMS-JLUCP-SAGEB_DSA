// Problem link: https://codeforces.com/contest/1985/problem/A
#include <bits/stdc++.h>
using namespace std;

// 1985A - Creating Words
// Problem: For each test case, given two 3-letter strings a and b, swap their first characters and output the new strings.
// Complexity: O(1) per test case.

int main() {
    

    int t;
    cin >> t;
    while (t--) {
        string a, b;
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << ' ' << b << '\n';
    }
    return 0;
}


